/* Runtime dump - BKSProcessAssertionClient
 * Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionClient : BSBaseXPCClient
{
    NSMapTable * _assertionHandlersByIdentifier;
}

+ (BKSProcessAssertionClient *)sharedInstance;
+ (NSObject<OS_dispatch_queue> *)clientQueue;

- (void)dealloc;
- (NSString *)description;
- (void)_invalidate;
- (double)backgroundTimeRemaining:(int)arg0;
- (void)registerClientHandler:(id /* block */)arg0 forAssertionIdentifier:(NSString *)arg1;
- (void)sendDestroyAssertion:(id)arg0;
- (void)unregisterClientHandlerForAssertionIdentifier:(NSString *)arg0;
- (void)sendCreateAssertion:(id)arg0 withResponseHandler:(NSObject<OS_xpc_object> *)arg1;
- (void)sendUpdateAssertion:(id)arg0;
- (NSError *)_errorWithCode:(unsigned int)arg0;
- (void)_dispatchClientCalloutBlock:(id /* block */)arg0;
- (void)_sendEvent:(NSObject *)arg0 forMessageType:(unsigned int)arg1 responseHandler:(NSObject<OS_xpc_object> *)arg2;
- (void)_handleDestroy:(id)arg0;
- (void)queue_handleMessage:(NSString *)arg0;
- (BKSProcessAssertionClient *)initWithServiceName:(NSString *)arg0 endpoint:(NSObject *)arg1;
- (void)queue_connectionWasDestroyed;

@end
