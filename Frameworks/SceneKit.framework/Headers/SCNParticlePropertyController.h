/* Runtime dump - SCNParticlePropertyController
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying>
{
    id _reserved;
    CAAnimation * _animation;
    int _inputMode;
    float _inputScale;
    float _inputBias;
    SCNNode * _inputOrigin;
    NSString * _inputProperty;
    id _c3dAnimation;
}

@property (retain, nonatomic) CAAnimation * animation;
@property (nonatomic) int inputMode;
@property (nonatomic) float inputScale;
@property (nonatomic) float inputBias;
@property (weak, nonatomic) SCNNode * inputOrigin;
@property (copy, nonatomic) NSString * inputProperty;

+ (NSObject *)SCNJSExportProtocol;
+ (NSObject *)controllerWithAnimation:(CAAnimation *)arg0;
+ (NSObject *)particlePropertyControllerWithAnimation:(CAAnimation *)arg0;
+ (char)supportsSecureCoding;

- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg0;
- (float)inputScale;
- (float)inputBias;
- (SCNNode *)inputOrigin;
- (NSString *)inputProperty;
- (struct __C3DKeyframedAnimation *)c3dAnimation;
- (void)setInputScale:(float)arg0;
- (void)setInputBias:(float)arg0;
- (void)setInputOrigin:(SCNNode *)arg0;
- (void)setInputProperty:(NSString *)arg0;
- (void)_customEncodingOfSCNParticlePropertyController:(BRController *)arg0;
- (void)_customDecodingOfSCNParticlePropertyController:(BRController *)arg0;
- (void)dealloc;
- (SCNParticlePropertyController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNParticlePropertyController *)init;
- (SCNParticlePropertyController *)copy;
- (SCNParticlePropertyController *)copyWithZone:(struct _NSZone *)arg0;
- (CAAnimation *)animation;
- (void)setInputMode:(int)arg0;
- (int)inputMode;
- (void)setAnimation:(CAAnimation *)arg0;

@end
