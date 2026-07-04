/* Runtime dump - CALinearMaskLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALinearMaskLayer : CALayer

@property struct CGColor * foregroundColor;

+ (CALinearMaskLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext *)arg0;
- (void)didChangeValueForKey:(NSString *)arg0;
- (struct CGColor *)foregroundColor;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)setForegroundColor:(struct CGColor *)arg0;

@end
