/* Runtime dump - TUAudioController
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioController : NSObject
{
    NSObject<OS_dispatch_semaphore> * _modifyingStateLock;
    NSObject<OS_dispatch_group> * _outstandingRequestsGroup;
}

- (void)dealloc;
- (TUAudioController *)init;
- (void)blockUntilOutstandingRequestsComplete;
- (void)_acquireLock;
- (void)_releaseLock;
- (void)_enterOutstandingRequestsGroup;
- (void)_leaveOutstandingRequestsGroup;
- (void)_requestUpdatedValueWithBlock:(id /* block */)arg0 object:(/* block */ id)arg1 isRequestingPointer:(id *)arg2 forceNewRequest:(char *)arg3 scheduleTimePointer:(char)arg4 notificationString:(unsigned long long *)arg5 queue:(NSObject *)arg6;

@end
