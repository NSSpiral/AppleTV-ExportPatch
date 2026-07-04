/* Runtime dump - PTXParallaxEngineSettings
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxEngineSettings : _UISettings
{
    char _shiftEnabled;
    char _showIdleIndicator;
    char _jumpEnabled;
    char _playJumpSound;
    char _directionalLockEnabled;
    char _showDirectionalLockIndicators;
    unsigned int _frameInterval;
    float _inputSmoothing;
    float _sigmoidDegree;
    float _shiftSpeed;
    float _shiftDistanceDependence;
    float _idleLeeway;
    float _delayBeforeIdle;
    float _jumpThreshold;
    float _directionalLockThreshold;
    float _directionalLockStickiness;
    float _directionalLockSharpness;
}

@property unsigned int frameInterval;
@property float inputSmoothing;
@property float sigmoidDegree;
@property char shiftEnabled;
@property float shiftSpeed;
@property float shiftDistanceDependence;
@property float idleLeeway;
@property float delayBeforeIdle;
@property char showIdleIndicator;
@property char jumpEnabled;
@property float jumpThreshold;
@property char playJumpSound;
@property char directionalLockEnabled;
@property float directionalLockThreshold;
@property float directionalLockStickiness;
@property float directionalLockSharpness;
@property char showDirectionalLockIndicators;

+ (PTXParallaxEngineSettings *)settingsControllerModule;

- (void)setFrameInterval:(unsigned int)arg0;
- (void)setDirectionalLockEnabled:(char)arg0;
- (unsigned int)frameInterval;
- (void)setDefaultValues;
- (void)setIdleLeeway:(float)arg0;
- (void)setDelayBeforeIdle:(float)arg0;
- (void)setShowIdleIndicator:(char)arg0;
- (void)setJumpEnabled:(char)arg0;
- (void)setJumpThreshold:(float)arg0;
- (void)setPlayJumpSound:(char)arg0;
- (void)setDirectionalLockThreshold:(float)arg0;
- (void)setDirectionalLockStickiness:(float)arg0;
- (void)setDirectionalLockSharpness:(float)arg0;
- (void)setShowDirectionalLockIndicators:(char)arg0;
- (float)idleLeeway;
- (float)delayBeforeIdle;
- (char)showIdleIndicator;
- (char)jumpEnabled;
- (float)jumpThreshold;
- (char)playJumpSound;
- (char)directionalLockEnabled;
- (float)directionalLockThreshold;
- (float)directionalLockStickiness;
- (float)directionalLockSharpness;
- (char)showDirectionalLockIndicators;
- (void)setInputSmoothing:(float)arg0;
- (void)setSigmoidDegree:(float)arg0;
- (void)setShiftEnabled:(char)arg0;
- (void)setShiftSpeed:(float)arg0;
- (void)setShiftDistanceDependence:(float)arg0;
- (float)inputSmoothing;
- (float)sigmoidDegree;
- (char)shiftEnabled;
- (float)shiftSpeed;
- (float)shiftDistanceDependence;

@end
