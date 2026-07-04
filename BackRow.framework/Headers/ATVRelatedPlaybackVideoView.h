/* Runtime dump - ATVRelatedPlaybackVideoView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRHorizontalDividerControl;
@interface ATVRelatedPlaybackVideoView : BRControl
{
    BRControl * _imageView;
    BRControl * _titleView;
    BRControl * _summaryView;
    BRControl * _statusTextView;
    BRHorizontalDividerControl * _dividerView;
}

@property (retain, nonatomic) BRControl * imageView;
@property (retain, nonatomic) BRControl * titleView;
@property (retain, nonatomic) BRControl * summaryView;
@property (retain, nonatomic) BRControl * statusTextView;
@property (retain, nonatomic) BRHorizontalDividerControl * dividerView;

- (void)layoutSubcontrols;
- (struct CGRect)focusCursorFrame;
- (char)accessibilityOutputsRange;
- (BRControl *)statusTextView;
- (BRControl *)summaryView;
- (BRHorizontalDividerControl *)dividerView;
- (void)setSummaryView:(BRControl *)arg0;
- (void)setStatusTextView:(BRControl *)arg0;
- (void)setDividerView:(BRHorizontalDividerControl *)arg0;
- (ATVRelatedPlaybackVideoView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRControl *)titleView;
- (void)setTitleView:(BRControl *)arg0;
- (BRControl *)imageView;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setImageView:(BRControl *)arg0;

@end
