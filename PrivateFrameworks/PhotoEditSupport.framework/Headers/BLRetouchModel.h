/* Runtime dump - BLRetouchModel
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchModel : NSObject
{
    NSDictionary * _strokesDataDictionary;
    BLRetouchLayerStack * _layerStack;
    NSLock * _lock;
}

- (void)dealloc;
- (BLRetouchModel *)initWithAdjustmentsDictionary:(NSDictionary *)arg0;
- (void)setLayerStack:(BLRetouchLayerStack *)arg0;
- (char)hasRetouch;
- (char)hasLayerStack;
- (BLRetouchLayerStack *)layerStack;
- (char)needsPadding;
- (float)paddingForSize:(struct CGSize)arg0;
- (void)buildLayerStackWithMaskSourceImage:(UIImage *)arg0;
- (NSObject *)imageForWorkingImageBuffer:(NSObject *)arg0 workingTransform:(struct CGAffineTransform)arg1 inDestRect:(struct CGRect)arg2 withPadding:(struct CGSize)arg3;
- (UIImage *)imageForWorkingImage:(UIImage *)arg0 workingTransform:(struct CGAffineTransform)arg1 inDestRect:(struct CGRect)arg2 withPadding:(struct CGSize)arg3;

@end
