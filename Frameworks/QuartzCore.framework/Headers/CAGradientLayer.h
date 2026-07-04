/* Runtime dump - CAGradientLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAGradientLayer : CALayer

@property (retain) id colorMap;
@property (copy) NSArray * colors;
@property (copy) NSArray * locations;
@property struct CGPoint startPoint;
@property struct CGPoint endPoint;
@property (copy) NSString * type;

+ (CAGradientLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (void)_renderBackgroundInContext:(struct CGContext *)arg0;
- (void)setColors:(NSArray *)arg0;
- (void)setLocations:(NSArray *)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)didChangeValueForKey:(NSString *)arg0;
- (NSString *)implicitAnimationForKeyPath:(NSString *)arg0;
- (struct CGPoint)startPoint;
- (void)setStartPoint:(struct CGPoint)arg0;
- (void)setEndPoint:(struct CGPoint)arg0;
- (NSArray *)colors;
- (NSArray *)locations;
- (struct CGPoint)endPoint;
- (OADColorMap *)colorMap;
- (void)setColorMap:(OADColorMap *)arg0;

@end
