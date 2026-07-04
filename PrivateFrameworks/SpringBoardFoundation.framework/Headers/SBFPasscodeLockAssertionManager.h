/* Runtime dump - SBFPasscodeLockAssertionManager
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFPasscodeLockAssertionManager : NSObject
{
    SBFPasscodeLockAssertionTracker * _preventLockTracker;
    SBFPasscodeLockAssertionTracker * _lockScreenCameraTracker;
    SBFPasscodeLockAssertionTracker * _siriTracker;
    SBFPasscodeLockAssertionTracker * _transientTracker;
}

- (void)dealloc;
- (SBFPasscodeLockAssertionManager *)init;
- (NSString *)description;
- (void)addAssertion:(MPMediaLibraryConnectionAssertion *)arg0;
- (void)removeAssertion:(MPMediaLibraryConnectionAssertion *)arg0;
- (char)hasActiveAssertions;

@end
