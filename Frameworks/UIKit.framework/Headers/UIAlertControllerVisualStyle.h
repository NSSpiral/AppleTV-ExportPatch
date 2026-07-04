/* Runtime dump - UIAlertControllerVisualStyle
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyle : NSObject
{
    UIAlertControllerDescriptor * _descriptor;
    UITraitCollection * _traitCollection;
}

@property (retain, nonatomic) UIAlertControllerDescriptor * descriptor;
@property (retain, nonatomic) UITraitCollection * traitCollection;

- (UITraitCollection *)traitCollection;
- (void)setTraitCollection:(UITraitCollection *)arg0;
- (float)maximumWidth;
- (UIImageView *)backgroundView;
- (UIDimmingView *)dimmingView;
- (void)setDescriptor:(UIAlertControllerDescriptor *)arg0;
- (float)verticalContentMargin;
- (UIFont *)titleLabelFont;
- (UIColor *)titleLabelColor;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (int)maximumNumberOfLinesInTitleLabel;
- (UIFont *)messageLabelFont;
- (UIColor *)messageLabelColor;
- (int)maximumNumberOfLinesInMessageLabel;
- (float)horizontalContentMargin;
- (float)visualAltitude;
- (UIFont *)regularActionFont;
- (UIFont *)defaultActionFont;
- (NSObject *)actionHighlightedBackgroundView;
- (UIColor *)highlightedActionContentColor;
- (id)defaultActionBackgroundColorWhenSeparate;
- (float)minimumActionHeight;
- (UIColor *)disabledActionContentColor;
- (char)focusedActionAnimatesOnPresentationAndDismissal;
- (struct CGAffineTransform)presentationAnimationStartTransform;
- (float)sectionDelimitingSeparatorDimension;
- (char)hideActionSeparators;
- (float)marginBelowTitleLabelLastBaseline;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (UIFont *)_detailMessageFont;
- (float)actionWidthForMinimumActionWidth:(float)arg0;
- (float)backgroundCornerRadius;
- (struct CGSize)collectionViewOutsetSize;
- (float)_scaledMarginAboveTitleLabelFirstBaseline;
- (float)_scaledMarginBelowTitleLabelLastBaseline;
- (float)_scaledMarginAboveMessageLabelFirstBaseline;
- (float)_scaledMarginBelowMessageLabelLastBaseline;
- (float)_scaledMarginBelowLastLabelLastBaseline;
- (UIAlertControllerDescriptor *)descriptor;

@end
