/* Runtime dump - SBFAnimationSettings
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAnimationSettings : SBFAnimationCurveSettings
{
    BSAnimationSettings * _exportedSettings;
    int _animationType;
    float _mass;
    float _stiffness;
    float _damping;
    float _epsilon;
    double _delay;
    double _duration;
    double _calculatedDuration;
}

@property (nonatomic) int animationType;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) float mass;
@property (nonatomic) float stiffness;
@property (nonatomic) float damping;
@property (nonatomic) float epsilon;
@property (nonatomic) double calculatedDuration;

+ (SBFAnimationSettings *)settingsControllerModule;
+ (NSString *)_moduleWithSectionTitle:(NSString *)arg0;
+ (NSString *)_moduleWithSectionTitle:(NSString *)arg0 delay:(char)arg1;

- (float)stiffness;
- (void)dealloc;
- (void)setStiffness:(float)arg0;
- (void)setDamping:(float)arg0;
- (void)setMass:(float)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setDelay:(double)arg0;
- (double)delay;
- (float)damping;
- (void)setDefaultValues;
- (float)mass;
- (void)setAnimationType:(int)arg0;
- (void)_invalidate;
- (int)animationType;
- (float)epsilon;
- (void)setEpsilon:(float)arg0;
- (NSDictionary *)BSAnimationSettings;
- (void)setCalculatedDuration:(double)arg0;
- (double)calculatedDuration;

@end
