/* Runtime dump - CAEmitterLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEmitterLayer : CALayer

@property struct CGPath * emitterPath;
@property float emitterDuration;
@property float spinBias;
@property (copy) NSArray * emitterBehaviors;
@property struct CGRect cullRect;
@property float cullMinZ;
@property float cullMaxZ;
@property (copy) NSArray * emitterCells;
@property float birthRate;
@property float lifetime;
@property struct CGPoint emitterPosition;
@property float emitterZPosition;
@property struct CGSize emitterSize;
@property float emitterDepth;
@property (copy) NSString * emitterShape;
@property (copy) NSString * emitterMode;
@property (copy) NSString * renderMode;
@property char preservesDepth;
@property float velocity;
@property float scale;
@property float spin;
@property unsigned int seed;

+ (CAEmitterLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (float)spin;
- (NSArray *)emitterCells;
- (NSArray *)emitterBehaviors;
- (void)setLifetime:(float)arg0;
- (void)setSpin:(float)arg0;
- (void)setEmitterCells:(NSArray *)arg0;
- (void)setEmitterBehaviors:(NSArray *)arg0;
- (float)emitterDuration;
- (struct CGPoint)emitterPosition;
- (float)emitterZPosition;
- (struct CGSize)emitterSize;
- (float)emitterDepth;
- (float)spinBias;
- (struct CGRect)cullRect;
- (float)cullMinZ;
- (float)cullMaxZ;
- (struct CGPath *)emitterPath;
- (NSString *)emitterMode;
- (char)preservesDepth;
- (void)setEmitterMode:(NSString *)arg0;
- (void)setEmitterPosition:(struct CGPoint)arg0;
- (void)setEmitterZPosition:(float)arg0;
- (void)setEmitterSize:(struct CGSize)arg0;
- (void)setEmitterDepth:(float)arg0;
- (void)setPreservesDepth:(char)arg0;
- (void)setEmitterPath:(struct CGPath *)arg0;
- (void)setEmitterDuration:(float)arg0;
- (void)setSpinBias:(float)arg0;
- (void)setCullRect:(struct CGRect)arg0;
- (void)setCullMinZ:(float)arg0;
- (void)setCullMaxZ:(float)arg0;
- (void)setEmitterShape:(NSString *)arg0;
- (float)birthRate;
- (void)setBirthRate:(float)arg0;
- (NSString *)emitterShape;
- (void)setSeed:(unsigned int)arg0;
- (void)setVelocity:(float)arg0;
- (float)scale;
- (void)didChangeValueForKey:(NSString *)arg0;
- (NSString *)implicitAnimationForKeyPath:(NSString *)arg0;
- (void)setScale:(float)arg0;
- (float)velocity;
- (unsigned int)seed;
- (float)lifetime;
- (void)setRenderMode:(NSString *)arg0;
- (NSString *)renderMode;
- (void)reloadValueForKeyPath:(NSString *)arg0;

@end
