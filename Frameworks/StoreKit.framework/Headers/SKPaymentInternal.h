/* Runtime dump - SKPaymentInternal
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentInternal : NSObject <NSCopying>
{
    NSString * _applicationUsername;
    NSString * _partnerIdentifier;
    NSString * _partnerTransactionIdentifier;
    NSString * _productIdentifier;
    int _quantity;
    NSData * _requestData;
    NSDictionary * _requestParameters;
    char _simulatesAskToBuyInSandbox;
}

- (void)dealloc;
- (SKPaymentInternal *)init;
- (SKPaymentInternal *)copyWithZone:(struct _NSZone *)arg0;

@end
