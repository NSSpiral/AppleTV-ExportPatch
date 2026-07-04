/* Runtime dump - MFProtectedSQLiteConnection
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFProtectedSQLiteConnection : MFSQLiteConnection
{
    NSString * _protectedName;
    long _vfsOnce;
    NSString * _vfsName;
    char _attached;
}

@property (readonly, nonatomic) char isProtectedDatabaseAttached;

- (void)dealloc;
- (void)close;
- (int)attachProtectedDatabase;
- (char)isProtectedDatabaseAttached;
- (MFProtectedSQLiteConnection *)initWithPath:(NSString *)arg0 databaseName:(NSString *)arg1 protectedName:(NSString *)arg2;
- (int)detachProtectedDatabase;
- (char *)_vfsModuleName;

@end
