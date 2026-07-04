/* Runtime dump - ISSetApplicationBadgeOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSetApplicationBadgeOperation : ISOperation
{
    NSString * _badgeValue;
    NSString * _bundleIdentifier;
}

@property (retain) NSString * badgeValue;
@property (retain) NSString * bundleIdentifier;

- (void)dealloc;
- (NSString *)bundleIdentifier;
- (void)setBadgeValue:(NSString *)arg0;
- (NSString *)badgeValue;
- (void)run;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSString *)uniqueKey;

@end
