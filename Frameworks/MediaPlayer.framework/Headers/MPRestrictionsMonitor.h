/* Runtime dump - MPRestrictionsMonitor
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cachedSettings;
    MCProfileConnection * _connection;
    char _allowsAccountModification;
    char _allowsDeletion;
    char _allowsExplicitContent;
    char _allowsStorePurchases;
    char _allowsRadioPurchases;
}

@property (readonly, nonatomic) char allowsAccountModification;
@property (readonly, nonatomic) char allowsDeletion;
@property (readonly, nonatomic) char allowsExplicitContent;
@property (readonly, nonatomic) char allowsStorePurchases;
@property (readonly, nonatomic) char allowsRadioPurchases;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPRestrictionsMonitor *)sharedRestrictionsMonitor;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(NSNotification *)arg0 userInfo:(NSDictionary *)arg1;
- (char)allowsStorePurchases;
- (char)allowsExplicitContent;
- (void)_updateWithCanPostNotifications:(char)arg0;
- (void)_cacheValue:(TSWPFontCacheValue *)arg0 forSetting:(BRMarimbaSlideshowMusicSetting *)arg1;
- (char)_isRunningInStoreDemoMode;
- (char)allowsAccountModification;
- (char)allowsDeletion;
- (char)allowsRadioPurchases;
- (void)dealloc;
- (MPRestrictionsMonitor *)init;
- (void).cxx_destruct;
- (id)effectiveValueForSetting:(id)arg0;

@end
