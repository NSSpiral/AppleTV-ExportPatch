/* Runtime dump - CATiledLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATiledLayer : CALayer

@property struct CGColor * fillColor;
@property float maximumTileScale;
@property char drawingEnabled;
@property unsigned long levelsOfDetail;
@property unsigned long levelsOfDetailBias;
@property struct CGSize tileSize;

+ (CATiledLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)shouldDrawOnMainThread;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;

- (char)shouldArchiveValueForKey:(NSString *)arg0;
- (char)_canDisplayConcurrently;
- (char)isDrawingEnabled;
- (unsigned long)levelsOfDetailBias;
- (float)maximumTileScale;
- (void)setLevelsOfDetailBias:(unsigned long)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0 levelOfDetail:(struct CGSize)arg1;
- (char)canDrawRect:(struct CGRect)arg0 levelOfDetail:(struct CGSize)arg1;
- (void)displayInRect:(struct CGRect)arg0 levelOfDetail:(struct CGSize)arg1 options:(NSDictionary *)arg2;
- (void)setMaximumTileScale:(float)arg0;
- (unsigned long)levelsOfDetail;
- (void)setLevelsOfDetail:(unsigned long)arg0;
- (void)dealloc;
- (void)didChangeValueForKey:(NSString *)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (void)setContents:(UIKBKeyDisplayContents *)arg0;
- (void)invalidateContents;
- (void)setTileSize:(struct CGSize)arg0;
- (void)_dealloc;
- (void)setFillColor:(struct CGColor *)arg0;
- (struct CGColor *)fillColor;
- (void)_display;
- (void)setDrawingEnabled:(char)arg0;
- (struct CGSize)tileSize;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0 levelOfDetail:(struct CGSize)arg1 options:(NSDictionary *)arg2;

@end
