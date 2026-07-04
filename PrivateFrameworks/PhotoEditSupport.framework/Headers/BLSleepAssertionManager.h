/* Runtime dump - BLSleepAssertionManager
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLSleepAssertionManager : NSObject
{
    NSObject<OS_dispatch_semaphore> * m_assertionSemaphore;
    int m_assertionCount;
    char m_waiting;
    int m_assertionLock;
    int m_idleCount;
    int m_idleLock;
}

+ (BLSleepAssertionManager *)sharedInstance;

- (BLSleepAssertionManager *)retain;
- (void)release;
- (void)dealloc;
- (BLSleepAssertionManager *)init;
- (BLSleepAssertionManager *)autorelease;
- (void)takeSleepAssertion;
- (void)releaseSleepAssertion;
- (void)waitForOutstandingSleepAssertions;
- (void)takeIdleAssertion;
- (void)releaseIdleAssertion;
- (char)hidden;

@end
