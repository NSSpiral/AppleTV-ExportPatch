/* Runtime dump - CAMEffectsFullsizeView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectsFullsizeView : CAMGLView
{
    CIFilter * _selectedFilter;
    unsigned int _selectedFilterIndex;
    unsigned int _filterIndex;
}

@property unsigned int filterIndex;

- (CAMEffectsFullsizeView *)initWithFrame:(struct CGRect)arg0;
- (void).cxx_destruct;
- (unsigned int)filterIndex;
- (void)setFilterIndex:(unsigned int)arg0;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg0 ciContext:(CIContext *)arg1 mirrorRendering:(char)arg2;
- (void)_layoutGLLayer;
- (void)setFixedSize:(struct CGSize)arg0;
- (void)_renderWithInputImage:(UIImage *)arg0 ciContext:(CIContext *)arg1 mirrorRendering:(char)arg2;
- (NSObject *)_updateSelectedFilter;

@end
