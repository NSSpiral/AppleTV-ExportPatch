/* Runtime dump - PLLocationAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLLocationAgent : PLAgent
{
    PLCFNotificationOperatorComposition * _appStatusChangedNotification;
    PLCFNotificationOperatorComposition * _techStatusChangedNotification;
}

@property (retain) PLCFNotificationOperatorComposition * appStatusChangedNotification;
@property (retain) PLCFNotificationOperatorComposition * techStatusChangedNotification;

+ (void)load;
+ (PLLocationAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;
+ (PLLocationAgent *)entryEventForwardDefinitionTechStatus;
+ (PLLocationAgent *)entryEventForwardDefinitionClientStatus;
+ (PLLocationAgent *)entryEventNoneDefinitionClientStatusDebug;
+ (NSString *)bundleIdFromBundlePath:(NSString *)arg0;

- (PLLocationAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)logEventForwardClientStatus;
- (void)logEventForwardTechStatus;
- (id)humanReadableNameForTechnology:(id)arg0;
- (void)modelGPSICEPower:(id)arg0;
- (void)updateClientCacheForClient:(NSObject *)arg0 andType:(NSObject *)arg1 forEntry:(QLZipArchiveEntry *)arg2;
- (void)logEventNoneClientStatusDebugWithClients:(id)arg0;
- (NSObject *)readClientCacheForClient:(NSObject *)arg0 andType:(NSObject *)arg1 forEntryKey:(NSString *)arg2;
- (void)createLocationAccountingGroups:(id)arg0;
- (void)logEventNoneClientStatus;
- (PLCFNotificationOperatorComposition *)appStatusChangedNotification;
- (void)setAppStatusChangedNotification:(PLCFNotificationOperatorComposition *)arg0;
- (PLCFNotificationOperatorComposition *)techStatusChangedNotification;
- (void)setTechStatusChangedNotification:(PLCFNotificationOperatorComposition *)arg0;

@end
