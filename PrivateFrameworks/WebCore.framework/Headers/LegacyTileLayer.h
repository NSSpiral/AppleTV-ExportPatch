/* Runtime dump - LegacyTileLayer
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface LegacyTileLayer : CALayer
{
    struct LegacyTileGrid * _tileGrid;
    unsigned int _paintCount;
}

@property (nonatomic) unsigned int paintCount;
@property (nonatomic) struct LegacyTileGrid * tileGrid;

+ (LegacyTileLayer *)layerBeingPainted;

- (NSString *)actionForKey:(NSString *)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg0;
- (unsigned int)paintCount;
- (void)setPaintCount:(unsigned int)arg0;
- (struct LegacyTileGrid *)tileGrid;
- (void)setTileGrid:(struct LegacyTileGrid *)arg0;

@end
