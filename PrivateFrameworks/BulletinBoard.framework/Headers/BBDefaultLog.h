/* Runtime dump - BBDefaultLog
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDefaultLog : BSFileLogger
{
    NSMutableSet * _knownCategories;
}

- (void)dealloc;
- (BBDefaultLog *)init;
- (NSString *)name;
- (char)isEnabled;
- (void)_setEnabled:(char)arg0;
- (void)reloadFromDefaults;
- (char)_shouldEnableCategory:(NSString *)arg0;
- (NSString *)logPreferenceDomain;
- (NSString *)logPreferenceName;
- (NSString *)logPath;
- (unsigned int)logDestinations;

@end
