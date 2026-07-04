/* Runtime dump - PLSpringBoardAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLSpringBoardAgent : PLAgent
{
    char _autoLockIsNil;
    PLNSNotificationOperatorComposition * _notificationSBScreenTimeTrackingChanged;
    PLCFNotificationOperatorComposition * _notificationSBLockTrackingChanged;
    PLCFNotificationOperatorComposition * _notificationSBBlankTrackingChanged;
    PLNSNotificationOperatorComposition * _notificationSBWallpaperTrackingChanged;
    PLNSNotificationOperatorComposition * _notificationSBLocalNotificationFired;
    PLNSNotificationOperatorComposition * _notificationSBRemoteNotificationReceived;
    PLNSNotificationOperatorComposition * _notificationSBAutoLockTimerFiredNotification;
    PLNSTimerOperatorComposition * _dailyWallpaperPoll;
    PLEntryNotificationOperatorComposition * _displayOffNotification;
    NSDictionary * _screenNumberToName;
    PLAccountingGroup * _appAccountingGroup;
}

@property (readonly) PLNSNotificationOperatorComposition * notificationSBScreenTimeTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition * notificationSBLockTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition * notificationSBBlankTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition * notificationSBWallpaperTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition * notificationSBLocalNotificationFired;
@property (readonly) PLNSNotificationOperatorComposition * notificationSBRemoteNotificationReceived;
@property (readonly) PLNSNotificationOperatorComposition * notificationSBAutoLockTimerFiredNotification;
@property (retain) PLNSTimerOperatorComposition * dailyWallpaperPoll;
@property char autoLockIsNil;
@property (retain) PLEntryNotificationOperatorComposition * displayOffNotification;
@property (retain) NSDictionary * screenNumberToName;
@property (retain) PLAccountingGroup * appAccountingGroup;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (PLSpringBoardAgent *)entryEventPointAutoLock;
+ (PLSpringBoardAgent *)entryEventPointLocalRemoteNotifications;
+ (PLSpringBoardAgent *)entryEventForwardDefinitionBlank;
+ (PLSpringBoardAgent *)entryEventForwardDefinitionLock;
+ (NSObject *)entryEventForwardDefinitionScreen;
+ (PLSpringBoardAgent *)entryEventForwardDefinitionWallpaper;

- (void)dealloc;
- (PLSpringBoardAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setUpScreenNumberDictionary;
- (void)resetAutoLockIsNil;
- (void)settingsChangedNotification:(NSNotification *)arg0;
- (void)addAccountingEvent:(NSObject *)arg0;
- (id)fetchSBWallpaperTypeForHomescreen:(char)arg0;
- (void)setDailyWallpaperPoll:(PLNSTimerOperatorComposition *)arg0;
- (void)logNotification:(NSNotification *)arg0 ofType:(NSString *)arg1;
- (void)setAutolockAG;
- (void)setDisplayOffNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setAppAccountingGroup:(PLAccountingGroup *)arg0;
- (id)screenLock:(id)arg0;
- (void)setAutoLockIsNil:(char)arg0;
- (char)autoLockIsNil;
- (void)setScreenNumberToName:(NSDictionary *)arg0;
- (void)closeLastOpenEventAtDate:(NSDate *)arg0;
- (PLAccountingGroup *)appAccountingGroup;
- (NSDictionary *)screenNumberToName;
- (PLNSNotificationOperatorComposition *)notificationSBScreenTimeTrackingChanged;
- (PLCFNotificationOperatorComposition *)notificationSBLockTrackingChanged;
- (PLCFNotificationOperatorComposition *)notificationSBBlankTrackingChanged;
- (PLNSNotificationOperatorComposition *)notificationSBWallpaperTrackingChanged;
- (PLNSNotificationOperatorComposition *)notificationSBLocalNotificationFired;
- (PLNSNotificationOperatorComposition *)notificationSBRemoteNotificationReceived;
- (PLNSNotificationOperatorComposition *)notificationSBAutoLockTimerFiredNotification;
- (PLNSTimerOperatorComposition *)dailyWallpaperPoll;
- (PLEntryNotificationOperatorComposition *)displayOffNotification;

@end
