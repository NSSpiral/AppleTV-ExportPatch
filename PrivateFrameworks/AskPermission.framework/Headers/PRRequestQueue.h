/* Runtime dump - PRRequestQueue
 * Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

@interface PRRequestQueue : NSObject
{
    <PRRequestDelegate> * _delegate;
    NSString * _identifier;
}

@property (weak, nonatomic) <PRRequestDelegate> * delegate;
@property (readonly) NSString * identifier;

+ (NSString *)_requestQueueForIdentifier:(NSString *)arg0;
+ (PRRequestQueue *)defaultRequestQueue;

- (void)setDelegate:(<PRRequestDelegate> *)arg0;
- (<PRRequestDelegate> *)delegate;
- (NSString *)identifier;
- (PRRequestQueue *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (void)attemptLocalApprovalForRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (id)_agentRemoteObjectInterface;
- (NSURLConnection *)_agentXPCConnection;
- (void)addRequest:(NSURLRequest *)arg0 withCompletionHandler:(id /* block */)arg1;
- (id)agentRemoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned int)arg0 completionHandler:(id /* block */)arg1;
- (void)askPermissionTo:(id)arg0 withRequestInfo:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (void)pendingRequestsWithCompletionHandler:(id /* block */)arg0;
- (void)_didStartNewPurchaseRequestWithInfo:(NSDictionary *)arg0;
- (void)_didReceiveStorePushNotificationWithPayload:(NSData *)arg0;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned int)arg0 replyBlock:(id /* block */)arg1;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned int)arg0 completionHandler:(id /* block */)arg1;
- (void)_requestToBePresentedWithReply:(id /* block */)arg0;
- (void)_userDidApproveRequestWithRequestID:(NSObject *)arg0;
- (void)_userDidDenyRequestWithRequestID:(NSObject *)arg0;
- (void)_clearCachedRequests;
- (void)_registerPushToken;
- (NSString *)_pushToken;
- (void)_readTestValueFromTouchIDKeychain;
- (void)_writeTestValueToTouchIDKeychain;
- (void)_deleteTestValueFromTouchIDKeychain;

@end
