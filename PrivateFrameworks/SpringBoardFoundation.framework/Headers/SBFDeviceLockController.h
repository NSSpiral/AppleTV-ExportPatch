/* Runtime dump - SBFDeviceLockController
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDeviceLockController : NSObject
{
    int _lockState;
    char _isBlockedForThermalCondition;
    double _lastLockDate;
    char _isPermanentlyBlocked;
    double _deviceLockUnblockTime;
    PCPersistentTimer * _deviceLockUnblockTimer;
    char _cachedPasscodeLockedOrBlocked;
    char _hasBeenUnlockedOnceSinceBoot;
    SBFPasscodeLockAssertionManager * _assertionManager;
    SBFPasscodeLockDisableAssertion * _transientPasscodeCheckingAssertion;
    char _okToSendNotifications;
    NSString * _lastIncorrectPasscodeAttempt;
    char _shouldFetchPasscodeLockState;
    char _lastPasscodeLockStateWasLocked;
    struct __CFRunLoopObserver * _runLoopObserver;
    NSObject<OS_dispatch_queue> * _persistentStateQueue;
    char _speculativePasscodeFailureChargeOutstanding;
    NSDictionary * _originalDefaultsForRollback;
}

+ (SBFDeviceLockController *)_lockStateDefaults;
+ (void)_loadLockControllerDefaultsJournalIfNecessary;
+ (SBFDeviceLockController *)_copyLockControllerDefaults;
+ (void)_updateLockControllerDefaultsJournal;
+ (NSArray *)_journaledDefaultsAndTypes;
+ (NSString *)_journalPath;
+ (void)_loadLockControllerDefaults:(id)arg0;

- (void)dealloc;
- (SBFDeviceLockController *)init;
- (NSString *)description;
- (void)synchronize;
- (char)isBlocked;
- (void)_clearBlockedState;
- (void)_setDeviceLockUnblockTime:(double)arg0;
- (char)deviceHasPasscodeSet;
- (char)_shouldSuppressLockOnInit;
- (void)_updateDeviceLockedState;
- (void)_notePasscodeLockedOrBlockedStateMayHaveChanged:(char)arg0;
- (void)_evaluatePendingWipe;
- (void)_clearUnblockTimer;
- (void)_noteBlockedReasonsMayHaveChanged;
- (char)_temporarilyBlocked;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (id)updateLockControllerDefaultsWithBlock:(id /* block */)arg0 journaled:(/* block */ id)arg1;
- (void)_unblockTimerFired;
- (void)_scheduleUnblockTimer;
- (void)_setupRunLoopObserverIfNecessary;
- (char)isPasscodeLocked;
- (char)isPasscodeLockedOrBlocked;
- (char)_shouldLockDeviceNow;
- (void)_enablePasscodeLockImmediately:(char)arg0;
- (void)_setLockState:(int)arg0;
- (void)_lockStateChangedFrom:(int)arg0 to:(int)arg1;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (void)_commitSpeculativeFailureCharge;
- (void)_wipeDevice;
- (char)attemptDeviceUnlockWithPassword:(NSString *)arg0 appRequested:(char)arg1;
- (double)lastLockDate;
- (char)isBlockedForThermalCondition;
- (void)_sendBlockStateChangeNotification;
- (void)setBlockedForThermalCondition:(char)arg0;
- (char)isPermanentlyBlocked:(double *)arg0;
- (char)isPasscodeLockedCached;
- (char)deviceHasBeenPasscodeUnlockedOnceSinceBoot;
- (void)enablePasscodeLockImmediately;
- (void)_notifyOfFirstUnlock;
- (void)_keybagLockStateChangedTo:(int)arg0;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)_addDeviceLockDisableAssertion:(id)arg0;
- (void)_removeDeviceLockDisableAssertion:(id)arg0;
- (void)_cachePassword:(NSString *)arg0;
- (void)_uncachePasscodeIfNecessary;

@end
