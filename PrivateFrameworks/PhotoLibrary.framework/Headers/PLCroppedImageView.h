/* Runtime dump - PLCroppedImageView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCroppedImageView : UIView
{
    UIImageView * _imageView;
    struct CGRect _cropRect;
}

@property (retain, nonatomic) UIImage * image;
@property (nonatomic) struct CGRect cropRect;

- (PLCroppedImageView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (UIImage *)image;
- (void)setCropRect:(struct CGRect)arg0;
- (struct CGRect)cropRect;

@end
