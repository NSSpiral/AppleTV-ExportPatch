/* Runtime dump - PCWWANUsabilityMonitor
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSObject<OS_dispatch_queue> * _monitorDelegateQueue;
    CUTWeakReference * _delegateReference;
    char _isInCall;
    char _isInHighPowerState;
    char _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString * _interfaceName;
    PCInterfaceUsabilityMonitor * _interfaceMonitor;
    struct __CFString * _currentRAT;
    int _powerlogCDRXToken;
    struct __CTServerConnection * _telephonyServer;
    long _wwanContextID;
    NSObject<OS_dispatch_queue> * _ctServerQueue;
}

@property (readonly, nonatomic) struct __CFString * currentRAT;
@property (readonly, nonatomic) char isLTEWithCDRX;
@property (readonly, nonatomic) struct __CFString * wwanInterfaceName;
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
@property (nonatomic) <PCInterfaceUsabilityMonitorDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<PCInterfaceUsabilityMonitorDelegate> *)arg0;
- (<PCInterfaceUsabilityMonitorDelegate> *)delegate;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg0 userInfo:(struct __CFDictionary *)arg1;
- (struct __CFString *)wwanInterfaceName;
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
- (struct __CFString *)currentRAT;
- (char)isLTEWithCDRX;
- (void)_forwardConfigurationOnIvarQueue;
- (PCWWANUsabilityMonitor *)initWithDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)_setupWWANMonitor;
- (void)_adjustInterfaceNameForWWANContextID:(long)arg0;
- (int)linkQuality;
- (int)interfaceIdentifier;

@end
