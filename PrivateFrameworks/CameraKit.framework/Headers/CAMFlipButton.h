/* Runtime dump - CAMFlipButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFlipButton : UIButton
{
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;

+ (CAMFlipButton *)flipButton;

- (CAMFlipButton *)initWithFrame:(struct CGRect)arg0;
- (CAMFlipButton *)initWithCoder:(NSCoder *)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets)arg0;
- (UIImage *)_flipImage;
- (void)_commonCAMFlipButtonInitialization;
- (struct UIEdgeInsets)tappableEdgeInsets;

@end
