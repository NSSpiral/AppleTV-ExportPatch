/* Runtime dump - MPVideoDestinationBackgroundView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoDestinationBackgroundView : UIView
{
    NSString * _destinationName;
    UILabel * _destinationSubtitleLabel;
    UILabel * _destinationTitleLabel;
    int _style;
    UIImageView * _videosImageView;
}

@property (copy, nonatomic) NSString * destinationName;
@property (nonatomic) int style;

- (MPVideoDestinationBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (int)style;
- (void)setStyle:(int)arg0;
- (void).cxx_destruct;
- (NSString *)destinationName;
- (void)setDestinationName:(NSString *)arg0;

@end
