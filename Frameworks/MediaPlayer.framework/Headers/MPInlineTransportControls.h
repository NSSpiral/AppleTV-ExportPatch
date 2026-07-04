/* Runtime dump - MPInlineTransportControls
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineTransportControls : MPTransportControls
{
    UILabel * _loadingMovieLabel;
    UIActivityIndicatorView * _loadingMovieIndicator;
}

@property (readonly, nonatomic) struct CGRect availableProgressControlAreaFrame;

- (void)setDisabledParts:(unsigned long long)arg0;
- (NSString *)pauseButtonImage;
- (NSString *)playButtonImage;
- (id)buttonImageForPart:(unsigned long long)arg0;
- (void)reloadForAdditions:(id)arg0 removals:(id)arg1 animate:(char)arg2;
- (id)newButtonForPart:(unsigned long long)arg0;
- (void)_disableAnimationIfNecessary:(id)arg0;
- (void)_enableAnimationIfNecessary:(id)arg0;
- (struct CGRect)availableProgressControlAreaFrame;
- (MPInlineTransportControls *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
