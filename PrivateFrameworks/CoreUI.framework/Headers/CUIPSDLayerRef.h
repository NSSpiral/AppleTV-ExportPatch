/* Runtime dump - CUIPSDLayerRef
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef

- (void)dealloc;
- (UIImage *)image;
- (UIKeyboardDicationBackgroundGradientView *)gradient;
- (CUIPSDLayerRef *)initWithImageRef:(struct CGImage *)arg0 layerIndex:(unsigned int)arg1;
- (struct CGImage *)createCGImage;
- (UIImage *)imageIsZeroSizeImage:(char *)arg0;
- (id)imageFromSlice:(unsigned int)arg0;
- (id)imageFromSlice:(unsigned int)arg0 isEmptyImage:(char *)arg1;
- (id)patternFromSlice:(unsigned int)arg0;
- (id)patternFromSlice:(unsigned int)arg0 isZeroSizeImage:(char *)arg1;
- (id)maskFromSlice:(unsigned int)arg0;
- (NSObject *)fillSample;
- (id)layerEffects;
- (id)colorFill;

@end
