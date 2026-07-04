/* Runtime dump - PLAWDBB
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDBB : PLAWDAuxMetrics
{
    PLEntryNotificationOperatorComposition * _bbProtocolRailCallback;
    PLEntryNotificationOperatorComposition * _bbEventCallback;
    PLEntryNotificationOperatorComposition * _accountingGroupEventCallback;
    PLEntryNotificationOperatorComposition * _iceStatsEventCallback;
    PLEntryNotificationOperatorComposition * _connectedPowerRailCallback;
    NSDate * _startTimeAppBB;
    NSDate * _startTimeBBLqm;
    unsigned int _upBytes;
    unsigned int _downBytes;
    PLEntryNotificationOperatorComposition * _bbLqmCellularActiveCallback;
    PLEntryNotificationOperatorComposition * _bbLqmCumulativeNetworkCallback;
    int _currQuality;
    int _newQuality;
}

@property (retain) PLEntryNotificationOperatorComposition * bbProtocolRailCallback;
@property (retain) PLEntryNotificationOperatorComposition * bbEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * accountingGroupEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * iceStatsEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * connectedPowerRailCallback;
@property (retain) NSDate * startTimeAppBB;
@property (retain) NSDate * startTimeBBLqm;
@property unsigned int upBytes;
@property unsigned int downBytes;
@property (retain) PLEntryNotificationOperatorComposition * bbLqmCellularActiveCallback;
@property (retain) PLEntryNotificationOperatorComposition * bbLqmCumulativeNetworkCallback;
@property int currQuality;
@property int newQuality;

+ (PLAWDBB *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;
+ (PLAWDBB *)entryAggregateDefinitionAwdBBQlm;
+ (PLAWDBB *)entryAggregateDefinitionAwdBBQlmCounter;
+ (PLAWDBB *)entryAggregateDefinitionAwdConnectedPower;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)startAppBB;
- (void)startConnectedPower;
- (void)startBBLqm;
- (void)startBBPower;
- (void)stopAppBB;
- (void)stopConnectedPower;
- (void)stopBBLqm;
- (void)submitAppBB:(id)arg0 withAwdConn:(id)arg1;
- (char)submitConnectedPower:(id)arg0 withAwdConn:(id)arg1;
- (void)submitBBLqm:(id)arg0 withAwdConn:(id)arg1;
- (void)resetAllBBLqmTables;
- (void)setStartTimeBBLqm:(NSDate *)arg0;
- (void)setUpBytes:(unsigned int)arg0;
- (void)setDownBytes:(unsigned int)arg0;
- (void)handleBBLqmCellularActiveCallback:(id /* block */)arg0;
- (void)setBbLqmCellularActiveCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleBBLqmCumulativeNetworkCallback:(id /* block */)arg0;
- (void)setBbLqmCumulativeNetworkCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)updateCurrLqmState;
- (PLEntryNotificationOperatorComposition *)bbLqmCellularActiveCallback;
- (PLEntryNotificationOperatorComposition *)bbLqmCumulativeNetworkCallback;
- (int)convertQualityWithLinkQuality:(double)arg0;
- (void)setNewQuality:(int)arg0;
- (int)newQuality;
- (void)setCurrQuality:(int)arg0;
- (void)updateLQMTableWithQuality:(int)arg0 withTime:(double)arg1 withRX:(double)arg2 withTX:(double)arg3;
- (double)getIntervalSinceLastUpdateWithEntryName:(NSString *)arg0;
- (NSDate *)startTimeBBLqm;
- (void)finalizeTableWithEntry:(struct archive_entry *)arg0;
- (int)currQuality;
- (unsigned int)upBytes;
- (unsigned int)downBytes;
- (void)resetBBLqmTable;
- (void)resetBBLqmCounterTable;
- (void)setStartTimeAppBB:(NSDate *)arg0;
- (NSDate *)startTimeAppBB;
- (void)resetConnectedPowerTable;
- (void)handleBBConnectedPowerRail:(id)arg0;
- (void)setConnectedPowerRailCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleBBRailCallbackWrapper:(NSObject *)arg0;
- (void)setBbProtocolRailCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleAcountGroupCallback:(id /* block */)arg0;
- (void)setAccountingGroupEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleIceStatsCallback:(id /* block */)arg0;
- (void)setIceStatsEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleBBRailCallbackBBProtocol:(NSObject *)arg0;
- (void)handleBBRailCallbackLTESleep:(id)arg0;
- (void)handleBBRailCallbackTxLte:(id)arg0;
- (void)handleBBRailCallbackTxCdma:(id)arg0;
- (void)handleBBRailCallbackTxEvdo:(id)arg0;
- (void)handleBBRailCallbackTxCdma2K:(id)arg0;
- (void)handleBBRailCallbackTxGsm:(id)arg0;
- (void)handleBBRailCallbackTxUtran:(id)arg0;
- (void)handleBBRailCallbackBBICE:(id /* block */)arg0;
- (void)handleBBRailCallbackBBTx:(id)arg0;
- (void)handleBBRailCallbackOos:(id)arg0;
- (void)stopBBPower;
- (PLEntryNotificationOperatorComposition *)bbProtocolRailCallback;
- (PLEntryNotificationOperatorComposition *)bbEventCallback;
- (void)setBbEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)accountingGroupEventCallback;
- (PLEntryNotificationOperatorComposition *)iceStatsEventCallback;
- (PLEntryNotificationOperatorComposition *)connectedPowerRailCallback;

@end
