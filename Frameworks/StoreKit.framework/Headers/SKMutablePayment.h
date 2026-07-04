/* Runtime dump - SKMutablePayment
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKMutablePayment : SKPayment

@property (copy, nonatomic) NSString * applicationUsername;
@property (copy, nonatomic) NSString * productIdentifier;
@property (nonatomic) int quantity;
@property (copy, nonatomic) NSData * requestData;
@property (nonatomic) char simulatesAskToBuyInSandbox;
@property (copy, nonatomic) NSString * partnerIdentifier;
@property (copy, nonatomic) NSString * partnerTransactionIdentifier;
@property (copy, nonatomic) NSDictionary * requestParameters;

- (void)setRequestParameters:(NSDictionary *)arg0;
- (void)setApplicationUsername:(NSString *)arg0;
- (void)setProductIdentifier:(NSString *)arg0;
- (void)setQuantity:(int)arg0;
- (void)setSimulatesAskToBuyInSandbox:(char)arg0;
- (void)setPartnerIdentifier:(NSString *)arg0;
- (void)setPartnerTransactionIdentifier:(NSString *)arg0;
- (void)setRequestData:(NSData *)arg0;

@end
