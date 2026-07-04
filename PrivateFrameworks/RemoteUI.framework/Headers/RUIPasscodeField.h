/* Runtime dump - RUIPasscodeField
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPasscodeField : UIView <UIKeyInput>
{
    NSMutableArray * _dashViews;
    NSMutableArray * _dotViews;
    NSMutableArray * _digitViews;
    NSMutableString * _stringValue;
    char _securePasscodeEntry;
    <RUIPasscodeFieldDelegate> * _delegate;
    unsigned int _numberOfEntryFields;
    UIColor * _foregroundColor;
    int _keyboardAppearance;
}

@property (weak, nonatomic) <RUIPasscodeFieldDelegate> * delegate;
@property (readonly, nonatomic) unsigned int numberOfEntryFields;
@property (nonatomic) char securePasscodeEntry;
@property (retain, nonatomic) UIColor * foregroundColor;
@property (nonatomic) int keyboardAppearance;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) int spellCheckingType;
@property (nonatomic) int keyboardType;
@property (nonatomic) int returnKeyType;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char secureTextEntry;

- (void)setDelegate:(<RUIPasscodeFieldDelegate> *)arg0;
- (void)layoutSubviews;
- (<RUIPasscodeFieldDelegate> *)delegate;
- (char)becomeFirstResponder;
- (char)canBecomeFirstResponder;
- (int)keyboardAppearance;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (void)setSecureTextEntry:(char)arg0;
- (char)isSecureTextEntry;
- (int)keyboardType;
- (void)setKeyboardAppearance:(int)arg0;
- (NSMutableString *)stringValue;
- (void)setStringValue:(NSMutableString *)arg0;
- (unsigned int)numberOfEntryFields;
- (UIColor *)foregroundColor;
- (void)setForegroundColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (void)setSecurePasscodeEntry:(char)arg0;
- (RUIPasscodeField *)initWithNumberOfEntryFields:(unsigned int)arg0;
- (char)securePasscodeEntry;

@end
