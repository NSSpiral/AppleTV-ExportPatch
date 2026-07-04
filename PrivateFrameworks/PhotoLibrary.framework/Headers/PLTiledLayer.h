/* Runtime dump - PLTiledLayer
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTiledLayer : CALayer
{
    NSData * _jpegData;
    struct jpegDecoder * _decoders;
    int _decoderCount;
    int _tilePixelSize;
    struct CGSize _fullSize;
    long _err;
    PLCache * _tileCache;
    struct iosPoolOpaque * _surfacePool;
    NSMutableSet * _visibleTileIds;
    NSMutableDictionary * _subLayers;
    NSObject<OS_dispatch_queue> * _decodeQueue;
    NSObject<OS_dispatch_queue> * _filterQueue;
    unsigned int _requestId;
    int _zoomLevel;
    CALayer * _placeholderLayer;
    struct CGImage * _placeholderImage;
    float _zoomStartScale;
    int _lock;
    <PLTileProcessor> * _tileProcessor;
    unsigned long _currentProcessingID;
    unsigned long _nextProcessingID;
    struct CGRect _lastVisibleRect;
    float _lastZoomScale;
    char _showTileBorders;
}

@property (weak, nonatomic) <PLTileProcessor> * tileProcessor;
@property (readonly, nonatomic) struct CGSize jpegImageSize;

- (void)dealloc;
- (void)removeAllTiles;
- (float)zoomStartScaleForImage:(struct CGSize)arg0 placeholderImageSize:(struct CGSize)arg1;
- (void)prepareForDecoding;
- (<PLTileProcessor> *)tileProcessor;
- (void)setVisibleRectangle:(struct CGRect)arg0 zoomScale:(struct CGSize)arg1;
- (void)updateSubLayers:(id)arg0;
- (char)visibleTileRegionHasChanged:(struct CGRect)arg0 level:(struct CGSize)arg1;
- (void)decodeImageRectangle:(struct CGRect)arg0 forLevel:(struct CGSize)arg1 requestId:(unsigned int)arg2 completionHandler:(int)arg3;
- (void)setVisibleRectangle:(struct CGRect)arg0 zoomScale:(struct CGSize)arg1 completionHandler:(id /* block */)arg2;
- (void)setTileProcessor:(<PLTileProcessor> *)arg0;
- (PLTiledLayer *)initWithJPEGData:(NSData *)arg0 placeholderImage:(struct CGImage *)arg1;
- (void)setTileProcessingEnabled:(char)arg0 withProcessingID:(unsigned long)arg1 placeholderImage:(struct CGImage *)arg2;
- (struct CGSize)jpegImageSize;
- (void)flushCache;

@end
