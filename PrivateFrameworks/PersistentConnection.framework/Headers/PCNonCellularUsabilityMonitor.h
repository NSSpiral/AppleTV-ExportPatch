/* Runtime dump - PCNonCellularUsabilityMonitor
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSObject<OS_dispatch_queue> * _monitorDelegateQueue;
    CUTWeakReference * _delegateReference;
    NSString * _demoOverrideInterface;
    int _previousLinkQuality;
    char _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray * _interfaceMonitors;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) char isInterfaceUsable;
@property (readonly, nonatomic) char isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) char isInternetReachable;
@property (readonly, retain, nonatomic) NSString * linkQualityString;
@property (readonly, nonatomic) char isPoorLinkQuality;
@property (readonly, nonatomic) char isBadLinkQuality;
@property (readonly, nonatomic) char isRadioHot;
@property (readonly, nonatomic) struct __CFString * currentRAT;
@property (readonly, nonatomic) char isLTEWithCDRX;
@property (readonly, nonatomic) struct __CFString * wwanInterfaceName;
@property (nonatomic) <PCInterfaceUsabilityMonitorDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<PCInterfaceUsabilityMonitorDelegate> *)arg0;
- (<PCInterfaceUsabilityMonitorDelegate> *)delegate;
- (char)isInterfaceUsable;
- (char)isInternetReachable;
- (NSString *)linkQualityString;
- (char)isPoorLinkQuality;
- (char)isInterfaceHistoricallyUsable;
- (void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1;
- (void)interfaceReachabilityChanged:(NSNotification *)arg0;
- (char)isBadLinkQuality;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)arg0;
- (void)setTrackedTimeInterval:(double)arg0;
- (void)setThresholdOffTransitionCount:(unsigned int)arg0;
- (void)setTrackUsability:(char)arg0;
- (char)isRadioHot;
- (void)_addMonitorWithInterfaceName:(NSString *)arg0;
- (void)_forwardConfigurationOnIvarQueue;
- (int)_linkQualityOnIvarQueue;
- (PCNonCellularUsabilityMonitor *)initWithDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (int)linkQuality;
- (int)interfaceIdentifier;

@end
