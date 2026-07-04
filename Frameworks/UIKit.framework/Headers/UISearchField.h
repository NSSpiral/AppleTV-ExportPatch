/* Runtime dump - UISearchField
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchField : UITextField

+ (float)defaultHeight;

- (UISearchField *)initWithFrame:(struct CGRect)arg0;
- (NSDictionary *)_scriptingInfo;
- (struct CGRect)iconRect;
- (struct CGRect)rightViewRectForBounds:(id)arg0;
- (UIColor *)_placeholderColor;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(id)arg0;
- (void)setPaddingTop:(float)arg0 paddingLeft:(float)arg1;
- (char)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;

@end
