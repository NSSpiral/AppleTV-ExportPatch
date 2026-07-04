/* Runtime dump - CHMigrator
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHMigrator : NSObject
{
    CallDBMigrator * _migrator;
}

- (CHMigrator *)init;
- (void).cxx_destruct;
- (void)migrate:(char)arg0 queue:(NSObject *)arg1 block:(id /* block */)arg2;

@end
