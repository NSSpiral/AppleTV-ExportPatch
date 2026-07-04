/* Runtime dump - BSXPCConnectionListenerManager
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCConnectionListenerManager : NSObject
{
    NSObject<OS_dispatch_queue> * _listeningQueue;
    NSMutableDictionary * _services;
    NSLock * _servicesLock;
    NSObject<OS_dispatch_queue> * _defaultHandlerQueue;
}

+ (BSXPCConnectionListenerManager *)sharedInstance;
+ (NSObject<OS_dispatch_queue> *)defaultHandlerQueue;
+ (void)stopListeningForService:(NSObject *)arg0;
+ (void)listenForService:(NSObject *)arg0 onQueue:(/* block */ id)arg1 withHandler:(id /* block */)arg2;

- (void)dealloc;
- (BSXPCConnectionListenerManager *)init;
- (BSXPCConnectionListenerManager *)_init;
- (NSOperationQueue *)_defaultHandlerQueue;
- (void)_addService:(NSObject *)arg0 withHandler:(id /* block */)arg1 onQueue:(/* block */ id)arg2;
- (void)_removeService:(NSObject *)arg0;

@end
