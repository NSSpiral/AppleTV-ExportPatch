/* Runtime dump - PSPasscodeField
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPasscodeField : UIView <UIKeyInput>
{
    NSMutableArray * _dashViews;
    NSMutableArray * _dotViews;
    NSMutableArray * _digitViews;
    NSMutableString * _stringValue;
    char _securePasscodeEntry;
    <PSPasscodeFieldDelegate> * _delegate;
    unsigned int _numberOfEntryFields;
}

@property (nonatomic) <PSPasscodeFieldDelegate> * delegate;
@property (readonly, nonatomic) unsigned int numberOfEntryFields;
@property (nonatomic) char securePasscodeEntry;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) int spellCheckingType;
@property (nonatomic) int keyboardType;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int returnKeyType;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char secureTextEntry;

- (void)dealloc;
- (void)setDelegate:(<PSPasscodeFieldDelegate> *)arg0;
- (void)layoutSubviews;
- (<PSPasscodeFieldDelegate> *)delegate;
- (char)becomeFirstResponder;
- (char)canBecomeFirstResponder;
- (int)keyboardAppearance;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (void)setSecureTextEntry:(char)arg0;
- (char)isSecureTextEntry;
- (int)keyboardType;
- (NSMutableString *)stringValue;
- (void)setStringValue:(NSMutableString *)arg0;
- (unsigned int)numberOfEntryFields;
- (void)passcodeFieldTapped:(id)arg0;
- (void)setSecurePasscodeEntry:(char)arg0;
- (PSPasscodeField *)initWithNumberOfEntryFields:(unsigned int)arg0;
- (char)securePasscodeEntry;

@end
