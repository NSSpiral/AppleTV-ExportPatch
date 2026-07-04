/* Runtime dump - PLAWDWifiBT
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDWifiBT : PLAWDAuxMetrics
{
    char _isWiFiStart;
    char _isWiFiRailStart;
    char _isBTStart;
    char _isBTRailStart;
    PLEntryNotificationOperatorComposition * _wifiEventCallback;
    PLEntryNotificationOperatorComposition * _btEventCallback;
    PLEntryNotificationOperatorComposition * _btPowerCallback;
    PLEntryNotificationOperatorComposition * _wifiRailCallback;
    PLEntryNotificationOperatorComposition * _btRailCallback;
    long _wifiSubmitCnt;
    long _btSubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition * wifiEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * btEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * btPowerCallback;
@property (retain) PLEntryNotificationOperatorComposition * wifiRailCallback;
@property (retain) PLEntryNotificationOperatorComposition * btRailCallback;
@property (weak) PLOperator * operator;
@property (retain, nonatomic) NSMutableSet * runningMetrics;
@property char isWiFiStart;
@property char isWiFiRailStart;
@property char isBTStart;
@property char isBTRailStart;
@property long wifiSubmitCnt;
@property long btSubmitCnt;

+ (PLAWDWifiBT *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;
+ (PLAWDWifiBT *)entryAggregateDefinitionAwdWifi;
+ (PLAWDWifiBT *)entryAggregateDefinitionAwdBT;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)startWifiMetricCollection;
- (void)startBtMetricCollection;
- (void)setWifiEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setWifiRailCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setBtEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setBtPowerCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setBtRailCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (char)submitWiFiDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (char)submitBtDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)setWifiSubmitCnt:(long)arg0;
- (void)resetWifiTable;
- (void)setIsWiFiRailStart:(char)arg0;
- (void)setIsWiFiStart:(char)arg0;
- (void)handleWifiRailCallback:(id /* block */)arg0;
- (void)handleWifiCallback:(id /* block */)arg0;
- (PLEntryNotificationOperatorComposition *)wifiEventCallback;
- (void)addEntryToWiFiTable:(id)arg0 withValue:(double)arg1 andBand:(id)arg2;
- (char)isWiFiStart;
- (long)wifiSubmitCnt;
- (void)setBtSubmitCnt:(long)arg0;
- (void)resetBTTable;
- (void)setIsBTStart:(char)arg0;
- (void)setIsBTRailStart:(char)arg0;
- (void)handleBTRailCallback:(id /* block */)arg0;
- (void)handleBTCallback:(id /* block */)arg0;
- (PLEntryNotificationOperatorComposition *)btEventCallback;
- (void)handleBTPowerCallback:(id /* block */)arg0;
- (PLEntryNotificationOperatorComposition *)btPowerCallback;
- (void)addEntryToBTTable:(id)arg0 withValue:(double)arg1;
- (char)isBTStart;
- (long)btSubmitCnt;
- (PLEntryNotificationOperatorComposition *)wifiRailCallback;
- (PLEntryNotificationOperatorComposition *)btRailCallback;
- (char)isWiFiRailStart;
- (char)isBTRailStart;

@end
