/* Runtime dump - MPMutableArtworkColorAnalysis
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) UIColor * backgroundColor;
@property (nonatomic) char backgroundColorLight;
@property (retain, nonatomic) UIColor * primaryTextColor;
@property (nonatomic) char primaryTextColorLight;
@property (retain, nonatomic) UIColor * secondaryTextColor;
@property (nonatomic) char secondaryTextColorLight;

- (void)setBackgroundColorLight:(char)arg0;
- (void)setPrimaryTextColor:(UIColor *)arg0;
- (void)setPrimaryTextColorLight:(char)arg0;
- (void)setSecondaryTextColor:(UIColor *)arg0;
- (void)setSecondaryTextColorLight:(char)arg0;
- (void)setBackgroundColor:(UIColor *)arg0;
- (MPMutableArtworkColorAnalysis *)copyWithZone:(struct _NSZone *)arg0;

@end
