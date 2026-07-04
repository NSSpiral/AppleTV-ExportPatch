/* Runtime dump - TUCallCenterCallsCache
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCenterCallsCache : NSObject
{
    NSMapTable * _callRefToTelephonyCall;
    NSObject<OS_dispatch_semaphore> * _callRefToTelephonyCallSemaphore;
    NSMapTable * _chatGUIDToFaceTimeCall;
    NSObject<OS_dispatch_semaphore> * _chatGUIDToFaceTimeCallSemaphore;
    NSMapTable * _uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> * _uniqueProxyIdentifierToProxyCallSemaphore;
    NSMutableSet * _currentCallSet;
}

@property (retain, nonatomic) NSMapTable * callRefToTelephonyCall;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * callRefToTelephonyCallSemaphore;
@property (retain, nonatomic) NSMapTable * chatGUIDToFaceTimeCall;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * chatGUIDToFaceTimeCallSemaphore;
@property (retain, nonatomic) NSMapTable * uniqueProxyIdentifierToProxyCall;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * uniqueProxyIdentifierToProxyCallSemaphore;
@property (retain, nonatomic) NSMutableSet * currentCallSet;

- (void)dealloc;
- (TUCallCenterCallsCache *)init;
- (id)callForCTCall:(struct __CTCall *)arg0;
- (void)setCallRefToTelephonyCall:(NSMapTable *)arg0;
- (void)setChatGUIDToFaceTimeCall:(NSMapTable *)arg0;
- (void)setUniqueProxyIdentifierToProxyCall:(NSMapTable *)arg0;
- (void)setCurrentCallSet:(NSMutableSet *)arg0;
- (NSMutableSet *)currentCallSet;
- (id)callForCTCall:(struct __CTCall *)arg0 shouldSkipLoadingCallState:(char)arg1;
- (NSObject<OS_dispatch_semaphore> *)callRefToTelephonyCallSemaphore;
- (NSMapTable *)callRefToTelephonyCall;
- (void)_updateCallWithCallState:(NSString *)arg0 loadPersistentState:(char)arg1;
- (id)callForChat:(id)arg0 shouldSkipLoadingCallState:(char)arg1;
- (NSObject<OS_dispatch_semaphore> *)chatGUIDToFaceTimeCallSemaphore;
- (NSMapTable *)chatGUIDToFaceTimeCall;
- (NSObject<OS_dispatch_semaphore> *)uniqueProxyIdentifierToProxyCallSemaphore;
- (NSMapTable *)uniqueProxyIdentifierToProxyCall;
- (void)stopTrackingCall:(id)arg0;
- (id)callForChat:(id)arg0;
- (id)proxyCallForProxyCall:(id)arg0;
- (void)setCallRefToTelephonyCallSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)setChatGUIDToFaceTimeCallSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)setUniqueProxyIdentifierToProxyCallSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;

@end
