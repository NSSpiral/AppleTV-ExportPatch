/* Runtime dump - SKPayment
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>
{
    id _internal;
}

@property (readonly, copy, nonatomic) NSString * productIdentifier;
@property (readonly, copy, nonatomic) NSData * requestData;
@property (readonly, nonatomic) int quantity;
@property (readonly, copy, nonatomic) NSString * applicationUsername;
@property (readonly, nonatomic) char simulatesAskToBuyInSandbox;
@property (readonly, copy, nonatomic) NSString * partnerIdentifier;
@property (readonly, copy, nonatomic) NSString * partnerTransactionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary * requestParameters;

+ (SKPayment *)paymentWithProduct:(NSArray *)arg0;
+ (SKPayment *)paymentWithProductIdentifier:(NSString *)arg0;

- (NSString *)productIdentifier;
- (NSString *)applicationUsername;
- (int)quantity;
- (char)simulatesAskToBuyInSandbox;
- (NSString *)partnerIdentifier;
- (NSString *)partnerTransactionIdentifier;
- (void)dealloc;
- (SKPayment *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SKPayment *)copyWithZone:(struct _NSZone *)arg0;
- (SKPayment *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSData *)requestData;
- (NSDictionary *)requestParameters;

@end
