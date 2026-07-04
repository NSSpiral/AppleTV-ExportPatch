/* Runtime dump - BRTiledLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRTiledLayer : CALayer
{
    struct CGSize _tileSize;
}

+ (BRTiledLayer *)defaultActionForKey:(NSString *)arg0;

- (BRTiledLayer *)init;
- (void)display;
- (void)setTileSize:(struct CGSize)arg0;
- (struct CGSize)tileSize;

@end
