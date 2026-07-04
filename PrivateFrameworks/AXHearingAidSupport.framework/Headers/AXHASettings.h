/* Runtime dump - AXHASettings
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHASettings : NSObject
{
    ACAccountStore * _accountStore;
    NSMutableSet * _registeredNotifications;
    NSMutableSet * _synchronizePreferences;
    NSMutableDictionary * _updateBlocks;
}

@property (retain, nonatomic) NSDictionary * pairedHearingAids;
@property (nonatomic) char independentHearingAidSettings;
@property (nonatomic) char allowHearingAidControlOnLockScreen;
@property (nonatomic) char shouldStreamToLeftAid;
@property (nonatomic) char shouldStreamToRightAid;
@property (retain, nonatomic) NSMutableSet * registeredNotifications;
@property (retain, nonatomic) NSMutableSet * synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary * updateBlocks;

+ (AXHASettings *)sharedInstance;
+ (void)initialize;

- (void)dealloc;
- (AXHASettings *)init;
- (NSMutableSet *)synchronizePreferences;
- (char)shouldUseiCloud;
- (void)icloudHearingSettingsDidChange:(NSDictionary *)arg0;
- (void)pushLocalHearingAidsToiCloud;
- (void)iCloudAccountDidChange:(NSDictionary *)arg0;
- (void)setLocalHearingAidsFromiCloud:(id)arg0;
- (void)_synchronizeIfNecessary:(id)arg0;
- (char)isPairedWithFakeHearingAids;
- (void)setSynchronizePreferences:(NSMutableSet *)arg0;
- (void)registerUpdateBlock:(id /* block */)arg0 forRetrieveSelector:(/* block */ id)arg1 withListener:(SEL)arg2;
- (char)allowHearingAidControlOnLockScreen;
- (char)shouldStreamToLeftAid;
- (char)shouldStreamToRightAid;
- (NSDictionary *)pairedHearingAids;
- (char)independentHearingAidSettings;
- (void)_setValue:(NSValue *)arg0 forPreferenceKey:(NSString *)arg1;
- (NSString *)_notificationForPreferenceKey:(NSString *)arg0;
- (void)_registerForNotification:(NSNotification *)arg0;
- (NSMutableDictionary *)updateBlocks;
- (NSString *)_preferenceKeyForSelector:(SEL)arg0;
- (NSString *)_valueForPreferenceKey:(NSString *)arg0;
- (void)_handlePreferenceChanged:(NSNotification *)arg0;
- (void)setPairedHearingAids:(NSDictionary *)arg0;
- (void)setIndependentHearingAidSettings:(char)arg0;
- (void)setAllowHearingAidControlOnLockScreen:(char)arg0;
- (void)setShouldStreamToLeftAid:(char)arg0;
- (void)setShouldStreamToRightAid:(char)arg0;
- (void)setUpdateBlocks:(NSMutableDictionary *)arg0;
- (NSMutableSet *)registeredNotifications;
- (void)setRegisteredNotifications:(NSMutableSet *)arg0;

@end
