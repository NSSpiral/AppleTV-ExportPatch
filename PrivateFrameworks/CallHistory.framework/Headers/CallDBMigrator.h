/* Runtime dump - CallDBMigrator
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBMigrator : NSObject
{
    NSXPCConnection * _connection;
    NSXPCInterface * _interface;
}

- (CallDBMigrator *)init;
- (void).cxx_destruct;
- (void)migrate:(char)arg0 queue:(NSObject *)arg1 block:(id /* block */)arg2;

@end
