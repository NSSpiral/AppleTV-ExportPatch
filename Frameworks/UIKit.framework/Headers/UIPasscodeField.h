/* Runtime dump - UIPasscodeField
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasscodeField : UIView <UITextFieldDelegate>
{
    NSMutableString * _value;
    NSMutableArray * _entryFields;
    NSMutableArray * _entryBackgrounds;
    UIButton * _okButton;
    char _opaqueBackground;
    char _centerHorizontally;
    int _keyboardType;
    int _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)defaultHeight;
+ (Class)textFieldClass;

- (UIPasscodeField *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (char)becomeFirstResponder;
- (void)appendString:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (NSObject *)hitTest:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setKeyboardType:(int)arg0;
- (void)setKeyboardType:(int)arg0 appearance:(int)arg1;
- (void)setKeyboardType:(int)arg0 appearance:(int)arg1 emptyContentReturnKeyType:(int)arg2;
- (void)okButtonClicked:(id)arg0;
- (void)setNumberOfEntryFields:(int)arg0 opaqueBackground:(char)arg1;
- (void)_updateFields;
- (void)setTextCentersHorizontally:(char)arg0;
- (void)_textDidChange;
- (char)showsOKButton;
- (void)setShowsOKButton:(char)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void)deleteLastCharacter;
- (int)numberOfEntryFields;
- (void)setNumberOfEntryFields:(int)arg0;
- (char)textField:(UITextField *)arg0 shouldInsertText:(NSString *)arg1 replacingRange:(struct _NSRange)arg2;
- (char)textFieldShouldStartEditing:(id)arg0;
- (void)textFieldDidResignFirstResponder:(NSObject *)arg0;

@end
