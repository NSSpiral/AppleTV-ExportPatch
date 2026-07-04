/* Runtime dump - SSXPCServer
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSXPCServer : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _entitlementName;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableDictionary * _observers;
    NSString * _serviceName;
}

+ (NSObject *)mainServer;

- (void)dealloc;
- (SSXPCServer *)init;
- (void)start;
- (SSXPCServer *)initWithServiceName:(NSString *)arg0;
- (SSXPCServer *)initWithServiceName:(NSString *)arg0 entitlement:(NSString *)arg1 queue:(NSObject *)arg2;
- (void)_dispatchMessage:(NSString *)arg0 connection:(NSURLConnection *)arg1;
- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 forMessage:(long long)arg2;
- (void)removeObserver:(NSObject *)arg0 selector:(SEL)arg1 forMessage:(long long)arg2;

@end
