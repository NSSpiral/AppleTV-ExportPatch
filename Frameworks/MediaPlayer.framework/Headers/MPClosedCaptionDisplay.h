/* Runtime dump - MPClosedCaptionDisplay
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPClosedCaptionDisplay : UIView
{
    UILabel * _label;
    UIView * _backgroundView;
    char _hidden;
    char _rotating;
}

- (void)startLayoutChange:(char)arg0;
- (void)endLayoutChange;
- (void)_updatePositioning:(char)arg0;
- (void)_hidePanel;
- (MPClosedCaptionDisplay *)initWithFrame:(struct CGRect)arg0;
- (void)setNeedsLayout;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;

@end
