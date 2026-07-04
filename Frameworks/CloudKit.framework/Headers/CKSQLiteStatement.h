/* Runtime dump - CKSQLiteStatement
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteStatement : NSObject
{
    char _reset;
    CKSQLite * _SQLite;
    NSString * _SQL;
    struct sqlite3_stmt * _handle;
}

@property (readonly, weak, nonatomic) CKSQLite * SQLite;
@property (readonly, nonatomic) NSString * SQL;
@property (readonly, nonatomic) struct sqlite3_stmt * handle;
@property (nonatomic) char reset;

- (char)isReset;
- (CKSQLiteStatement *)initWithSQLite:(CKSQLite *)arg0 SQL:(NSString *)arg1 handle:(struct sqlite3_stmt *)arg2;
- (void)bindText:(NSString *)arg0 atIndex:(unsigned int)arg1;
- (void)bindValues:(NSArray *)arg0;
- (NSString *)allObjectsByColumnName;
- (void)bindNullAtIndex:(unsigned int)arg0;
- (void)bindInt:(long)arg0 atIndex:(unsigned int)arg1;
- (void)bindInt64:(long long)arg0 atIndex:(unsigned int)arg1;
- (void)bindBlob:(id)arg0 atIndex:(unsigned int)arg1;
- (void)bindDouble:(double)arg0 atIndex:(unsigned int)arg1;
- (void)bindValue:(id)arg0 atIndex:(unsigned int)arg1;
- (int)columnTypeAtIndex:(unsigned int)arg0;
- (long long)int64AtIndex:(unsigned int)arg0;
- (NSObject *)blobAtIndex:(unsigned int)arg0;
- (CKSQLite *)SQLite;
- (NSString *)SQL;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (NSArray *)allObjects;
- (void)reset;
- (unsigned int)columnCount;
- (void).cxx_destruct;
- (NSObject *)textAtIndex:(unsigned int)arg0;
- (long)intAtIndex:(unsigned int)arg0;
- (NSObject *)columnNameAtIndex:(unsigned int)arg0;
- (double)doubleAtIndex:(unsigned int)arg0;
- (void)setReset:(char)arg0;
- (struct sqlite3_stmt *)handle;
- (void)finalizeStatement;
- (char)step;

@end
