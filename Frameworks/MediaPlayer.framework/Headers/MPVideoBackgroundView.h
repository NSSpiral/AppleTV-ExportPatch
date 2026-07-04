/* Runtime dump - MPVideoBackgroundView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoBackgroundView : UIView
{
    int _interfaceOrientation;
    UIView * _imageView;
    UIImageView * _iconView;
    UIImageView * _backgroundPlaceholderImageView;
    UIView * _backgroundPlaceholderPosterImageView;
    UIView * _backgroundPlaceholderView;
    UIImageView * _customBackgroundImageView;
    NSString * _destinationName;
    int _destinationPlaceholderStyle;
    char _showDestinationPlaceholder;
    id _layoutSubviewsPostflightHandler;
}

@property (nonatomic) int interfaceOrientation;
@property (retain, nonatomic) UIImage * backgroundPlaceholderImage;
@property (readonly, nonatomic) UIView * backgroundPlaceholderView;
@property (retain, nonatomic) UIView * backgroundPlaceholderPosterImageView;
@property (nonatomic) int destinationPlaceholderStyle;
@property (copy, nonatomic) NSString * destinationName;
@property (copy, nonatomic) id layoutSubviewsPostflightHandler;

- (UIView *)backgroundPlaceholderView;
- (void)setBackgroundPlaceholderImage:(UIImage *)arg0;
- (UIImage *)backgroundPlaceholderImage;
- (void)setBackgroundPlaceholderPosterImageView:(UIView *)arg0;
- (void)setShowDestinationPlaceholder:(char)arg0 animated:(char)arg1;
- (void)setDestinationPlaceholderStyle:(int)arg0;
- (void)setLayoutSubviewsPostflightHandler:(id /* block */)arg0;
- (UIView *)backgroundPlaceholderPosterImageView;
- (void)setCustomBackgroundImage:(UIImage *)arg0;
- (void)setShowQTAudioOnlyUI:(char)arg0;
- (void)_tvOutCapabilityDidChangeNotification:(NSNotification *)arg0;
- (void)_updateDestinationBackgroundViewAnimated:(char)arg0;
- (UIImage *)qtIcon;
- (void)_createInformationalTitleView:(id *)arg0 systemFont:(UIFont *)arg1 lineBreakMode:(int)arg2;
- (int)destinationPlaceholderStyle;
- (id /* block */)layoutSubviewsPostflightHandler;
- (MPVideoBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (int)interfaceOrientation;
- (void)setInterfaceOrientation:(int)arg0;
- (void).cxx_destruct;
- (NSString *)destinationName;
- (void)setDestinationName:(NSString *)arg0;

@end
