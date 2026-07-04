/* Runtime dump - SSBiometrics
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBiometrics : NSObject
{
    NSObject<OS_dispatch_queue> * _clientQueue;
    SSXPCConnection * _connection;
}

- (SSBiometrics *)init;
- (void).cxx_destruct;
- (void)_sendMessage:(NSString *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)setEnabled:(char)arg0 withAuthToken:(NSString *)arg1 completionBlock:(id /* block */)arg2;
- (void)getStateWithCompletionBlock:(id /* block */)arg0;
- (void)renewPurchaseTokenWithAuthToken:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)resetWithCompletionBlock:(id /* block */)arg0;
- (void)setEnabled:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)setAllowed:(char)arg0 completionBlock:(id /* block */)arg1;

@end
