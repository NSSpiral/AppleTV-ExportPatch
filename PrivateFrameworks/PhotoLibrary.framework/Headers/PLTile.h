/* Runtime dump - PLTile
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTile : NSObject
{
    struct __IOSurface * _decodedSurface;
    struct CGRect _imageRect;
    id _tileId;
    char _visible;
}

- (void)dealloc;
- (void)setVisible:(char)arg0;
- (char)visible;
- (void)setImageRect:(struct CGRect)arg0;
- (void)setDecodedSurface:(struct __IOSurface *)arg0;
- (struct __IOSurface *)decodedSurface;
- (void)setTileId:(NSObject *)arg0;
- (NSObject *)tileId;
- (struct CGRect)imageRect;

@end
