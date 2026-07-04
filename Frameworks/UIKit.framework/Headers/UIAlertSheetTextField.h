/* Runtime dump - UIAlertSheetTextField
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertSheetTextField : UITextField
{
    UIThreePartImageView * _sheetBackgroundView;
}

- (void)dealloc;
- (void)setBackgroundView:(UIView *)arg0;
- (UIImageView *)backgroundView;
- (struct CGRect)editingRectForBounds:(id)arg0;
- (struct CGRect)textRectForBounds:(id)arg0;
- (struct CGRect)clearButtonRectForBounds:(id)arg0;

@end
