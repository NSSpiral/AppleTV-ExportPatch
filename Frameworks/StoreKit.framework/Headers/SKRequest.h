/* Runtime dump - SKRequest
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRequest : NSObject
{
    id _requestInternal;
}

@property (nonatomic) <SKRequestDelegate> * delegate;
@property (copy, nonatomic) SKPaymentQueueClient * paymentQueueClient;

- (void)_endBackgroundTask;
- (SKPaymentQueueClient *)paymentQueueClient;
- (void)_startWithMessage:(NSString *)arg0 replyBlock:(id /* block */)arg1;
- (void)_sendXPCMessage;
- (void)setPaymentQueueClient:(SKPaymentQueueClient *)arg0;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<SKRequestDelegate> *)arg0;
- (SKRequest *)init;
- (<SKRequestDelegate> *)delegate;
- (void)start;
- (void)_shutdownRequest;
- (void)_beginBackgroundTask;

@end
