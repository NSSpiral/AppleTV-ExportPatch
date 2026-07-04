/* Runtime dump - MPReflectionImageView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPReflectionImageView : _UIReflectingView
{
    UIImageView * _imageView;
    char _squareImage;
}

@property (retain, nonatomic) UIImage * image;
@property (nonatomic) char squareImage;
@property (readonly, nonatomic) UIImageView * imageView;

+ (float)defaultReflectionHeight;

- (void)setSquareImage:(char)arg0;
- (void)setReflectionVisible:(char)arg0 withDuration:(float)arg1;
- (void)setFrame:(struct CGRect)arg0 withReflectionHeight:(struct CGSize)arg1;
- (UIImage *)albumArtImage;
- (void)setAlbumVisible:(char)arg0 reflectionVisible:(char)arg1;
- (char)squareImage;
- (MPReflectionImageView *)initWithFrame:(struct CGRect)arg0;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (UIImageView *)imageView;
- (void).cxx_destruct;

@end
