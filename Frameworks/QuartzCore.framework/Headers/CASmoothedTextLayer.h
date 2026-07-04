/* Runtime dump - CASmoothedTextLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CASmoothedTextLayer : CATextLayer

@property unsigned int fontSmoothingStyle;

+ (CASmoothedTextLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;
+ (char)needsDisplayForKey:(NSString *)arg0;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (unsigned int)fontSmoothingStyle;
- (void)_drawLine:(struct __CTLine *)arg0 inContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;
- (void)setFontSmoothingStyle:(unsigned int)arg0;
- (void)didChangeValueForKey:(NSString *)arg0;

@end
