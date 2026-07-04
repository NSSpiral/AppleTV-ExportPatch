/* Runtime dump - PSEditableTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate>
{
    UIColor * _textColor;
    id _delegate;
    char _forceFirstResponder;
    char _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    char _valueChanged;
    char _returnKeyTapped;
    PSListController * _controllerDelegate;
}

@property (readonly, nonatomic) char returnKeyTapped;
@property (nonatomic) PSListController * controllerDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)cellStyle;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (char)isEditing;
- (void)prepareForReuse;
- (void)textFieldDidBeginEditing:(UITextField *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (char)textFieldShouldClear:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (char)canResignFirstResponder;
- (UITextField *)textField;
- (PSListController *)controllerDelegate;
- (void)setControllerDelegate:(PSListController *)arg0;
- (void)setPlaceholderText:(NSAttributedString *)arg0;
- (char)canReload;
- (PSEditableTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (void)cellRemovedFromView;
- (void)setCellEnabled:(char)arg0;
- (void)setValueChangedTarget:(NSObject *)arg0 action:(SEL)arg1 specifier:(PSSpecifier *)arg2;
- (void)controlChanged:(NSNotification *)arg0;
- (char)isTextFieldEditing;
- (void)_setValueChanged;
- (void)_saveForExit;
- (void)endEditingAndSave;
- (UIColor *)_defaultTextColor;
- (char)_cellIsEditing;
- (char)returnKeyTapped;

@end
