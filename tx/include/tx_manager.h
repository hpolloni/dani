#pragma once

#include <cstdint>
#include <unordered_map>
#include <mutex>

using TransactionId = uint64_t;

enum TransactionState {
  UNKNOWN, ACTIVE, COMMITTED, ABORTED, ROLLBACKED
};

/**
 * A singleton object that holds the global metadata for transactions.
 */
class TransactionManager {
private:
  std::mutex map_mutex_;
  TransactionId currentTransaction_;
  std::unordered_map<TransactionId, TransactionState> transactions_;
  TransactionManager() {}
public:
  static TransactionManager* Instance() {
    static TransactionManager *manager = new TransactionManager();
    return manager;
  }

  TransactionId NewTransaction();
  void Commit(TransactionId tid);
  void Rollback(TransactionId tid);
  void Abort(TransactionId tid);
  TransactionState GetState(TransactionId tid);
};
