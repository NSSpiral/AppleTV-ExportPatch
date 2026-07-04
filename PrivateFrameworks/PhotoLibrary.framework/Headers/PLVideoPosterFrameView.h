/* Runtime dump - PLVideoPosterFrameView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLVideoPosterFrameView : UIView
{
    UIImageView * _imageView;
    unsigned int _scaleMode;
}

@property (readonly, nonatomic) struct CGRect imageFrame;

- (void)setScaleMode:(unsigned int)arg0;
- (PLVideoPosterFrameView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (UIImage *)image;
- (UIImageView *)imageView;
- (struct CGRect)imageFrame;

@end
