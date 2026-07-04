/* Runtime dump - BBSmartPL
 * Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface BBSmartPL : NSObject
{
    PLSmartPLService * _operator;
    PLEntryNotificationOperatorComposition * _bbHwOtherCallback;
    NSDate * _lastLogDate;
    PLTelephonyConnection * _connection;
    double _logDuration;
    double _cxoDuration;
}

@property (weak) PLSmartPLService * operator;
@property (retain) PLEntryNotificationOperatorComposition * bbHwOtherCallback;
@property (retain) NSDate * lastLogDate;
@property double logDuration;
@property double cxoDuration;
@property (weak) PLTelephonyConnection * connection;

- (void).cxx_destruct;
- (PLTelephonyConnection *)connection;
- (void)setConnection:(PLTelephonyConnection *)arg0;
- (PLSmartPLService *)operator;
- (void)startWithOperator:(PLSmartPLService *)arg0;
- (void)setLastLogDate:(NSDate *)arg0;
- (void)setCxoDuration:(double)arg0;
- (double)cxoDuration;
- (NSDate *)lastLogDate;
- (void)triggerBBCoreDump;
- (void)setLogDuration:(double)arg0;
- (double)logDuration;
- (void)setOperator:(PLSmartPLService *)arg0;
- (void)handleMavBBHwOtherCallback:(id /* block */)arg0;
- (void)setBbHwOtherCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)bbHwOtherCallback;

@end
