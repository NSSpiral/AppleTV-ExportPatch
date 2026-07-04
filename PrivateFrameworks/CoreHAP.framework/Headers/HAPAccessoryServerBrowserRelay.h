/* Runtime dump - HAPAccessoryServerBrowserRelay
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser
{
    NSMutableArray * _discoveredAccessoryServers;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, nonatomic) NSMutableArray * discoveredAccessoryServers;
@property (weak, nonatomic) <HAPAccessoryServerBrowserDelegate> * delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;

- (void)setDelegate:(<HAPAccessoryServerBrowserDelegate> *)arg0;
- (<HAPAccessoryServerBrowserDelegate> *)delegate;
- (HAPAccessoryServerBrowserRelay *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (int)linkType;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)discoverAccessoryServerWithIdentifier:(NSString *)arg0;
- (NSMutableArray *)discoveredAccessoryServers;
- (void)_setDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)addAccessoryServerWithStream:(NSObject *)arg0 name:(NSString *)arg1 identifier:(NSString *)arg2;
- (void)removeAccessoryServerWithStream:(NSObject *)arg0;
- (void)setDelegate:(<HAPAccessoryServerBrowserDelegate> *)arg0 queue:(NSObject *)arg1;

@end
