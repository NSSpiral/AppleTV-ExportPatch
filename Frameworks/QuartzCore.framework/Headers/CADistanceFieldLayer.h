/* Runtime dump - CADistanceFieldLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString * renderMode;
@property char invertsShape;
@property struct CGColor * foregroundColor;
@property float offset;
@property float sharpness;
@property float lineWidth;

+ (CADistanceFieldLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (float)sharpness;
- (char)invertsShape;
- (unsigned int)_renderImageCopyFlags;
- (void)setInvertsShape:(char)arg0;
- (void)setSharpness:(float)arg0;
- (void)didChangeValueForKey:(NSString *)arg0;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (void)setOffset:(float)arg0;
- (float)offset;
- (struct CGColor *)foregroundColor;
- (void)setForegroundColor:(struct CGColor *)arg0;
- (void)setRenderMode:(NSString *)arg0;
- (NSString *)renderMode;

@end
