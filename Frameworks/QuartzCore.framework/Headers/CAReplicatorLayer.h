/* Runtime dump - CAReplicatorLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAReplicatorLayer : CALayer

@property int instanceCount;
@property char preservesDepth;
@property double instanceDelay;
@property struct CATransform3D instanceTransform;
@property struct CGColor * instanceColor;
@property float instanceRedOffset;
@property float instanceGreenOffset;
@property float instanceBlueOffset;
@property float instanceAlphaOffset;

+ (CAReplicatorLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (char)preservesDepth;
- (void)setPreservesDepth:(char)arg0;
- (void)_renderSublayersInContext:(struct CGContext *)arg0;
- (double)instanceDelay;
- (struct CGColor *)instanceColor;
- (float)instanceRedOffset;
- (float)instanceGreenOffset;
- (float)instanceBlueOffset;
- (float)instanceAlphaOffset;
- (void)setInstanceDelay:(double)arg0;
- (void)setInstanceRedOffset:(float)arg0;
- (void)setInstanceGreenOffset:(float)arg0;
- (void)setInstanceBlueOffset:(float)arg0;
- (CAReplicatorLayer *)init;
- (void)didChangeValueForKey:(NSString *)arg0;
- (NSString *)implicitAnimationForKeyPath:(NSString *)arg0;
- (void)setInstanceCount:(int)arg0;
- (void)setInstanceTransform:(struct CATransform3D)arg0;
- (void)setInstanceAlphaOffset:(float)arg0;
- (void)setInstanceColor:(struct CGColor *)arg0;
- (struct CATransform3D)instanceTransform;
- (int)instanceCount;

@end
