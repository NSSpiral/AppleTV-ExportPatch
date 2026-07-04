/* Runtime dump - PKPhysicsFieldNoise
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsFieldNoise : PKPhysicsField

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (CKDPRecordFieldIdentifier *)field;

- (void)setSmoothness:(float)arg0;
- (void)setAnimationSpeed:(float)arg0;
- (float)smoothness;
- (float)animationSpeed;
- (PKPhysicsFieldNoise *)init;
- (PKPhysicsFieldNoise *)initWithField:(struct shared_ptr<PKCField>)arg0;

@end
