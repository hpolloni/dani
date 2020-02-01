
// Generated from SQLite.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  SQLiteParser : public antlr4::Parser {
public:
  enum {
    SCOL = 1, DOT = 2, OPEN_PAR = 3, CLOSE_PAR = 4, COMMA = 5, ASSIGN = 6, 
    STAR = 7, PLUS = 8, MINUS = 9, TILDE = 10, PIPE2 = 11, DIV = 12, MOD = 13, 
    LT2 = 14, GT2 = 15, AMP = 16, PIPE = 17, LT = 18, LT_EQ = 19, GT = 20, 
    GT_EQ = 21, EQ = 22, NOT_EQ1 = 23, NOT_EQ2 = 24, K_ABORT = 25, K_ACTION = 26, 
    K_ADD = 27, K_AFTER = 28, K_ALL = 29, K_ALTER = 30, K_ANALYZE = 31, 
    K_AND = 32, K_AS = 33, K_ASC = 34, K_ATTACH = 35, K_AUTOINCREMENT = 36, 
    K_BEFORE = 37, K_BEGIN = 38, K_BETWEEN = 39, K_BY = 40, K_CASCADE = 41, 
    K_CASE = 42, K_CAST = 43, K_CHECK = 44, K_COLLATE = 45, K_COLUMN = 46, 
    K_COMMIT = 47, K_CONFLICT = 48, K_CONSTRAINT = 49, K_CREATE = 50, K_CROSS = 51, 
    K_CURRENT_DATE = 52, K_CURRENT_TIME = 53, K_CURRENT_TIMESTAMP = 54, 
    K_DATABASE = 55, K_DEFAULT = 56, K_DEFERRABLE = 57, K_DEFERRED = 58, 
    K_DELETE = 59, K_DESC = 60, K_DETACH = 61, K_DISTINCT = 62, K_DROP = 63, 
    K_EACH = 64, K_ELSE = 65, K_END = 66, K_ESCAPE = 67, K_EXCEPT = 68, 
    K_EXCLUSIVE = 69, K_EXISTS = 70, K_EXPLAIN = 71, K_FAIL = 72, K_FOR = 73, 
    K_FOREIGN = 74, K_FROM = 75, K_FULL = 76, K_GLOB = 77, K_GROUP = 78, 
    K_HAVING = 79, K_IF = 80, K_IGNORE = 81, K_IMMEDIATE = 82, K_IN = 83, 
    K_INDEX = 84, K_INDEXED = 85, K_INITIALLY = 86, K_INNER = 87, K_INSERT = 88, 
    K_INSTEAD = 89, K_INTERSECT = 90, K_INTO = 91, K_IS = 92, K_ISNULL = 93, 
    K_JOIN = 94, K_KEY = 95, K_LEFT = 96, K_LIKE = 97, K_LIMIT = 98, K_MATCH = 99, 
    K_NATURAL = 100, K_NO = 101, K_NOT = 102, K_NOTNULL = 103, K_NULL = 104, 
    K_OF = 105, K_OFFSET = 106, K_ON = 107, K_OR = 108, K_ORDER = 109, K_OUTER = 110, 
    K_PLAN = 111, K_PRAGMA = 112, K_PRIMARY = 113, K_QUERY = 114, K_RAISE = 115, 
    K_RECURSIVE = 116, K_REFERENCES = 117, K_REGEXP = 118, K_REINDEX = 119, 
    K_RELEASE = 120, K_RENAME = 121, K_REPLACE = 122, K_RESTRICT = 123, 
    K_RIGHT = 124, K_ROLLBACK = 125, K_ROW = 126, K_SAVEPOINT = 127, K_SELECT = 128, 
    K_SET = 129, K_TABLE = 130, K_TEMP = 131, K_TEMPORARY = 132, K_THEN = 133, 
    K_TO = 134, K_TRANSACTION = 135, K_TRIGGER = 136, K_UNION = 137, K_UNIQUE = 138, 
    K_UPDATE = 139, K_USING = 140, K_VACUUM = 141, K_VALUES = 142, K_VIEW = 143, 
    K_VIRTUAL = 144, K_WHEN = 145, K_WHERE = 146, K_WITH = 147, K_WITHOUT = 148, 
    IDENTIFIER = 149, NUMERIC_LITERAL = 150, BIND_PARAMETER = 151, STRING_LITERAL = 152, 
    BLOB_LITERAL = 153, SINGLE_LINE_COMMENT = 154, MULTILINE_COMMENT = 155, 
    SPACES = 156, UNEXPECTED_CHAR = 157
  };

  enum {
    RuleParse = 0, RuleError = 1, RuleSql_stmt_list = 2, RuleSql_stmt = 3, 
    RuleAlter_table_stmt = 4, RuleAnalyze_stmt = 5, RuleAttach_stmt = 6, 
    RuleBegin_stmt = 7, RuleCommit_stmt = 8, RuleCompound_select_stmt = 9, 
    RuleCreate_index_stmt = 10, RuleCreate_table_stmt = 11, RuleCreate_trigger_stmt = 12, 
    RuleCreate_view_stmt = 13, RuleCreate_virtual_table_stmt = 14, RuleDelete_stmt = 15, 
    RuleDelete_stmt_limited = 16, RuleDetach_stmt = 17, RuleDrop_index_stmt = 18, 
    RuleDrop_table_stmt = 19, RuleDrop_trigger_stmt = 20, RuleDrop_view_stmt = 21, 
    RuleFactored_select_stmt = 22, RuleInsert_stmt = 23, RulePragma_stmt = 24, 
    RuleReindex_stmt = 25, RuleRelease_stmt = 26, RuleRollback_stmt = 27, 
    RuleSavepoint_stmt = 28, RuleSimple_select_stmt = 29, RuleSelect_stmt = 30, 
    RuleSelect_or_values = 31, RuleUpdate_stmt = 32, RuleUpdate_stmt_limited = 33, 
    RuleVacuum_stmt = 34, RuleColumn_def = 35, RuleType_name = 36, RuleColumn_constraint = 37, 
    RuleConflict_clause = 38, RuleExpr = 39, RuleForeign_key_clause = 40, 
    RuleRaise_function = 41, RuleIndexed_column = 42, RuleTable_constraint = 43, 
    RuleWith_clause = 44, RuleQualified_table_name = 45, RuleOrdering_term = 46, 
    RulePragma_value = 47, RuleCommon_table_expression = 48, RuleResult_column = 49, 
    RuleTable_or_subquery = 50, RuleJoin_clause = 51, RuleJoin_operator = 52, 
    RuleJoin_constraint = 53, RuleSelect_core = 54, RuleCompound_operator = 55, 
    RuleCte_table_name = 56, RuleSigned_number = 57, RuleLiteral_value = 58, 
    RuleUnary_operator = 59, RuleError_message = 60, RuleModule_argument = 61, 
    RuleColumn_alias = 62, RuleKeyword = 63, RuleName = 64, RuleFunction_name = 65, 
    RuleDatabase_name = 66, RuleTable_name = 67, RuleTable_or_index_name = 68, 
    RuleNew_table_name = 69, RuleColumn_name = 70, RuleCollation_name = 71, 
    RuleForeign_table = 72, RuleIndex_name = 73, RuleTrigger_name = 74, 
    RuleView_name = 75, RuleModule_name = 76, RulePragma_name = 77, RuleSavepoint_name = 78, 
    RuleTable_alias = 79, RuleTransaction_name = 80, RuleAny_name = 81
  };

  SQLiteParser(antlr4::TokenStream *input);
  ~SQLiteParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ParseContext;
  class ErrorContext;
  class Sql_stmt_listContext;
  class Sql_stmtContext;
  class Alter_table_stmtContext;
  class Analyze_stmtContext;
  class Attach_stmtContext;
  class Begin_stmtContext;
  class Commit_stmtContext;
  class Compound_select_stmtContext;
  class Create_index_stmtContext;
  class Create_table_stmtContext;
  class Create_trigger_stmtContext;
  class Create_view_stmtContext;
  class Create_virtual_table_stmtContext;
  class Delete_stmtContext;
  class Delete_stmt_limitedContext;
  class Detach_stmtContext;
  class Drop_index_stmtContext;
  class Drop_table_stmtContext;
  class Drop_trigger_stmtContext;
  class Drop_view_stmtContext;
  class Factored_select_stmtContext;
  class Insert_stmtContext;
  class Pragma_stmtContext;
  class Reindex_stmtContext;
  class Release_stmtContext;
  class Rollback_stmtContext;
  class Savepoint_stmtContext;
  class Simple_select_stmtContext;
  class Select_stmtContext;
  class Select_or_valuesContext;
  class Update_stmtContext;
  class Update_stmt_limitedContext;
  class Vacuum_stmtContext;
  class Column_defContext;
  class Type_nameContext;
  class Column_constraintContext;
  class Conflict_clauseContext;
  class ExprContext;
  class Foreign_key_clauseContext;
  class Raise_functionContext;
  class Indexed_columnContext;
  class Table_constraintContext;
  class With_clauseContext;
  class Qualified_table_nameContext;
  class Ordering_termContext;
  class Pragma_valueContext;
  class Common_table_expressionContext;
  class Result_columnContext;
  class Table_or_subqueryContext;
  class Join_clauseContext;
  class Join_operatorContext;
  class Join_constraintContext;
  class Select_coreContext;
  class Compound_operatorContext;
  class Cte_table_nameContext;
  class Signed_numberContext;
  class Literal_valueContext;
  class Unary_operatorContext;
  class Error_messageContext;
  class Module_argumentContext;
  class Column_aliasContext;
  class KeywordContext;
  class NameContext;
  class Function_nameContext;
  class Database_nameContext;
  class Table_nameContext;
  class Table_or_index_nameContext;
  class New_table_nameContext;
  class Column_nameContext;
  class Collation_nameContext;
  class Foreign_tableContext;
  class Index_nameContext;
  class Trigger_nameContext;
  class View_nameContext;
  class Module_nameContext;
  class Pragma_nameContext;
  class Savepoint_nameContext;
  class Table_aliasContext;
  class Transaction_nameContext;
  class Any_nameContext; 

  class  ParseContext : public antlr4::ParserRuleContext {
  public:
    ParseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Sql_stmt_listContext *> sql_stmt_list();
    Sql_stmt_listContext* sql_stmt_list(size_t i);
    std::vector<ErrorContext *> error();
    ErrorContext* error(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParseContext* parse();

  class  ErrorContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unexpected_charToken = nullptr;;
    ErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNEXPECTED_CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ErrorContext* error();

  class  Sql_stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Sql_stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_stmtContext *> sql_stmt();
    Sql_stmtContext* sql_stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_stmt_listContext* sql_stmt_list();

  class  Sql_stmtContext : public antlr4::ParserRuleContext {
  public:
    Sql_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_table_stmtContext *alter_table_stmt();
    Analyze_stmtContext *analyze_stmt();
    Attach_stmtContext *attach_stmt();
    Begin_stmtContext *begin_stmt();
    Commit_stmtContext *commit_stmt();
    Compound_select_stmtContext *compound_select_stmt();
    Create_index_stmtContext *create_index_stmt();
    Create_table_stmtContext *create_table_stmt();
    Create_trigger_stmtContext *create_trigger_stmt();
    Create_view_stmtContext *create_view_stmt();
    Create_virtual_table_stmtContext *create_virtual_table_stmt();
    Delete_stmtContext *delete_stmt();
    Delete_stmt_limitedContext *delete_stmt_limited();
    Detach_stmtContext *detach_stmt();
    Drop_index_stmtContext *drop_index_stmt();
    Drop_table_stmtContext *drop_table_stmt();
    Drop_trigger_stmtContext *drop_trigger_stmt();
    Drop_view_stmtContext *drop_view_stmt();
    Factored_select_stmtContext *factored_select_stmt();
    Insert_stmtContext *insert_stmt();
    Pragma_stmtContext *pragma_stmt();
    Reindex_stmtContext *reindex_stmt();
    Release_stmtContext *release_stmt();
    Rollback_stmtContext *rollback_stmt();
    Savepoint_stmtContext *savepoint_stmt();
    Simple_select_stmtContext *simple_select_stmt();
    Select_stmtContext *select_stmt();
    Update_stmtContext *update_stmt();
    Update_stmt_limitedContext *update_stmt_limited();
    Vacuum_stmtContext *vacuum_stmt();
    antlr4::tree::TerminalNode *K_EXPLAIN();
    antlr4::tree::TerminalNode *K_QUERY();
    antlr4::tree::TerminalNode *K_PLAN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_stmtContext* sql_stmt();

  class  Alter_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ALTER();
    antlr4::tree::TerminalNode *K_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *K_RENAME();
    antlr4::tree::TerminalNode *K_TO();
    New_table_nameContext *new_table_name();
    antlr4::tree::TerminalNode *K_ADD();
    Column_defContext *column_def();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_COLUMN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_stmtContext* alter_table_stmt();

  class  Analyze_stmtContext : public antlr4::ParserRuleContext {
  public:
    Analyze_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ANALYZE();
    Database_nameContext *database_name();
    Table_or_index_nameContext *table_or_index_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_stmtContext* analyze_stmt();

  class  Attach_stmtContext : public antlr4::ParserRuleContext {
  public:
    Attach_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ATTACH();
    ExprContext *expr();
    antlr4::tree::TerminalNode *K_AS();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_DATABASE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attach_stmtContext* attach_stmt();

  class  Begin_stmtContext : public antlr4::ParserRuleContext {
  public:
    Begin_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_BEGIN();
    antlr4::tree::TerminalNode *K_TRANSACTION();
    antlr4::tree::TerminalNode *K_DEFERRED();
    antlr4::tree::TerminalNode *K_IMMEDIATE();
    antlr4::tree::TerminalNode *K_EXCLUSIVE();
    Transaction_nameContext *transaction_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_stmtContext* begin_stmt();

  class  Commit_stmtContext : public antlr4::ParserRuleContext {
  public:
    Commit_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_COMMIT();
    antlr4::tree::TerminalNode *K_END();
    antlr4::tree::TerminalNode *K_TRANSACTION();
    Transaction_nameContext *transaction_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commit_stmtContext* commit_stmt();

  class  Compound_select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_coreContext *> select_core();
    Select_coreContext* select_core(size_t i);
    antlr4::tree::TerminalNode *K_WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_BY();
    std::vector<Ordering_termContext *> ordering_term();
    Ordering_termContext* ordering_term(size_t i);
    antlr4::tree::TerminalNode *K_LIMIT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_UNION();
    antlr4::tree::TerminalNode* K_UNION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_INTERSECT();
    antlr4::tree::TerminalNode* K_INTERSECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_EXCEPT();
    antlr4::tree::TerminalNode* K_EXCEPT(size_t i);
    antlr4::tree::TerminalNode *K_RECURSIVE();
    antlr4::tree::TerminalNode *K_OFFSET();
    std::vector<antlr4::tree::TerminalNode *> K_ALL();
    antlr4::tree::TerminalNode* K_ALL(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_select_stmtContext* compound_select_stmt();

  class  Create_index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_CREATE();
    antlr4::tree::TerminalNode *K_INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *K_ON();
    Table_nameContext *table_name();
    std::vector<Indexed_columnContext *> indexed_column();
    Indexed_columnContext* indexed_column(size_t i);
    antlr4::tree::TerminalNode *K_UNIQUE();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_WHERE();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_stmtContext* create_index_stmt();

  class  Create_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_CREATE();
    antlr4::tree::TerminalNode *K_TABLE();
    Table_nameContext *table_name();
    std::vector<Column_defContext *> column_def();
    Column_defContext* column_def(size_t i);
    antlr4::tree::TerminalNode *K_AS();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_TEMP();
    antlr4::tree::TerminalNode *K_TEMPORARY();
    std::vector<Table_constraintContext *> table_constraint();
    Table_constraintContext* table_constraint(size_t i);
    antlr4::tree::TerminalNode *K_WITHOUT();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_stmtContext* create_table_stmt();

  class  Create_trigger_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_trigger_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_CREATE();
    antlr4::tree::TerminalNode *K_TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *K_ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *K_BEGIN();
    antlr4::tree::TerminalNode *K_END();
    antlr4::tree::TerminalNode *K_DELETE();
    antlr4::tree::TerminalNode *K_INSERT();
    antlr4::tree::TerminalNode *K_UPDATE();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_EXISTS();
    std::vector<Database_nameContext *> database_name();
    Database_nameContext* database_name(size_t i);
    antlr4::tree::TerminalNode *K_BEFORE();
    antlr4::tree::TerminalNode *K_AFTER();
    antlr4::tree::TerminalNode *K_INSTEAD();
    std::vector<antlr4::tree::TerminalNode *> K_OF();
    antlr4::tree::TerminalNode* K_OF(size_t i);
    antlr4::tree::TerminalNode *K_FOR();
    antlr4::tree::TerminalNode *K_EACH();
    antlr4::tree::TerminalNode *K_ROW();
    antlr4::tree::TerminalNode *K_WHEN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *K_TEMP();
    antlr4::tree::TerminalNode *K_TEMPORARY();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<Update_stmtContext *> update_stmt();
    Update_stmtContext* update_stmt(size_t i);
    std::vector<Insert_stmtContext *> insert_stmt();
    Insert_stmtContext* insert_stmt(size_t i);
    std::vector<Delete_stmtContext *> delete_stmt();
    Delete_stmtContext* delete_stmt(size_t i);
    std::vector<Select_stmtContext *> select_stmt();
    Select_stmtContext* select_stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_trigger_stmtContext* create_trigger_stmt();

  class  Create_view_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_view_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_CREATE();
    antlr4::tree::TerminalNode *K_VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *K_AS();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_TEMP();
    antlr4::tree::TerminalNode *K_TEMPORARY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_stmtContext* create_view_stmt();

  class  Create_virtual_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Create_virtual_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_CREATE();
    antlr4::tree::TerminalNode *K_VIRTUAL();
    antlr4::tree::TerminalNode *K_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *K_USING();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();
    std::vector<Module_argumentContext *> module_argument();
    Module_argumentContext* module_argument(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_virtual_table_stmtContext* create_virtual_table_stmt();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DELETE();
    antlr4::tree::TerminalNode *K_FROM();
    Qualified_table_nameContext *qualified_table_name();
    With_clauseContext *with_clause();
    antlr4::tree::TerminalNode *K_WHERE();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  Delete_stmt_limitedContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmt_limitedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DELETE();
    antlr4::tree::TerminalNode *K_FROM();
    Qualified_table_nameContext *qualified_table_name();
    With_clauseContext *with_clause();
    antlr4::tree::TerminalNode *K_WHERE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *K_LIMIT();
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_BY();
    std::vector<Ordering_termContext *> ordering_term();
    Ordering_termContext* ordering_term(size_t i);
    antlr4::tree::TerminalNode *K_OFFSET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmt_limitedContext* delete_stmt_limited();

  class  Detach_stmtContext : public antlr4::ParserRuleContext {
  public:
    Detach_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DETACH();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_DATABASE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Detach_stmtContext* detach_stmt();

  class  Drop_index_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_index_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DROP();
    antlr4::tree::TerminalNode *K_INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_index_stmtContext* drop_index_stmt();

  class  Drop_table_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_table_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DROP();
    antlr4::tree::TerminalNode *K_TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_table_stmtContext* drop_table_stmt();

  class  Drop_trigger_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_trigger_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DROP();
    antlr4::tree::TerminalNode *K_TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_trigger_stmtContext* drop_trigger_stmt();

  class  Drop_view_stmtContext : public antlr4::ParserRuleContext {
  public:
    Drop_view_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_DROP();
    antlr4::tree::TerminalNode *K_VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_EXISTS();
    Database_nameContext *database_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_view_stmtContext* drop_view_stmt();

  class  Factored_select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Factored_select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_coreContext *> select_core();
    Select_coreContext* select_core(size_t i);
    antlr4::tree::TerminalNode *K_WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    std::vector<Compound_operatorContext *> compound_operator();
    Compound_operatorContext* compound_operator(size_t i);
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_BY();
    std::vector<Ordering_termContext *> ordering_term();
    Ordering_termContext* ordering_term(size_t i);
    antlr4::tree::TerminalNode *K_LIMIT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *K_RECURSIVE();
    antlr4::tree::TerminalNode *K_OFFSET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factored_select_stmtContext* factored_select_stmt();

  class  Insert_stmtContext : public antlr4::ParserRuleContext {
  public:
    Insert_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_INTO();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *K_INSERT();
    antlr4::tree::TerminalNode *K_REPLACE();
    antlr4::tree::TerminalNode *K_OR();
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_ABORT();
    antlr4::tree::TerminalNode *K_FAIL();
    antlr4::tree::TerminalNode *K_IGNORE();
    antlr4::tree::TerminalNode *K_VALUES();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *K_DEFAULT();
    With_clauseContext *with_clause();
    Database_nameContext *database_name();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_stmtContext* insert_stmt();

  class  Pragma_stmtContext : public antlr4::ParserRuleContext {
  public:
    Pragma_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_PRAGMA();
    Pragma_nameContext *pragma_name();
    Database_nameContext *database_name();
    Pragma_valueContext *pragma_value();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_stmtContext* pragma_stmt();

  class  Reindex_stmtContext : public antlr4::ParserRuleContext {
  public:
    Reindex_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_REINDEX();
    Collation_nameContext *collation_name();
    Table_nameContext *table_name();
    Index_nameContext *index_name();
    Database_nameContext *database_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reindex_stmtContext* reindex_stmt();

  class  Release_stmtContext : public antlr4::ParserRuleContext {
  public:
    Release_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_RELEASE();
    Savepoint_nameContext *savepoint_name();
    antlr4::tree::TerminalNode *K_SAVEPOINT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Release_stmtContext* release_stmt();

  class  Rollback_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rollback_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_TRANSACTION();
    antlr4::tree::TerminalNode *K_TO();
    Savepoint_nameContext *savepoint_name();
    Transaction_nameContext *transaction_name();
    antlr4::tree::TerminalNode *K_SAVEPOINT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rollback_stmtContext* rollback_stmt();

  class  Savepoint_stmtContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_SAVEPOINT();
    Savepoint_nameContext *savepoint_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_stmtContext* savepoint_stmt();

  class  Simple_select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Simple_select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_coreContext *select_core();
    antlr4::tree::TerminalNode *K_WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_BY();
    std::vector<Ordering_termContext *> ordering_term();
    Ordering_termContext* ordering_term(size_t i);
    antlr4::tree::TerminalNode *K_LIMIT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *K_RECURSIVE();
    antlr4::tree::TerminalNode *K_OFFSET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_select_stmtContext* simple_select_stmt();

  class  Select_stmtContext : public antlr4::ParserRuleContext {
  public:
    Select_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_or_valuesContext *> select_or_values();
    Select_or_valuesContext* select_or_values(size_t i);
    antlr4::tree::TerminalNode *K_WITH();
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    std::vector<Compound_operatorContext *> compound_operator();
    Compound_operatorContext* compound_operator(size_t i);
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_BY();
    std::vector<Ordering_termContext *> ordering_term();
    Ordering_termContext* ordering_term(size_t i);
    antlr4::tree::TerminalNode *K_LIMIT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *K_RECURSIVE();
    antlr4::tree::TerminalNode *K_OFFSET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_stmtContext* select_stmt();

  class  Select_or_valuesContext : public antlr4::ParserRuleContext {
  public:
    Select_or_valuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_SELECT();
    std::vector<Result_columnContext *> result_column();
    Result_columnContext* result_column(size_t i);
    antlr4::tree::TerminalNode *K_FROM();
    antlr4::tree::TerminalNode *K_WHERE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *K_GROUP();
    antlr4::tree::TerminalNode *K_BY();
    antlr4::tree::TerminalNode *K_DISTINCT();
    antlr4::tree::TerminalNode *K_ALL();
    std::vector<Table_or_subqueryContext *> table_or_subquery();
    Table_or_subqueryContext* table_or_subquery(size_t i);
    Join_clauseContext *join_clause();
    antlr4::tree::TerminalNode *K_HAVING();
    antlr4::tree::TerminalNode *K_VALUES();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_or_valuesContext* select_or_values();

  class  Update_stmtContext : public antlr4::ParserRuleContext {
  public:
    Update_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_UPDATE();
    Qualified_table_nameContext *qualified_table_name();
    antlr4::tree::TerminalNode *K_SET();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    With_clauseContext *with_clause();
    antlr4::tree::TerminalNode *K_OR();
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_ABORT();
    antlr4::tree::TerminalNode *K_REPLACE();
    antlr4::tree::TerminalNode *K_FAIL();
    antlr4::tree::TerminalNode *K_IGNORE();
    antlr4::tree::TerminalNode *K_WHERE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_stmtContext* update_stmt();

  class  Update_stmt_limitedContext : public antlr4::ParserRuleContext {
  public:
    Update_stmt_limitedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_UPDATE();
    Qualified_table_nameContext *qualified_table_name();
    antlr4::tree::TerminalNode *K_SET();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    With_clauseContext *with_clause();
    antlr4::tree::TerminalNode *K_OR();
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_ABORT();
    antlr4::tree::TerminalNode *K_REPLACE();
    antlr4::tree::TerminalNode *K_FAIL();
    antlr4::tree::TerminalNode *K_IGNORE();
    antlr4::tree::TerminalNode *K_WHERE();
    antlr4::tree::TerminalNode *K_LIMIT();
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_BY();
    std::vector<Ordering_termContext *> ordering_term();
    Ordering_termContext* ordering_term(size_t i);
    antlr4::tree::TerminalNode *K_OFFSET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_stmt_limitedContext* update_stmt_limited();

  class  Vacuum_stmtContext : public antlr4::ParserRuleContext {
  public:
    Vacuum_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_VACUUM();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vacuum_stmtContext* vacuum_stmt();

  class  Column_defContext : public antlr4::ParserRuleContext {
  public:
    Column_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Type_nameContext *type_name();
    std::vector<Column_constraintContext *> column_constraint();
    Column_constraintContext* column_constraint(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_defContext* column_def();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<Signed_numberContext *> signed_number();
    Signed_numberContext* signed_number(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

  class  Column_constraintContext : public antlr4::ParserRuleContext {
  public:
    Column_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_PRIMARY();
    antlr4::tree::TerminalNode *K_KEY();
    Conflict_clauseContext *conflict_clause();
    antlr4::tree::TerminalNode *K_NULL();
    antlr4::tree::TerminalNode *K_UNIQUE();
    antlr4::tree::TerminalNode *K_CHECK();
    ExprContext *expr();
    antlr4::tree::TerminalNode *K_DEFAULT();
    antlr4::tree::TerminalNode *K_COLLATE();
    Collation_nameContext *collation_name();
    Foreign_key_clauseContext *foreign_key_clause();
    antlr4::tree::TerminalNode *K_CONSTRAINT();
    NameContext *name();
    Signed_numberContext *signed_number();
    Literal_valueContext *literal_value();
    antlr4::tree::TerminalNode *K_AUTOINCREMENT();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_ASC();
    antlr4::tree::TerminalNode *K_DESC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_constraintContext* column_constraint();

  class  Conflict_clauseContext : public antlr4::ParserRuleContext {
  public:
    Conflict_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ON();
    antlr4::tree::TerminalNode *K_CONFLICT();
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_ABORT();
    antlr4::tree::TerminalNode *K_FAIL();
    antlr4::tree::TerminalNode *K_IGNORE();
    antlr4::tree::TerminalNode *K_REPLACE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conflict_clauseContext* conflict_clause();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Literal_valueContext *literal_value();
    antlr4::tree::TerminalNode *BIND_PARAMETER();
    Column_nameContext *column_name();
    Table_nameContext *table_name();
    Database_nameContext *database_name();
    Unary_operatorContext *unary_operator();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *K_DISTINCT();
    antlr4::tree::TerminalNode *K_CAST();
    antlr4::tree::TerminalNode *K_AS();
    Type_nameContext *type_name();
    Select_stmtContext *select_stmt();
    antlr4::tree::TerminalNode *K_EXISTS();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_CASE();
    antlr4::tree::TerminalNode *K_END();
    std::vector<antlr4::tree::TerminalNode *> K_WHEN();
    antlr4::tree::TerminalNode* K_WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_THEN();
    antlr4::tree::TerminalNode* K_THEN(size_t i);
    antlr4::tree::TerminalNode *K_ELSE();
    Raise_functionContext *raise_function();
    antlr4::tree::TerminalNode *K_IS();
    antlr4::tree::TerminalNode *K_IN();
    antlr4::tree::TerminalNode *K_LIKE();
    antlr4::tree::TerminalNode *K_GLOB();
    antlr4::tree::TerminalNode *K_MATCH();
    antlr4::tree::TerminalNode *K_REGEXP();
    antlr4::tree::TerminalNode *K_AND();
    antlr4::tree::TerminalNode *K_OR();
    antlr4::tree::TerminalNode *K_BETWEEN();
    antlr4::tree::TerminalNode *K_COLLATE();
    Collation_nameContext *collation_name();
    antlr4::tree::TerminalNode *K_ESCAPE();
    antlr4::tree::TerminalNode *K_ISNULL();
    antlr4::tree::TerminalNode *K_NOTNULL();
    antlr4::tree::TerminalNode *K_NULL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Foreign_key_clauseContext : public antlr4::ParserRuleContext {
  public:
    Foreign_key_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_REFERENCES();
    Foreign_tableContext *foreign_table();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    antlr4::tree::TerminalNode *K_DEFERRABLE();
    std::vector<antlr4::tree::TerminalNode *> K_ON();
    antlr4::tree::TerminalNode* K_ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_MATCH();
    antlr4::tree::TerminalNode* K_MATCH(size_t i);
    std::vector<NameContext *> name();
    NameContext* name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_DELETE();
    antlr4::tree::TerminalNode* K_DELETE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_UPDATE();
    antlr4::tree::TerminalNode* K_UPDATE(size_t i);
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_INITIALLY();
    antlr4::tree::TerminalNode *K_DEFERRED();
    antlr4::tree::TerminalNode *K_IMMEDIATE();
    std::vector<antlr4::tree::TerminalNode *> K_SET();
    antlr4::tree::TerminalNode* K_SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_NULL();
    antlr4::tree::TerminalNode* K_NULL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_DEFAULT();
    antlr4::tree::TerminalNode* K_DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_CASCADE();
    antlr4::tree::TerminalNode* K_CASCADE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_RESTRICT();
    antlr4::tree::TerminalNode* K_RESTRICT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_NO();
    antlr4::tree::TerminalNode* K_NO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_ACTION();
    antlr4::tree::TerminalNode* K_ACTION(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_key_clauseContext* foreign_key_clause();

  class  Raise_functionContext : public antlr4::ParserRuleContext {
  public:
    Raise_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_RAISE();
    antlr4::tree::TerminalNode *K_IGNORE();
    Error_messageContext *error_message();
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_ABORT();
    antlr4::tree::TerminalNode *K_FAIL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Raise_functionContext* raise_function();

  class  Indexed_columnContext : public antlr4::ParserRuleContext {
  public:
    Indexed_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *K_COLLATE();
    Collation_nameContext *collation_name();
    antlr4::tree::TerminalNode *K_ASC();
    antlr4::tree::TerminalNode *K_DESC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Indexed_columnContext* indexed_column();

  class  Table_constraintContext : public antlr4::ParserRuleContext {
  public:
    Table_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Indexed_columnContext *> indexed_column();
    Indexed_columnContext* indexed_column(size_t i);
    Conflict_clauseContext *conflict_clause();
    antlr4::tree::TerminalNode *K_CHECK();
    ExprContext *expr();
    antlr4::tree::TerminalNode *K_FOREIGN();
    antlr4::tree::TerminalNode *K_KEY();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    Foreign_key_clauseContext *foreign_key_clause();
    antlr4::tree::TerminalNode *K_CONSTRAINT();
    NameContext *name();
    antlr4::tree::TerminalNode *K_PRIMARY();
    antlr4::tree::TerminalNode *K_UNIQUE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_constraintContext* table_constraint();

  class  With_clauseContext : public antlr4::ParserRuleContext {
  public:
    With_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_WITH();
    std::vector<Cte_table_nameContext *> cte_table_name();
    Cte_table_nameContext* cte_table_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> K_AS();
    antlr4::tree::TerminalNode* K_AS(size_t i);
    std::vector<Select_stmtContext *> select_stmt();
    Select_stmtContext* select_stmt(size_t i);
    antlr4::tree::TerminalNode *K_RECURSIVE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_clauseContext* with_clause();

  class  Qualified_table_nameContext : public antlr4::ParserRuleContext {
  public:
    Qualified_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    Database_nameContext *database_name();
    antlr4::tree::TerminalNode *K_INDEXED();
    antlr4::tree::TerminalNode *K_BY();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *K_NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Qualified_table_nameContext* qualified_table_name();

  class  Ordering_termContext : public antlr4::ParserRuleContext {
  public:
    Ordering_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *K_COLLATE();
    Collation_nameContext *collation_name();
    antlr4::tree::TerminalNode *K_ASC();
    antlr4::tree::TerminalNode *K_DESC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordering_termContext* ordering_term();

  class  Pragma_valueContext : public antlr4::ParserRuleContext {
  public:
    Pragma_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Signed_numberContext *signed_number();
    NameContext *name();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_valueContext* pragma_value();

  class  Common_table_expressionContext : public antlr4::ParserRuleContext {
  public:
    Common_table_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *K_AS();
    Select_stmtContext *select_stmt();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_expressionContext* common_table_expression();

  class  Result_columnContext : public antlr4::ParserRuleContext {
  public:
    Result_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    ExprContext *expr();
    Column_aliasContext *column_alias();
    antlr4::tree::TerminalNode *K_AS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Result_columnContext* result_column();

  class  Table_or_subqueryContext : public antlr4::ParserRuleContext {
  public:
    Table_or_subqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    Database_nameContext *database_name();
    Table_aliasContext *table_alias();
    antlr4::tree::TerminalNode *K_INDEXED();
    antlr4::tree::TerminalNode *K_BY();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_AS();
    std::vector<Table_or_subqueryContext *> table_or_subquery();
    Table_or_subqueryContext* table_or_subquery(size_t i);
    Join_clauseContext *join_clause();
    Select_stmtContext *select_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_or_subqueryContext* table_or_subquery();

  class  Join_clauseContext : public antlr4::ParserRuleContext {
  public:
    Join_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_or_subqueryContext *> table_or_subquery();
    Table_or_subqueryContext* table_or_subquery(size_t i);
    std::vector<Join_operatorContext *> join_operator();
    Join_operatorContext* join_operator(size_t i);
    std::vector<Join_constraintContext *> join_constraint();
    Join_constraintContext* join_constraint(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_clauseContext* join_clause();

  class  Join_operatorContext : public antlr4::ParserRuleContext {
  public:
    Join_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_JOIN();
    antlr4::tree::TerminalNode *K_NATURAL();
    antlr4::tree::TerminalNode *K_LEFT();
    antlr4::tree::TerminalNode *K_INNER();
    antlr4::tree::TerminalNode *K_CROSS();
    antlr4::tree::TerminalNode *K_OUTER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_operatorContext* join_operator();

  class  Join_constraintContext : public antlr4::ParserRuleContext {
  public:
    Join_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ON();
    ExprContext *expr();
    antlr4::tree::TerminalNode *K_USING();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_constraintContext* join_constraint();

  class  Select_coreContext : public antlr4::ParserRuleContext {
  public:
    Select_coreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_SELECT();
    std::vector<Result_columnContext *> result_column();
    Result_columnContext* result_column(size_t i);
    antlr4::tree::TerminalNode *K_FROM();
    antlr4::tree::TerminalNode *K_WHERE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *K_GROUP();
    antlr4::tree::TerminalNode *K_BY();
    antlr4::tree::TerminalNode *K_DISTINCT();
    antlr4::tree::TerminalNode *K_ALL();
    std::vector<Table_or_subqueryContext *> table_or_subquery();
    Table_or_subqueryContext* table_or_subquery(size_t i);
    Join_clauseContext *join_clause();
    antlr4::tree::TerminalNode *K_HAVING();
    antlr4::tree::TerminalNode *K_VALUES();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_coreContext* select_core();

  class  Compound_operatorContext : public antlr4::ParserRuleContext {
  public:
    Compound_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_UNION();
    antlr4::tree::TerminalNode *K_ALL();
    antlr4::tree::TerminalNode *K_INTERSECT();
    antlr4::tree::TerminalNode *K_EXCEPT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_operatorContext* compound_operator();

  class  Cte_table_nameContext : public antlr4::ParserRuleContext {
  public:
    Cte_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cte_table_nameContext* cte_table_name();

  class  Signed_numberContext : public antlr4::ParserRuleContext {
  public:
    Signed_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERIC_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_numberContext* signed_number();

  class  Literal_valueContext : public antlr4::ParserRuleContext {
  public:
    Literal_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERIC_LITERAL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BLOB_LITERAL();
    antlr4::tree::TerminalNode *K_NULL();
    antlr4::tree::TerminalNode *K_CURRENT_TIME();
    antlr4::tree::TerminalNode *K_CURRENT_DATE();
    antlr4::tree::TerminalNode *K_CURRENT_TIMESTAMP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Literal_valueContext* literal_value();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Error_messageContext : public antlr4::ParserRuleContext {
  public:
    Error_messageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Error_messageContext* error_message();

  class  Module_argumentContext : public antlr4::ParserRuleContext {
  public:
    Module_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    Column_defContext *column_def();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_argumentContext* module_argument();

  class  Column_aliasContext : public antlr4::ParserRuleContext {
  public:
    Column_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_aliasContext* column_alias();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K_ABORT();
    antlr4::tree::TerminalNode *K_ACTION();
    antlr4::tree::TerminalNode *K_ADD();
    antlr4::tree::TerminalNode *K_AFTER();
    antlr4::tree::TerminalNode *K_ALL();
    antlr4::tree::TerminalNode *K_ALTER();
    antlr4::tree::TerminalNode *K_ANALYZE();
    antlr4::tree::TerminalNode *K_AND();
    antlr4::tree::TerminalNode *K_AS();
    antlr4::tree::TerminalNode *K_ASC();
    antlr4::tree::TerminalNode *K_ATTACH();
    antlr4::tree::TerminalNode *K_AUTOINCREMENT();
    antlr4::tree::TerminalNode *K_BEFORE();
    antlr4::tree::TerminalNode *K_BEGIN();
    antlr4::tree::TerminalNode *K_BETWEEN();
    antlr4::tree::TerminalNode *K_BY();
    antlr4::tree::TerminalNode *K_CASCADE();
    antlr4::tree::TerminalNode *K_CASE();
    antlr4::tree::TerminalNode *K_CAST();
    antlr4::tree::TerminalNode *K_CHECK();
    antlr4::tree::TerminalNode *K_COLLATE();
    antlr4::tree::TerminalNode *K_COLUMN();
    antlr4::tree::TerminalNode *K_COMMIT();
    antlr4::tree::TerminalNode *K_CONFLICT();
    antlr4::tree::TerminalNode *K_CONSTRAINT();
    antlr4::tree::TerminalNode *K_CREATE();
    antlr4::tree::TerminalNode *K_CROSS();
    antlr4::tree::TerminalNode *K_CURRENT_DATE();
    antlr4::tree::TerminalNode *K_CURRENT_TIME();
    antlr4::tree::TerminalNode *K_CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *K_DATABASE();
    antlr4::tree::TerminalNode *K_DEFAULT();
    antlr4::tree::TerminalNode *K_DEFERRABLE();
    antlr4::tree::TerminalNode *K_DEFERRED();
    antlr4::tree::TerminalNode *K_DELETE();
    antlr4::tree::TerminalNode *K_DESC();
    antlr4::tree::TerminalNode *K_DETACH();
    antlr4::tree::TerminalNode *K_DISTINCT();
    antlr4::tree::TerminalNode *K_DROP();
    antlr4::tree::TerminalNode *K_EACH();
    antlr4::tree::TerminalNode *K_ELSE();
    antlr4::tree::TerminalNode *K_END();
    antlr4::tree::TerminalNode *K_ESCAPE();
    antlr4::tree::TerminalNode *K_EXCEPT();
    antlr4::tree::TerminalNode *K_EXCLUSIVE();
    antlr4::tree::TerminalNode *K_EXISTS();
    antlr4::tree::TerminalNode *K_EXPLAIN();
    antlr4::tree::TerminalNode *K_FAIL();
    antlr4::tree::TerminalNode *K_FOR();
    antlr4::tree::TerminalNode *K_FOREIGN();
    antlr4::tree::TerminalNode *K_FROM();
    antlr4::tree::TerminalNode *K_FULL();
    antlr4::tree::TerminalNode *K_GLOB();
    antlr4::tree::TerminalNode *K_GROUP();
    antlr4::tree::TerminalNode *K_HAVING();
    antlr4::tree::TerminalNode *K_IF();
    antlr4::tree::TerminalNode *K_IGNORE();
    antlr4::tree::TerminalNode *K_IMMEDIATE();
    antlr4::tree::TerminalNode *K_IN();
    antlr4::tree::TerminalNode *K_INDEX();
    antlr4::tree::TerminalNode *K_INDEXED();
    antlr4::tree::TerminalNode *K_INITIALLY();
    antlr4::tree::TerminalNode *K_INNER();
    antlr4::tree::TerminalNode *K_INSERT();
    antlr4::tree::TerminalNode *K_INSTEAD();
    antlr4::tree::TerminalNode *K_INTERSECT();
    antlr4::tree::TerminalNode *K_INTO();
    antlr4::tree::TerminalNode *K_IS();
    antlr4::tree::TerminalNode *K_ISNULL();
    antlr4::tree::TerminalNode *K_JOIN();
    antlr4::tree::TerminalNode *K_KEY();
    antlr4::tree::TerminalNode *K_LEFT();
    antlr4::tree::TerminalNode *K_LIKE();
    antlr4::tree::TerminalNode *K_LIMIT();
    antlr4::tree::TerminalNode *K_MATCH();
    antlr4::tree::TerminalNode *K_NATURAL();
    antlr4::tree::TerminalNode *K_NO();
    antlr4::tree::TerminalNode *K_NOT();
    antlr4::tree::TerminalNode *K_NOTNULL();
    antlr4::tree::TerminalNode *K_NULL();
    antlr4::tree::TerminalNode *K_OF();
    antlr4::tree::TerminalNode *K_OFFSET();
    antlr4::tree::TerminalNode *K_ON();
    antlr4::tree::TerminalNode *K_OR();
    antlr4::tree::TerminalNode *K_ORDER();
    antlr4::tree::TerminalNode *K_OUTER();
    antlr4::tree::TerminalNode *K_PLAN();
    antlr4::tree::TerminalNode *K_PRAGMA();
    antlr4::tree::TerminalNode *K_PRIMARY();
    antlr4::tree::TerminalNode *K_QUERY();
    antlr4::tree::TerminalNode *K_RAISE();
    antlr4::tree::TerminalNode *K_RECURSIVE();
    antlr4::tree::TerminalNode *K_REFERENCES();
    antlr4::tree::TerminalNode *K_REGEXP();
    antlr4::tree::TerminalNode *K_REINDEX();
    antlr4::tree::TerminalNode *K_RELEASE();
    antlr4::tree::TerminalNode *K_RENAME();
    antlr4::tree::TerminalNode *K_REPLACE();
    antlr4::tree::TerminalNode *K_RESTRICT();
    antlr4::tree::TerminalNode *K_RIGHT();
    antlr4::tree::TerminalNode *K_ROLLBACK();
    antlr4::tree::TerminalNode *K_ROW();
    antlr4::tree::TerminalNode *K_SAVEPOINT();
    antlr4::tree::TerminalNode *K_SELECT();
    antlr4::tree::TerminalNode *K_SET();
    antlr4::tree::TerminalNode *K_TABLE();
    antlr4::tree::TerminalNode *K_TEMP();
    antlr4::tree::TerminalNode *K_TEMPORARY();
    antlr4::tree::TerminalNode *K_THEN();
    antlr4::tree::TerminalNode *K_TO();
    antlr4::tree::TerminalNode *K_TRANSACTION();
    antlr4::tree::TerminalNode *K_TRIGGER();
    antlr4::tree::TerminalNode *K_UNION();
    antlr4::tree::TerminalNode *K_UNIQUE();
    antlr4::tree::TerminalNode *K_UPDATE();
    antlr4::tree::TerminalNode *K_USING();
    antlr4::tree::TerminalNode *K_VACUUM();
    antlr4::tree::TerminalNode *K_VALUES();
    antlr4::tree::TerminalNode *K_VIEW();
    antlr4::tree::TerminalNode *K_VIRTUAL();
    antlr4::tree::TerminalNode *K_WHEN();
    antlr4::tree::TerminalNode *K_WHERE();
    antlr4::tree::TerminalNode *K_WITH();
    antlr4::tree::TerminalNode *K_WITHOUT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_nameContext* database_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Table_or_index_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_or_index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_or_index_nameContext* table_or_index_name();

  class  New_table_nameContext : public antlr4::ParserRuleContext {
  public:
    New_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_table_nameContext* new_table_name();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_nameContext* column_name();

  class  Collation_nameContext : public antlr4::ParserRuleContext {
  public:
    Collation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collation_nameContext* collation_name();

  class  Foreign_tableContext : public antlr4::ParserRuleContext {
  public:
    Foreign_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Foreign_tableContext* foreign_table();

  class  Index_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_nameContext* index_name();

  class  Trigger_nameContext : public antlr4::ParserRuleContext {
  public:
    Trigger_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_nameContext* trigger_name();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_nameContext* view_name();

  class  Module_nameContext : public antlr4::ParserRuleContext {
  public:
    Module_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_nameContext* module_name();

  class  Pragma_nameContext : public antlr4::ParserRuleContext {
  public:
    Pragma_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_nameContext* pragma_name();

  class  Savepoint_nameContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_nameContext* savepoint_name();

  class  Table_aliasContext : public antlr4::ParserRuleContext {
  public:
    Table_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_aliasContext* table_alias();

  class  Transaction_nameContext : public antlr4::ParserRuleContext {
  public:
    Transaction_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transaction_nameContext* transaction_name();

  class  Any_nameContext : public antlr4::ParserRuleContext {
  public:
    Any_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    Any_nameContext *any_name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Any_nameContext* any_name();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

