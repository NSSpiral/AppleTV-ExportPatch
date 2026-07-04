/* Runtime dump - UIAlertControllerVisualStyleActionSheet
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
{
    UIAlertControllerDescriptor * _descriptor;
}

@property (retain, nonatomic) UIAlertControllerDescriptor * descriptor;

- (void)dealloc;
- (float)maximumWidth;
- (void)setDescriptor:(UIAlertControllerDescriptor *)arg0;
- (float)verticalContentMargin;
- (UIFont *)titleLabelFont;
- (UIColor *)titleLabelColor;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (UIFont *)messageLabelFont;
- (UIColor *)messageLabelColor;
- (float)horizontalContentMargin;
- (float)visualAltitude;
- (UIFont *)regularActionFont;
- (UIFont *)defaultActionFont;
- (id)defaultActionBackgroundColorWhenSeparate;
- (float)minimumActionHeight;
- (float)sectionDelimitingSeparatorDimension;
- (float)marginBelowTitleLabelLastBaseline;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)backgroundCornerRadius;
- (UIAlertControllerDescriptor *)descriptor;
- (float)_systemFontSize;

@end
