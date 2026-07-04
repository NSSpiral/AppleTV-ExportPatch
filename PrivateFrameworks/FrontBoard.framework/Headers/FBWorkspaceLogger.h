/* Runtime dump - FBWorkspaceLogger
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceLogger : FBFileLogger
{
    char _useOverrideDestinations;
    unsigned int _overrideDestinations;
}

- (FBWorkspaceLogger *)init;
- (NSString *)name;
- (char)isEnabled;
- (void)_setEnabled:(char)arg0;
- (void)reloadFromDefaults;
- (unsigned int)logDestinations;
- (void)_configureOverrideDestinationForString:(NSString *)arg0;
- (int)maxLogCount;
- (int)maxLogSize;
- (NSString *)logPrefixForCategory:(NSString *)arg0 destination:(unsigned int)arg1;
- (void)willBeginLoggingToPath:(NSString *)arg0;

@end
