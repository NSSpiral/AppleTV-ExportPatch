/* Runtime dump - TRBrowser
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRBrowser : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _services;
    unsigned int _browsingCount;
}

+ (TRBrowser *)sharedBrowser;

- (void)dealloc;
- (TRBrowser *)init;
- (TRBrowser *)_init;
- (void).cxx_destruct;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)_XPCClientConnectionDidInterruptNotification:(NSNotification *)arg0;
- (void)getServicesWithCompletionHandler:(id /* block */)arg0;
- (void)TRXPCC_browserDidFindService:(NSObject *)arg0;
- (void)TRXPCC_browserDidRemoveService:(NSObject *)arg0;

@end
