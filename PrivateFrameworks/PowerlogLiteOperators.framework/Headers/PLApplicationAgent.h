/* Runtime dump - PLApplicationAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLApplicationAgent : PLAgent
{
    PLNSNotificationOperatorComposition * _notificationSBApplicationStateChanged;
    PLAccountingGroup * _accountingGroupApplication;
    PLAccountingGroup * _appAccountingGroup;
    NSMutableSet * _keyboardPlugins;
}

@property (readonly) PLNSNotificationOperatorComposition * notificationSBApplicationStateChanged;
@property (readonly) PLAccountingGroup * accountingGroupApplication;
@property (retain) PLAccountingGroup * appAccountingGroup;
@property (retain) NSMutableSet * keyboardPlugins;

+ (void)load;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;
+ (PLApplicationAgent *)installedBundleIDs;
+ (NSObject *)appNameForBundleID:(NSObject *)arg0;
+ (PLApplicationAgent *)installedPlugins;
+ (PLApplicationAgent *)entryEventPointDefinitionApplication;
+ (NSDictionary *)entryEventNoneDefinitionApplicationMetadata;
+ (PLApplicationAgent *)entryEventNoneAllApps;
+ (PLApplicationAgent *)entryEventNoneAllPlugins;
+ (NSString *)entryAggregateDefinitionApplicationReason;
+ (NSObject *)pluginEntryFromProxy:(NSObject *)arg0;

- (PLApplicationAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (void)addAccountingEvent:(NSObject *)arg0;
- (void)setAppAccountingGroup:(PLAccountingGroup *)arg0;
- (PLAccountingGroup *)appAccountingGroup;
- (void)logEventPointApplicationForDisplayID:(NSObject *)arg0 withPid:(int)arg1 withState:(NSObject *)arg2 withReasons:(NSMutableSet *)arg3;
- (void)logAllApps;
- (void)logAllPlugins;
- (void)logEventPointApplication;
- (void)logEventPointApplicationForDisplayID:(NSObject *)arg0;
- (NSMutableSet *)keyboardPlugins;
- (void)logInstalledApp:(id)arg0;
- (void)logInstalledPlugin:(id)arg0;
- (void)logUninstalledApp:(id)arg0;
- (void)storeInstalledAppsInfo:(NSDictionary *)arg0;
- (void)storeUninstalledAppsInfo:(NSDictionary *)arg0;
- (PLNSNotificationOperatorComposition *)notificationSBApplicationStateChanged;
- (PLAccountingGroup *)accountingGroupApplication;
- (void)setKeyboardPlugins:(NSMutableSet *)arg0;

@end
