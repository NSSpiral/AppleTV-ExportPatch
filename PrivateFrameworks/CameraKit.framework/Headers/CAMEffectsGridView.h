/* Runtime dump - CAMEffectsGridView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectsGridView : CAMGLView
{
    struct OpaqueVTPixelTransferSession * _pixelTransferSession;
    struct __CVPixelBufferPool * _pixelBufferPool;
    struct CGSize _pixelBufferPoolSize;
    char _square;
    char __fetchingGridFilters;
    char __atomicBlackAndWhite;
    NSDictionary * __gridFilters;
}

@property char square;
@property char blackAndWhite;
@property (retain) NSDictionary * _gridFilters;
@property char _fetchingGridFilters;
@property char _atomicBlackAndWhite;

- (void)dealloc;
- (void).cxx_destruct;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg0 ciContext:(CIContext *)arg1 mirrorRendering:(char)arg2;
- (void)setBlackAndWhite:(char)arg0;
- (struct CGRect)rectForFilterIndex:(NSObject *)arg0;
- (NSArray *)filterIndices;
- (char)_isAtomicBlackAndWhite;
- (void)_setAtomicBlackAndWhite:(char)arg0;
- (void)_setGridFilters:(id)arg0;
- (void)_setupGridFiltersIfNecessary;
- (NSDictionary *)_gridFilters;
- (unsigned int)_cellsPerRow;
- (struct __CVBuffer *)_createPixelBufferForSize:(struct CGSize)arg0;
- (void)_scalePixelBuffer:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1;
- (void)_renderGridFilters:(id)arg0 withInputImage:(UIImage *)arg1 ciContext:(CIContext *)arg2 mirrorRendering:(char)arg3;
- (unsigned int)_cellCount;
- (unsigned int)_filterIndexForGridIndex:(unsigned int)arg0;
- (char)isSquare;
- (struct CGRect)_squareCropFromRect:(NSObject *)arg0;
- (void)_updatePixelBufferPoolForSize:(struct CGSize)arg0;
- (char)_fetchingGridFilters;
- (void)_setFetchingGridFilters:(char)arg0;
- (char)isBlackAndWhite;
- (unsigned int)_gridIndexForFilterIndex:(unsigned int)arg0;
- (unsigned int)filterIndexForPoint:(struct CGPoint)arg0;
- (void)setSquare:(char)arg0;

@end
