/* Runtime dump - CTDPSDPreviewRef
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CTDPSDPreviewRef : CUIPSDImageRef
{
    struct _PSDImageInfo _imageInfo;
    int _layerCount;
    int _sliceCount;
    int _columnWidth;
    int _rowHeight;
    NSArray * _layerIndexLayout;
    int _sliceRowCount;
    int _sliceColumnCount;
    NSArray * _sliceRects;
}

- (void)dealloc;
- (CTDPSDPreviewRef *)initWithPath:(NSString *)arg0;
- (int)sliceRowCount;
- (int)sliceColumnCount;
- (void)evaluateSliceGrid;
- (char)hasRegularSliceGrid;
- (char)hasGradient;
- (int)numberOfGradientLayers;
- (int)numberOfAlphaChannels;
- (int)indexOfDrawingLayerType:(int)arg0;

@end
