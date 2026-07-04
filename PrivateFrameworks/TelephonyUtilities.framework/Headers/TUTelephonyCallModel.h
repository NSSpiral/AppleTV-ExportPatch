/* Runtime dump - TUTelephonyCallModel
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUTelephonyCallModel : TUCallModel
{
    NSDictionary * _callManagementState;
    NSObject<OS_dispatch_semaphore> * _callManagementStateSemaphore;
}

@property (readonly, nonatomic) char wiFiCallingCurrentlyAvailable;
@property (retain, nonatomic) NSDictionary * callManagementState;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> * callManagementStateSemaphore;

+ (TUTelephonyCallModel *)sharedInstance;

- (void)dealloc;
- (TUTelephonyCallModel *)init;
- (char)isSwappable;
- (char)isMergeable;
- (char)isHoldAllowed;
- (char)isAddCallAllowed;
- (int)ambiguityState;
- (char)isTakingCallsPrivateAllowed;
- (char)isHardPauseAvailable;
- (char)isEndAndAnswerAllowed;
- (char)isHoldAndAnswerAllowed;
- (char)isSendToVoicemailAllowed;
- (char)isWiFiCallingCurrentlyAvailable;
- (void)_invalidateCachedState;
- (NSObject<OS_dispatch_semaphore> *)callManagementStateSemaphore;
- (NSDictionary *)callManagementState;
- (char)_booleanValueForKey:(struct __CFString *)arg0;
- (char)_isAmbiguousCallList;
- (char)_isAmbiguousMultiPartyCall;
- (char)_networkCanTakeCallsPrivate;
- (char)_valueExistsForKey:(struct __CFString *)arg0;
- (void)setCallManagementState:(NSDictionary *)arg0;
- (void)_invalidateNetworkCanTakeCallsPrivateCache;
- (void)setCallManagementStateSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;

@end
