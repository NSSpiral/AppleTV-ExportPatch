/* Runtime dump - PLSQLStatement
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLSQLStatement : NSObject
{
    char _isInsert;
    char _isDelete;
    struct sqlite3_stmt * _statement;
    NSString * _sqlQuery;
    NSString * _syncObject;
    NSMutableArray * _boundObjects;
    struct sqlite3 * _dbConnection;
}

@property struct sqlite3_stmt * statement;
@property (retain) NSString * sqlQuery;
@property (readonly) char isInsert;
@property (readonly) char isDelete;
@property (retain) NSString * syncObject;
@property (retain) NSMutableArray * boundObjects;
@property struct sqlite3 * dbConnection;

- (void)dealloc;
- (NSString *)description;
- (void)reset;
- (NSString *)perform;
- (void).cxx_destruct;
- (char)isDelete;
- (struct sqlite3 *)dbConnection;
- (PLSQLStatement *)initWithSQLQuery:(NSObject *)arg0 forDatabase:(struct sqlite3 *)arg1 withSyncObject:(NSString *)arg2 result:(int *)arg3;
- (char)isInsert;
- (int)bindValue:(id)arg0 withFormater:(short)arg1 atPosition:(int)arg2;
- (NSString *)sqlQuery;
- (void)setDbConnection:(struct sqlite3 *)arg0;
- (NSMutableArray *)boundObjects;
- (NSString *)syncObject;
- (struct sqlite3_stmt *)statement;
- (void)setStatement:(struct sqlite3_stmt *)arg0;
- (void)setSqlQuery:(NSString *)arg0;
- (void)setSyncObject:(NSString *)arg0;
- (void)setBoundObjects:(NSMutableArray *)arg0;
- (void)finalize;

@end
