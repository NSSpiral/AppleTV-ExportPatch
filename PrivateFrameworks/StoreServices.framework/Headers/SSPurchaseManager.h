/* Runtime dump - SSPurchaseManager
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseManager : NSObject
{
    NSObject<OS_dispatch_queue> * _completionBlockQueue;
    <SSPurchaseManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _managerIdentifier;
    SSXPCConnection * _requestConnection;
    SSXPCConnection * _responseConnection;
}

@property (readonly) NSString * managerIdentifier;
@property <SSPurchaseManagerDelegate> * delegate;

- (SSPurchaseManager *)initWithManagerIdentifier:(NSString *)arg0;
- (void)getPurchasesUsingBlock:(id /* block */)arg0;
- (void)addPurchases:(id)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)cancelPurchases:(id)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)movePurchases:(id)arg0 afterPurchase:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)setDelegate:(<SSPurchaseManagerDelegate> *)arg0;
- (SSPurchaseManager *)init;
- (<SSPurchaseManagerDelegate> *)delegate;
- (NSURLConnection *)_requestConnection;
- (NSURLConnection *)_responseConnection;
- (void)_connectToDaemon;
- (void)_sendMessage:(long long)arg0 withPurchases:(NSArray *)arg1 afterPurchase:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendMessage:(long long)arg0 withPurchaseIdentifiers:(SSPurchase *)arg1 afterPurchase:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendCompletionBlock:(id /* block */)arg0 forGetPurchasesReply:(/* block */ id)arg1;
- (char)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(NSURLResponse *)arg0;
- (void)_handleMessage:(NSString *)arg0 fromConnection:(NSURLConnection *)arg1;
- (char)_resultForReply:(id /* block */)arg0 error:(id *)arg1;
- (NSString *)_newEncodedArrayWithPurchaseIdentifiers:(SSPurchase *)arg0;
- (void)_sendCompletionBlock:(id /* block */)arg0 forStandardReply:(/* block */ id)arg1;
- (id)_newEncodedArrayWithPurchases:(NSArray *)arg0;
- (void)insertPurchases:(id)arg0 afterPurchase:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (NSString *)managerIdentifier;
- (void)_reconnectForDaemonLaunch;

@end
