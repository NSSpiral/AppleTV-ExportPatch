/* Runtime dump - LegacyTileHostLayer
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface LegacyTileHostLayer : CALayer
{
    struct LegacyTileGrid * _tileGrid;
}

- (NSString *)actionForKey:(NSString *)arg0;
- (void)renderInContext:(struct CGContext *)arg0;
- (LegacyTileHostLayer *)initWithTileGrid:(struct LegacyTileGrid *)arg0;

@end
