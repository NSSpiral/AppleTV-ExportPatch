/* Runtime dump - SCRCGestureFactory
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureFactory : NSObject
{
    float _stallDistance;
    float _maxDimension;
    float _thumbRegion;
    int _orientation;
    id _directions;
    struct ? _axisFlipper;
    float _scaledTrackingDistance;
    char _setTrackingTimer;
    float _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _tapSpeedRegion;
    double _tapVelocityThresholdForRegion;
    char _inTapSpeedRegionForDownEvent;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    float _lastDegrees;
    float _startDegrees;
    float _startDistance;
    char _startedInGutter;
    double _requireDelayBeforeTracking;
    char _requireUp;
    char _thumbRejectionEnabled;
    float _thumbRejectionDistance;
    int _state;
    int _previousState;
    int _direction;
    float _directionalSlope;
    id _finger;
    unsigned int _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    float _distance;
    unsigned int _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    struct ? _delegate;
    SCRCTargetSelectorTimer * _trackingTimer;
    struct ? _tap;
    SCRCTargetSelectorTimer * _tapTimer;
    SCRCTargetSelectorTimer * _gutterUpTimer;
    struct ? _split;
}

@property (nonatomic) char thumbRejectionEnabled;

- (struct CGPoint)startLocation;
- (struct CGPoint)endLocation;
- (void)dealloc;
- (int)orientation;
- (void)reset;
- (int)direction;
- (unsigned int)tapCount;
- (struct CGRect)mainFrame;
- (void)setOrientation:(int)arg0;
- (float)velocity;
- (float)vector;
- (struct CGPoint)rawLocation;
- (float)distance;
- (unsigned int)fingerCount;
- (SCRCGestureFactory *)initWithSize:(struct CGSize)arg0 delegate:(struct ?)arg1 threadKey:(NSString *)arg2;
- (void)_enterTrackingMode:(id)arg0;
- (void)_handleTap;
- (void)_handleGutterUp;
- (struct CGRect)_currentTapRect;
- (void)_updateMultiTapFrame;
- (void)_processUpAndPost:(char)arg0;
- (void)_up;
- (void)_updateTapState;
- (char)_handleSplitTap;
- (void)handleGestureEvent:(NSObject *)arg0;
- (char)_handleSplitEvent:(NSObject *)arg0;
- (void)_drag:(id)arg0;
- (void)_down:(id)arg0;
- (void)_updateStartWithPoint:(struct CGPoint)arg0 time:(double)arg1;
- (struct CGRect)tapFrame;
- (SCRCGestureFactory *)initWithSize:(struct CGSize)arg0 delegate:(struct ?)arg1;
- (void)setFlickSpeed:(float)arg0;
- (float)flickSpeed;
- (void)setTapSpeed:(float)arg0;
- (void)setTapSpeedTimeThreshold:(float)arg0 forRegion:(struct CGRect)arg1;
- (float)tapSpeed;
- (float)directionalSlope;
- (unsigned int)absoluteFingerCount;
- (char)tapIsDown;
- (struct CGPoint)rawAverageLocation;
- (struct CGRect)multiTapFrame;
- (struct CGPoint)tapPoint;
- (struct CGPoint)tapPointWeightedToSides;
- (double)tapInterval;
- (NSString *)gestureStateString;
- (char)thumbRejectionEnabled;
- (void)setThumbRejectionEnabled:(char)arg0;
- (int)gestureState;

@end
