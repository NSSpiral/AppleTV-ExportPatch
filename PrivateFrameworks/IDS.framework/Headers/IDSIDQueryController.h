/* Runtime dump - IDSIDQueryController
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSIDQueryController : NSObject
{
    _IDSIDQueryController * _internal;
}

+ (IDSIDQueryController *)sharedInstance;

- (char)removeListenerID:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)removeDelegate:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1 listenerID:(NSString *)arg2;
- (char)currentIDStatusForDestination:(NSObject *)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (void)addListenerID:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)addDelegate:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3;
- (char)refreshIDStatusForDestinations:(id)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (void)dealloc;
- (IDSIDQueryController *)init;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)removeDelegate:(NSObject *)arg0;
- (void)_setCurrentIDStatus:(int)arg0 forDestination:(NSObject *)arg1 service:(NSObject *)arg2;
- (char)refreshIDStatusForDestination:(NSObject *)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (char)_hasCacheForService:(NSObject *)arg0;
- (int)_currentCachedIDStatusForDestination:(NSObject *)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2;
- (char)_warmupQueryCacheForService:(NSObject *)arg0;
- (char)_flushQueryCacheForService:(NSObject *)arg0;
- (int)_refreshIDStatusForDestination:(NSObject *)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2;
- (id)_refreshIDStatusForDestinations:(id)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2;
- (int)_currentIDStatusForDestination:(NSObject *)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2;
- (char)requestIDStatusForDestinations:(id)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (char)requestIDStatusForDestination:(NSObject *)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (id)_currentIDStatusForDestinations:(id)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2;
- (char)currentIDStatusForDestinations:(id)arg0 service:(NSObject *)arg1 listenerID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;

@end
