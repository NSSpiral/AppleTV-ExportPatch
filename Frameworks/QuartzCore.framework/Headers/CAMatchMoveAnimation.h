/* Runtime dump - CAMatchMoveAnimation
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMatchMoveAnimation : CAAnimation

@property (weak) CALayer * sourceLayer;
@property (copy) NSString * keyPath;
@property char targetsSuperlayer;
@property (copy) NSArray * sourcePoints;
@property char appliesX;
@property char appliesY;
@property char appliesScale;
@property char appliesRotation;
@property char additive;

+ (CAMatchMoveAnimation *)defaultValueForKey:(NSString *)arg0;

- (char)_setCARenderAnimation:(struct Animation *)arg0 layer:(CALayer *)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg0;
- (struct Animation *)_copyRenderAnimationForLayer:(struct Ref<CA::Render::Timing>)arg0;
- (char)targetsSuperlayer;
- (NSArray *)sourcePoints;
- (char)appliesScale;
- (char)appliesRotation;
- (char)appliesX;
- (char)appliesY;
- (void)setTargetsSuperlayer:(char)arg0;
- (void)setAppliesX:(char)arg0;
- (void)setAppliesY:(char)arg0;
- (void)setAppliesScale:(char)arg0;
- (void)setAppliesRotation:(char)arg0;
- (NSString *)keyPath;
- (void)setAdditive:(char)arg0;
- (void)setKeyPath:(NSString *)arg0;
- (char)isAdditive;
- (void)applyForTime:(double)arg0 presentationObject:(NSObject *)arg1 modelObject:(NSObject *)arg2;
- (void)setSourceLayer:(CALayer *)arg0;
- (void)setSourcePoints:(NSArray *)arg0;
- (CALayer *)sourceLayer;

@end
