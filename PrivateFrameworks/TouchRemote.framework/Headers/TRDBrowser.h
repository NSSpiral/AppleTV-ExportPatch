/* Runtime dump - TRDBrowser
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSNetServiceBrowser * _browser;
    unsigned int _browsingCount;
    NSMapTable * _netServiceToService;
    NSMapTable * _netServiceToResolvingCompletionHandlers;
    NSMapTable * _XPCConnectionToBrowsingCount;
}

@property (readonly, nonatomic) char browsing;
@property (readonly, copy, nonatomic) NSArray * services;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TRDBrowser *)sharedBrowser;

- (char)isBrowsing;
- (void)dealloc;
- (TRDBrowser *)init;
- (TRDBrowser *)_init;
- (void).cxx_destruct;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotResolve:(NSDictionary *)arg1;
- (NSArray *)services;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)TRXPCD_stopBrowsing;
- (void)TRXPCD_getServicesWithCompletionHandler:(id /* block */)arg0;
- (void)TRXPCD_startBrowsing;
- (char)_isXPCConnectionBrowsing:(id)arg0;
- (void)_callResolvingCompletionHandlersForNetService:(NSObject *)arg0 withError:(NSError *)arg1;
- (NSObject *)_netServiceForService:(NSObject *)arg0;
- (void)_resolveNetService:(NSObject *)arg0 withTimeout:(double)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)_serviceForNetService:(NSObject *)arg0;

@end
