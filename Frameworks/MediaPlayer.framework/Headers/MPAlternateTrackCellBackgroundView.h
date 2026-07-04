/* Runtime dump - MPAlternateTrackCellBackgroundView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTrackCellBackgroundView : UIView
{
    int _sectionLocation;
    UIBezierPath * _fillPath;
    UIBezierPath * _strokePath;
}

@property (nonatomic) int sectionLocation;

- (void)_createBezierPathWithCornerRadius:(float)arg0 bottomRadius:(float)arg1 animating:(char)arg2;
- (MPAlternateTrackCellBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setSectionLocation:(int)arg0 animated:(char)arg1;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg0;
- (void)_invalidatePaths;
- (void).cxx_destruct;

@end
