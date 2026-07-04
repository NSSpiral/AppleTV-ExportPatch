/* Runtime dump - PLBLDService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBLDService : PLService
{
    PLXPCResponderOperatorComposition * _xpcResponderUIBattery;
    PLXPCResponderOperatorComposition * _xpcResponderUIBatteryForModels;
    PLNSNotificationOperatorComposition * _dailyTaskNotification;
    NSDictionary * _nonAppBundleIDsWhitelist;
    PLNSTimerOperatorComposition * _runLoggingTimer;
    double _appBreakdownThresholdPercent;
}

@property (retain) PLXPCResponderOperatorComposition * xpcResponderUIBattery;
@property (retain) PLXPCResponderOperatorComposition * xpcResponderUIBatteryForModels;
@property (retain) PLNSNotificationOperatorComposition * dailyTaskNotification;
@property (readonly) NSDictionary * nonAppBundleIDsWhitelist;
@property (readonly) double appBreakdownThresholdPercent;
@property (retain) PLNSTimerOperatorComposition * runLoggingTimer;

+ (void)load;
+ (PLBLDService *)defaults;
+ (NSArray *)entryEventPointDefinitions;
+ (PLBLDService *)entryEventPointBUILogging;

- (PLBLDService *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (id)screenLock:(id)arg0;
- (void)initNonAppBundleIDsWhitelist;
- (void)logEventPointBUI;
- (NSURLResponse *)UIQueryResponse:(NSURLResponse *)arg0;
- (void)setXpcResponderUIBattery:(PLXPCResponderOperatorComposition *)arg0;
- (id)UIQueryResponseForModels:(id)arg0;
- (void)setXpcResponderUIBatteryForModels:(PLXPCResponderOperatorComposition *)arg0;
- (id)recommendSetting:(double)arg0 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg1;
- (NSSet *)deletedAppSet;
- (NSSet *)webAppSet;
- (id)daemonTransformation;
- (NSObject *)aggregateResult:(NSObject *)arg0 withBucketLength:(double)arg1 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg2 queryType:(int)arg3 withValidBundle:(char)arg4 withDeletedApps:(char)arg5 withWebApps:(id)arg6 withDaemonTransformation:(id)arg7;
- (void)logEventPointBUIWithUIData:(NSData *)arg0 forBLDRetailData:(char)arg1;
- (void)bldRetailResponse:(NSURLResponse *)arg0 withValidBundle:(char)arg1 withDeletedApps:(char)arg2 withWebApps:(id)arg3 withDaemonTransformation:(id)arg4;
- (id)aggregateStatsResultWithBucketLength:(double)arg0 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg1;
- (void)storeBLDRetailResponse:(struct _PLTimeIntervalRange)arg0 withArgs:(struct OpaqueJSValue * *)arg1 withKey:(NSString *)arg2 withValidBundle:(char)arg3 withDeletedApps:(char)arg4 withWebApps:(id)arg5 withDaemonTransformation:(id)arg6;
- (NSObject *)bldRetailResponseForRange:(struct _PLTimeIntervalRange)arg0 withArgs:(struct OpaqueJSValue * *)arg1 withValidBundle:(char)arg2 withDeletedApps:(char)arg3 withWebApps:(id)arg4 withDaemonTransformation:(id)arg5;
- (char)isALSON;
- (NSArray *)combineEntitiesInArray:(NSArray *)arg0 withTransformation:(_MFReplaceTemporaryIDForTransferFailureReplayContextTransformation *)arg1;
- (NSArray *)reaccountExchangeEntries:(NSArray *)arg0;
- (int)appTypeForBundleID:(NSObject *)arg0 withValidBundles:(char)arg1 withDeletedApps:(char)arg2 withWebApps:(id)arg3;
- (char)shouldAppBeDisplayed:(int)arg0 forQuery:(int)arg1;
- (NSObject *)deletedAppNameForBundleID:(NSObject *)arg0;
- (void)setQualifiersForAppArray:(NSArray *)arg0 withTotalEnergy:(double)arg1;
- (id)reviseAppEnergyBreakdown:(id)arg0 withSumOfEnergyPercent:(int)arg1;
- (double)getAppBreakdownThreshold;
- (void)addToDaemonTransformation:(id)arg0 withPluginEntry:(id)arg1;
- (void)addToDaemonTransformationForGizmo:(id)arg0;
- (char)isStringAValidBundleName:(NSString *)arg0;
- (NSDictionary *)nonAppBundleIDsWhitelist;
- (char)isStringAValidName:(NSString *)arg0;
- (char)qualifierThresholdPass:(id)arg0 withQualifierRules:(id)arg1 forQualifierEntryKey:(NSString *)arg2;
- (char)setQualifier:(int)arg0 onBundle:(NSObject *)arg1;
- (NSArray *)combineAndTrimAppQualifiersArray:(NSArray *)arg0;
- (void)trimQualifiers:(id)arg0 combineOne:(id)arg1 combineTwo:(id)arg2 combineInto:(id)arg3;
- (void)trimQualifiers:(id)arg0 removeQualifier:(TSDGLShaderQualifier *)arg1 ifQualifierPresent:(id)arg2;
- (void)logEventPointBUIForBLDRetail:(char)arg0;
- (NSObject *)getBatteryDrainInRange:(struct _PLTimeIntervalRange)arg0;
- (double)appBreakdownThresholdPercent;
- (void)fetchAggregateResultsInRange:(struct _PLTimeIntervalRange)arg0;
- (double)totalEnergyReturned:(id)arg0;
- (NSString *)getEntryForBundleName:(NSString *)arg0 inAppArray:(NSArray *)arg1;
- (NSObject *)TestQuery:(NSObject *)arg0;
- (void)qualifierTesting;
- (PLXPCResponderOperatorComposition *)xpcResponderUIBattery;
- (PLXPCResponderOperatorComposition *)xpcResponderUIBatteryForModels;
- (PLNSNotificationOperatorComposition *)dailyTaskNotification;
- (void)setDailyTaskNotification:(PLNSNotificationOperatorComposition *)arg0;
- (PLNSTimerOperatorComposition *)runLoggingTimer;
- (void)setRunLoggingTimer:(PLNSTimerOperatorComposition *)arg0;

@end
