#include "tx_manager.h"

// TODO: make lock free

TransactionId TransactionManager::NewTransaction() {
  std::lock_guard lock(map_mutex_);
  ++currentTransaction_;
  transactions_[currentTransaction_] = ACTIVE;
  return currentTransaction_;
}

void TransactionManager::Commit(TransactionId tid) {
  std::lock_guard lock(map_mutex_);
  transactions_[tid] = COMMITTED;
}

void TransactionManager::Rollback(TransactionId tid) {
  std::lock_guard lock(map_mutex_);
  transactions_[tid] = ROLLBACKED;
}

void TransactionManager::Abort(TransactionId tid) {
  std::lock_guard lock(map_mutex_);
  transactions_[tid] = ABORTED;
}

TransactionState TransactionManager::GetState(TransactionId tid) {
  std::lock_guard lock(map_mutex_);
  return transactions_[tid];
}
