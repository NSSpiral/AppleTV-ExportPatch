/* Runtime dump - SCNPhysicsNoiseField
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    float _smoothness;
    float _animationSpeed;
}

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (NSObject *)SCNJSExportProtocol;
+ (char)supportsSecureCoding;

- (void)setSmoothness:(float)arg0;
- (void)setAnimationSpeed:(float)arg0;
- (struct c3dPhysicsField *)_createField;
- (float)smoothness;
- (float)animationSpeed;
- (SCNPhysicsNoiseField *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNPhysicsNoiseField *)init;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
