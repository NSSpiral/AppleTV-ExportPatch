/* Runtime dump - CADynamicsBehavior
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray * springs;
@property (copy) NSArray * forceFields;
@property double timeStep;
@property double minimumTimeStep;
@property float stoppedVelocity;
@property float stoppedAngularVelocity;
@property float springScale;
@property float drag;
@property float angularDrag;
@property char reactsToCollisions;
@property double collisionInterval;

+ (CADynamicsBehavior *)defaultValueForKey:(NSString *)arg0;

- (struct Object *)CA_copyRenderValue;
- (NSArray *)springs;
- (NSArray *)forceFields;
- (double)minimumTimeStep;
- (float)stoppedVelocity;
- (float)stoppedAngularVelocity;
- (double)collisionInterval;
- (float)springScale;
- (float)drag;
- (float)angularDrag;
- (char)reactsToCollisions;
- (void)setForceFields:(NSArray *)arg0;
- (void)setMinimumTimeStep:(double)arg0;
- (void)setStoppedVelocity:(float)arg0;
- (void)setStoppedAngularVelocity:(float)arg0;
- (void)setCollisionInterval:(double)arg0;
- (void)setSpringScale:(float)arg0;
- (void)setDrag:(float)arg0;
- (void)setAngularDrag:(float)arg0;
- (double)timeStep;
- (void)setTimeStep:(double)arg0;
- (void)setSprings:(NSArray *)arg0;
- (void)setReactsToCollisions:(char)arg0;

@end
