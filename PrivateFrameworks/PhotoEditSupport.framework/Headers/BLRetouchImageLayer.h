/* Runtime dump - BLRetouchImageLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchImageLayer : BLRetouchLayer
{
    BLPixelImageBuffer * _imageBuffer;
    UIImage * _image;
    float _imageScaleFactor;
}

@property (retain, nonatomic) BLPixelImageBuffer * imageBuffer;
@property (retain, nonatomic) UIImage * image;
@property (nonatomic) float imageScaleFactor;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (struct CGSize)imageSize;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (BLPixelImageBuffer *)imageBuffer;
- (void)setImageBuffer:(BLPixelImageBuffer *)arg0;
- (float)imageScaleFactor;
- (void)setImageScaleFactor:(float)arg0;

@end
