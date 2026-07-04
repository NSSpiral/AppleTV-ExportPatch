/* Runtime dump - PLIdentityServicesAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLIdentityServicesAgent : PLAgent
{
    PLXPCListenerOperatorComposition * _xpcHandler;
    PLXPCListenerOperatorComposition * _networkStatsHandler;
    PLXPCListenerOperatorComposition * _infraWiFiRequestHandler;
    PLXPCListenerOperatorComposition * _localLinkTypeHandler;
    NSMutableDictionary * _previousStatsByPriority;
    NSDate * _initialEntryDate;
    NSDate * _lastLocalDeliveryLogDate;
    NSMutableDictionary * _lastEntryDatePerCategory;
    PLAccountingGroup * _bluetoothAccountingGroup;
    PLAccountingGroup * _IDSAccountingGroup;
}

@property (retain) PLXPCListenerOperatorComposition * xpcHandler;
@property (retain) PLXPCListenerOperatorComposition * networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition * infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition * localLinkTypeHandler;
@property (retain) NSMutableDictionary * previousStatsByPriority;
@property (retain) NSDate * initialEntryDate;
@property (retain) NSDate * lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary * lastEntryDatePerCategory;
@property (readonly) PLAccountingGroup * bluetoothAccountingGroup;
@property (readonly) PLAccountingGroup * IDSAccountingGroup;

+ (void)load;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (PLIdentityServicesAgent *)entryDefinitionIDSLocalLink;
+ (PLIdentityServicesAgent *)entryDefinitionIDSMessageStats;
+ (PLIdentityServicesAgent *)entryDefinitionIDSSocketStats;
+ (PLIdentityServicesAgent *)entryDefinitionLocalInfraWiFiRequests;

- (PLIdentityServicesAgent *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)logIDSNetworkEntries:(NSArray *)arg0;
- (void)logLocalInfraWiFiFrequests:(id)arg0;
- (void)logLocalLinkType:(NSObject *)arg0;
- (void)createBTAccountingEvents:(id)arg0;
- (NSMutableDictionary *)previousStatsByPriority;
- (NSDate *)lastLocalDeliveryLogDate;
- (void)setLastLocalDeliveryLogDate:(NSDate *)arg0;
- (NSMutableDictionary *)lastEntryDatePerCategory;
- (NSDate *)initialEntryDate;
- (void)createIDSAccountingEventsWithEntries:(NSArray *)arg0;
- (PLAccountingGroup *)bluetoothAccountingGroup;
- (PLAccountingGroup *)IDSAccountingGroup;
- (PLXPCListenerOperatorComposition *)xpcHandler;
- (void)setXpcHandler:(PLXPCListenerOperatorComposition *)arg0;
- (PLXPCListenerOperatorComposition *)networkStatsHandler;
- (void)setNetworkStatsHandler:(PLXPCListenerOperatorComposition *)arg0;
- (PLXPCListenerOperatorComposition *)infraWiFiRequestHandler;
- (void)setInfraWiFiRequestHandler:(PLXPCListenerOperatorComposition *)arg0;
- (PLXPCListenerOperatorComposition *)localLinkTypeHandler;
- (void)setLocalLinkTypeHandler:(PLXPCListenerOperatorComposition *)arg0;
- (void)setPreviousStatsByPriority:(NSMutableDictionary *)arg0;
- (void)setInitialEntryDate:(NSDate *)arg0;
- (void)setLastEntryDatePerCategory:(NSMutableDictionary *)arg0;

@end
