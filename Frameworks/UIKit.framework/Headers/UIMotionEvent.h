/* Runtime dump - UIMotionEvent
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMotionEvent : UIInternalEvent
{
    id _motionAccelerometer;
    int _subtype;
    int _shakeState;
    int _stateMachineState;
    double _shakeStartTime;
    double _lastMovementTime;
    double _highLevelTime;
    double _lowEndTimeout;
    NSTimer * _idleTimer;
    char _sentMotionBegan;
    id _lowPassState;
    unsigned int _lowPassStateIndex;
    unsigned int _highPassStateIndex;
    id _highPassState;
    int notifyToken;
}

@property (nonatomic) int shakeState;

- (void)dealloc;
- (NSString *)description;
- (UIMotionEvent *)_init;
- (char)_isDetectingMotionEvents;
- (void)_setSubtype:(int)arg0;
- (void)setShakeState:(int)arg0;
- (int)type;
- (NSArray *)_windows;
- (int)subtype;
- (void)_sendEventToResponder:(NSObject *)arg0;
- (int)_shakeState;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg0;
- (void)_willResume;
- (void)_willSuspend;
- (void)_updateAccelerometerEnabled;
- (int)shakeState;
- (char)_detectWhenNotActive;
- (void)_idleTimerFired;
- (void)_resetLowPassState;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg0;
- (float)_determineShakeLevelX:(float)arg0 y:(float)arg1 z:(float)arg2 currentState:(int)arg3;
- (int)_feedStateMachine:(float)arg0 currentState:(int)arg1 timestamp:(double)arg2;
- (float)_highPass:(float)arg0;
- (float)_lowPass:(float)arg0;
- (void)accelerometer:(BKSAccelerometer *)arg0 didAccelerateWithTimeStamp:(double)arg1 x:(float)arg2 y:(float)arg3 z:(float)arg4 eventType:(int)arg5;
- (void)_enablePeakDetectionIfNecessary;

@end
