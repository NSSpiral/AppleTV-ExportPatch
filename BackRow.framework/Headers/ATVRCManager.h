/* Runtime dump - ATVRCManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRCCapture, ATVRemoteSet;
@interface ATVRCManager : NSObject
{
    int _runState;
    ATVRCCapture * _trpCapture;
    NSMutableArray * _remoteSets;
    ATVRemoteSet * _learningSet;
    ATVRemoteSet * _appleRemoteSet;
    ATVRemoteSet * _temporaryActiveSet;
    char _appleRemoteInUse;
    NSTimer * _discontinuityTrigger;
    NSTimer * _ledResetTimer;
    unsigned short _customPage;
    unsigned short _customUsage;
    char _a39LegacyDispatch;
    unsigned long _pairingUID;
    struct _opaque_pthread_mutex_t _mutex;
}

+ (ATVRCManager *)sharedManager;

- (void)unpairAppleRemote;
- (void)_resetDiscontinuityTrigger;
- (double)captureProgress;
- (void)_discontinuityTrigger:(id)arg0;
- (NSSet *)_loadAppleRemoteSet;
- (char)_loadActiveRemoteSets;
- (void)_exitLearningState;
- (id)_maskToggleBits:(id)arg0;
- (char)_isCustomEvent:(NSObject *)arg0;
- (void)_eventRecognized:(char)arg0;
- (char)processEvent:(NSObject *)arg0;
- (char)_processLearningEvent:(NSObject *)arg0;
- (void)_resetLEDTimer;
- (void)_enterLearningState;
- (NSSet *)_findIdenticalActiveRemoteSet:(NSSet *)arg0;
- (NSString *)_defaultCustomName;
- (void)_addRemoteSet:(NSSet *)arg0;
- (void)applyLearnedButtonsToSet:(NSSet *)arg0 buttons:(struct _NSRange)arg1;
- (char)_saveActiveRemoteSets;
- (NSSet *)_setTemporaryActiveSet:(NSSet *)arg0;
- (NSSet *)_loadRemoteSet:(NSSet *)arg0;
- (int)findPatternInActiveSets:(id)arg0 includeLearningSet:(char)arg1 excludeExtendedRemoteSet:(NSSet *)arg2 excludeRange:(struct _NSRange)arg3;
- (void)_pairAppleRemote:(unsigned long)arg0;
- (void)_unpairAppleRemote;
- (void)setCustomPage:(unsigned short)arg0 withUsage:(unsigned short)arg1;
- (ATVRemoteSet *)learningSet;
- (void)startLearn;
- (void)endLearn;
- (NSSet *)capturedPatternSet;
- (void)applyCaptureToButton:(int)arg0;
- (void)applyCaptureToPlayButtonOnly;
- (NSSet *)applyLearningSet;
- (void)setName:(NSString *)arg0 remoteSet:(NSArray *)arg1;
- (ATVRemoteSet *)temporaryActiveSet;
- (NSSet *)setTemporaryActiveSet:(ATVRemoteSet *)arg0;
- (id)identifyCapture:(int)arg0;
- (int)findPatternInActiveSets:(id)arg0;
- (void)removeRemoteSet:(NSSet *)arg0;
- (void)addRemoteSet:(NSSet *)arg0;
- (NSSet *)findIdenticalActiveRemoteSet:(NSSet *)arg0;
- (NSMutableArray *)remoteSets;
- (void)resetLearningSet;
- (void)pairAppleRemote:(unsigned long)arg0;
- (char)appleRemoteInUse;
- (void)_clearActiveRemoteSets;
- (char)_nameInExistsInSets:(id)arg0;
- (void)_doSystemActivityNotification;
- (void)_ledReset:(NSSet *)arg0;
- (void)dealloc;
- (ATVRCManager *)init;
- (int)state;
- (void)setState:(int)arg0;
- (void)_setState:(int)arg0;

@end
