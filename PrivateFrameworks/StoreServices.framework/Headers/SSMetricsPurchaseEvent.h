/* Runtime dump - SSMetricsPurchaseEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (retain, nonatomic) NSString * transactionIdentifier;

- (SSMetricsPurchaseEvent *)init;
- (NSString *)transactionIdentifier;
- (void)setTransactionIdentifier:(NSString *)arg0;
- (void)setResponseStartTime:(double)arg0;
- (void)setResponseEndTime:(double)arg0;
- (void)setRequestStartTime:(double)arg0;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (void)addFieldsFromPurchaseResponse:(NSURLResponse *)arg0;

@end
