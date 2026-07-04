/* Runtime dump - HAPAccessoryServerBrowserIP
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPTimerDelegate>
{
    struct BonjourBrowser * _bonjourBrowser;
    NSMutableSet * _discoveredAccessoryServers;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableSet * _pendingBonjourEvents;
    HAPTimer * _bonjourEventTimer;
}

@property (retain, nonatomic) NSMutableSet * discoveredAccessoryServers;
@property (weak, nonatomic) <HAPAccessoryServerBrowserDelegate> * delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (retain, nonatomic) NSMutableSet * pendingBonjourEvents;
@property (retain, nonatomic) HAPTimer * bonjourEventTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<HAPAccessoryServerBrowserDelegate> *)arg0;
- (<HAPAccessoryServerBrowserDelegate> *)delegate;
- (HAPAccessoryServerBrowserIP *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (char)_delegateRespondsToSelector:(SEL)arg0;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)processPendingBonjourRemoveEvents:(id)arg0;
- (int)linkType;
- (void)timerDidFire:(HAPTimer *)arg0;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)discoverAccessoryServerWithIdentifier:(NSString *)arg0;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg0 eventInfo:(NSDictionary *)arg1;
- (long)_initializeAndStartBonjourBrowser;
- (NSMutableSet *)discoveredAccessoryServers;
- (void)_processPendingBonjourEvent:(NSObject *)arg0;
- (int)_purgePendingBonjourEvents:(id)arg0 withProcessing:(char)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(NSDictionary *)arg0;
- (long)_server:(id *)arg0 forBonjourDevice:(NSObject *)arg1;
- (void)_pendBonjourRemoveEvent:(NSObject *)arg0;
- (void)_handleBonjourRemoveWithEventInfo:(NSDictionary *)arg0;
- (void)_invalidateAccessoryServers:(char)arg0;
- (void)_setReachability:(char)arg0 forServer:(NSObject *)arg1;
- (NSMutableSet *)pendingBonjourEvents;
- (void)_pendBonjourEvent:(NSObject *)arg0;
- (HAPTimer *)bonjourEventTimer;
- (void)_timerDidExpire:(id)arg0;
- (void)setDiscoveredAccessoryServers:(NSMutableSet *)arg0;
- (void)setPendingBonjourEvents:(NSMutableSet *)arg0;
- (void)setBonjourEventTimer:(HAPTimer *)arg0;
- (void)setDelegate:(<HAPAccessoryServerBrowserDelegate> *)arg0 queue:(NSObject *)arg1;

@end
