/* Runtime dump - PTXParallaxReferenceFrame
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver>
{
    id _referenceQuaternion;
    id _absoluteQuaternion;
    double _lastUpdate;
    struct CGPoint _lastOffset;
    double _idleStartTime;
    struct CGPoint _idleStartOffset;
    PTXParallaxEngineSettings * _settings;
    CAMediaTimingFunction * _curveFunction;
    float _smoothingDegree;
    float _referenceShiftSpeed;
    float _distanceMultiplier;
    float _jumpThreshold;
    unsigned long _jumpSound;
    float _idleLeeway;
    float _secondsBeforeIdle;
    float _lockValue;
    float _lockStrength;
    UIWindow * _diagnosticsWindow;
    UILabel * _idleIndicator;
    UIView * _horizontalLockIndicator;
    UIView * _verticalLockIndicator;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)reset;
- (struct CGPoint)offset;
- (void)settings:(PTXParallaxEngineSettings *)arg0 changedValueForKey:(NSString *)arg1;
- (void).cxx_destruct;
- (void)_updateSettings;
- (void)_tearDownDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (struct CGPoint)_currentRawOffset:(NSSet *)arg0;
- (void)_updateSmoothedOffsetForRawOffset:(struct CGPoint)arg0;
- (void)_updateDirectionalLockIndicators;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg0;
- (void)_showIdleUI:(char)arg0;
- (void)_createIdleIndicator;
- (void)_createDirectionLockIndicators;
- (void)_createDiagnosticsWindow;
- (char)_isIdle;
- (PTXParallaxReferenceFrame *)initWithReferenceAttitude:(id)arg0 settings:(PTXParallaxEngineSettings *)arg1;
- (void)updateWithAttitude:(CMAttitude *)arg0;
- (int)directionLockStatus;
- (float)directionLockStrength;
- (id)_relativeQuaternion:(unsigned long)arg0;
- (void)_updateIdleStateForRawOffset:(struct CGPoint)arg0;
- (void)_updateReferenceAttitude:(id)arg0;
- (struct CGPoint)_curvedOffset;

@end
