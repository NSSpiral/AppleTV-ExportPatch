/* Runtime dump - CAMSlalomIndicatorView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMSlalomIndicatorView : UIView
{
    int _framesPerSecond;
    UILabel * __framerateLabel;
}

@property (nonatomic) int framesPerSecond;
@property (readonly, nonatomic) UILabel * _framerateLabel;

- (CAMSlalomIndicatorView *)initWithFrame:(struct CGRect)arg0;
- (CAMSlalomIndicatorView *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void).cxx_destruct;
- (int)framesPerSecond;
- (void)setFramesPerSecond:(int)arg0;
- (void)_commonCAMSlalomIndicatorViewInitialization;
- (void)_updateFramerateLabel;
- (UILabel *)_framerateLabel;

@end
