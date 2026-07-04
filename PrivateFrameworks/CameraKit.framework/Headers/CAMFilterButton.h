/* Runtime dump - CAMFilterButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFilterButton : UIButton
{
    UIImageView * __circlesImageView;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) char on;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (readonly, nonatomic) UIImageView * _circlesImageView;

+ (CAMFilterButton *)filterButton;

- (CAMFilterButton *)initWithFrame:(struct CGRect)arg0;
- (CAMFilterButton *)initWithCoder:(NSCoder *)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)setOn:(char)arg0;
- (char)isOn;
- (float)_selectedIndicatorAlpha;
- (void).cxx_destruct;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)tappableEdgeInsets;
- (UIImage *)_filterImage;
- (UIImage *)_filterOnImage;
- (void)_commonCAMFilterButtonInitialization;
- (UIImageView *)_circlesImageView;

@end
