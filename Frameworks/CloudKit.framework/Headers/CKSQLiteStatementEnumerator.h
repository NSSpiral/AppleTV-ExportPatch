/* Runtime dump - CKSQLiteStatementEnumerator
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteStatementEnumerator : NSEnumerator
{
    char _closed;
    CKSQLiteStatement * _statement;
    id _block;
}

@property (retain, nonatomic) CKSQLiteStatement * statement;
@property (copy, nonatomic) id block;
@property (nonatomic) char closed;

- (CKSQLiteStatementEnumerator *)initWithStatement:(CKSQLiteStatement *)arg0 block:(id /* block */)arg1;
- (void)dealloc;
- (NSObject *)nextObject;
- (void)close;
- (void).cxx_destruct;
- (char)closed;
- (void)setClosed:(char)arg0;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg0;
- (CKSQLiteStatement *)statement;
- (void)setStatement:(CKSQLiteStatement *)arg0;

@end
