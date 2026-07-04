/* Runtime dump - VKRasterOverlay
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlay : NSObject
{
    <VKRasterOverlayDelegate> * _delegate;
    struct ? _replaceMapContentInRect;
    unsigned int _level;
    VKRasterOverlayTileSource * _mapModel;
    VKRasterOverlayTileSource * _tileSource;
}

@property <VKRasterOverlayDelegate> * delegate;
@property (nonatomic) VKRasterOverlayTileSource * tileSource;
@property (nonatomic) struct ? replaceMapContentInRect;
@property (nonatomic) unsigned int level;

- (void)setNeedsDisplay;
- (void)setDelegate:(<VKRasterOverlayDelegate> *)arg0;
- (VKRasterOverlay *)init;
- (<VKRasterOverlayDelegate> *)delegate;
- (void)setLevel:(unsigned int)arg0;
- (unsigned int)level;
- (void).cxx_construct;
- (struct ?)replaceMapContentInRect;
- (void)setTileSource:(VKRasterOverlayTileSource *)arg0;
- (VKRasterOverlayTileSource *)tileSource;
- (char)canDrawKey:(struct ? *)arg0;
- (void)drawKey:(struct ? *)arg0 inContext:(struct ?)arg1;
- (void)setNeedsDisplayInRect:(struct ? *)arg0 level:(struct ?)arg1;
- (void)setReplaceMapContentInRect:(struct ?)arg0;

@end
