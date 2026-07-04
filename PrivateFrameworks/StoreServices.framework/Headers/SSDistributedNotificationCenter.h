/* Runtime dump - SSDistributedNotificationCenter
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDistributedNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _observers;
    NSString * _portName;
    SSXPCServer * _server;
}

@property (readonly) NSString * namedPort;

- (void)dealloc;
- (SSDistributedNotificationCenter *)init;
- (void)removeObserver:(NSObject *)arg0;
- (SSDistributedNotificationCenter *)initWithNamedPort:(NSString *)arg0;
- (void)_distributedNotificationMessage:(NSString *)arg0 connection:(NSURLConnection *)arg1;
- (void)_sendRegistrationMessage:(long long)arg0 name:(NSString *)arg1;
- (NSString *)addObserverForName:(NSString *)arg0 queue:(NSObject *)arg1 usingBlock:(id /* block */)arg2;
- (NSString *)namedPort;

@end
