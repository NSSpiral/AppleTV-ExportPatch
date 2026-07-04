/* Runtime dump - CATransition
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransition : CAAnimation

@property (copy) NSDictionary * options;
@property unsigned int transitionFlags;
@property (copy) NSString * type;
@property (copy) NSString * subtype;
@property float startProgress;
@property float endProgress;
@property (retain) id filter;

- (char)_setCARenderAnimation:(struct Animation *)arg0 layer:(CALayer *)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg0;
- (struct Animation *)_copyRenderAnimationForLayer:(struct Ref<CA::Render::Timing>)arg0;
- (float)startProgress;
- (unsigned int)transitionFlags;
- (void)setStartProgress:(float)arg0;
- (void)setEndProgress:(float)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)subtype;
- (void)setSubtype:(NSString *)arg0;
- (void)setTransitionFlags:(unsigned int)arg0;
- (void)setFilter:(NSObject *)arg0;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;
- (float)endProgress;
- (CIFilter *)filter;

@end
