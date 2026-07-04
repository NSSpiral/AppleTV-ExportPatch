/* Runtime dump - UIDynamicItemBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicItemBehavior : UIDynamicBehavior
{
    char _useDefaultViewPropertiesApplier;
    char _useCircularBoundingBox;
    struct ? _stateFlags;
    NSMapTable * _cachedAngularVelocities;
    NSMapTable * _cachedLinearVelocities;
    char _allowsRotation;
    float _elasticity;
    float _friction;
    float _density;
    float _resistance;
    float _angularResistance;
}

@property (readonly, copy, nonatomic) NSArray * items;
@property (nonatomic) float elasticity;
@property (nonatomic) float friction;
@property (nonatomic) float density;
@property (nonatomic) float resistance;
@property (nonatomic) float angularResistance;
@property (nonatomic) char allowsRotation;

- (void)dealloc;
- (UIDynamicItemBehavior *)init;
- (NSString *)description;
- (void)_commonInit;
- (NSArray *)items;
- (UIDynamicItemBehavior *)initWithItems:(NSArray *)arg0;
- (void)_associate;
- (void)_dissociate;
- (void)setElasticity:(float)arg0;
- (void)setFriction:(float)arg0;
- (void)setResistance:(float)arg0;
- (void)setDensity:(float)arg0;
- (void)setAllowsRotation:(char)arg0;
- (float)elasticity;
- (float)friction;
- (float)density;
- (float)resistance;
- (float)angularResistance;
- (char)allowsRotation;
- (void)_configureBody:(NSObject *)arg0 forView:(NSObject *)arg1;
- (void)_reevaluate:(unsigned int)arg0;
- (char)_useCircularBoundingBox;
- (void)_setUseCircularBoundingBox:(char)arg0;
- (void)addItem:(NSObject *)arg0;
- (void)removeItem:(void *)arg0;
- (void)setAngularResistance:(float)arg0;
- (void)addLinearVelocity:(struct CGPoint)arg0 forItem:(NSObject *)arg1;
- (struct CGPoint)linearVelocityForItem:(NSObject *)arg0;
- (void)_setPosition:(struct CGPoint)arg0 forItem:(NSObject *)arg1;
- (struct CGPoint)_positionForItem:(NSObject *)arg0;
- (void)_setAngle:(float)arg0 forItem:(NSObject *)arg1;
- (float)_angleForItem:(NSObject *)arg0;
- (void)addAngularVelocity:(float)arg0 forItem:(NSObject *)arg1;
- (float)angularVelocityForItem:(NSObject *)arg0;
- (float)_elasticityForItem:(NSObject *)arg0;
- (float)_frictionForItem:(NSObject *)arg0;
- (float)_densityForItem:(NSObject *)arg0;
- (float)_resistanceForItem:(NSObject *)arg0;
- (float)_angularResistanceForItem:(NSObject *)arg0;
- (float)_massForItem:(NSObject *)arg0;
- (char)_rotationEnabledForItem:(NSObject *)arg0;
- (void)applyImpulse:(struct CGPoint)arg0 toItem:(NSObject *)arg1;
- (char)useDefaultViewPropertiesApplier;
- (void)setUseDefaultViewPropertiesApplier:(char)arg0;

@end
