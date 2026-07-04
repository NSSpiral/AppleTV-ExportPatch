/* Runtime dump - SKProductsRequest
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

@property (nonatomic) <SKProductsRequestDelegate> * delegate;

- (void)_handleReply:(id /* block */)arg0;
- (SKProductsRequest *)initWithProductIdentifiers:(NSSet *)arg0;
- (void)_sendXPCMessage;
- (void)dealloc;
- (SKProductsRequest *)init;

@end
