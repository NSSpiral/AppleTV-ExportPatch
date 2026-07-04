/* Runtime dump - PCInterfaceMonitor
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol>
{
    <PCInterfaceUsabilityMonitorProtocol> * _internal;
    NSMapTable * _delegateMap;
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

+ (PCInterfaceMonitor *)sharedInstanceForIdentifier:(int)arg0;
+ (PCInterfaceMonitor *)stringForLinkQuality:(int)arg0;
+ (char)isPoorLinkQuality:(int)arg0;
+ (char)isBadLinkQuality:(int)arg0;

- (void)dealloc;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)removeDelegate:(NSObject *)arg0;
- (struct __CFString *)wwanInterfaceName;
- (char)isInterfaceUsable;
- (char)isInternetReachable;
- (NSString *)linkQualityString;
- (char)isPoorLinkQuality;
- (char)isInterfaceHistoricallyUsable;
- (void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1;
- (void)interfaceReachabilityChanged:(NSNotification *)arg0;
- (void)interfaceRadioHotnessChanged:(NSNotification *)arg0;
- (char)isBadLinkQuality;
- (char)isRadioHot;
- (struct __CFString *)currentRAT;
- (char)isLTEWithCDRX;
- (PCInterfaceMonitor *)initWithInterfaceIdentifier:(int)arg0;
- (int)linkQuality;
- (int)interfaceIdentifier;

@end
