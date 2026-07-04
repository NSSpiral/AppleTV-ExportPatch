/* Runtime dump - BRKeyCommandControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol UIKeyInput;
@interface BRKeyCommandControl : BRControl <UIKeyInput>
{
    NSArray * _keyCommands;
    NSString * _lastKeyboardTextInput;
}

@property (copy, nonatomic) NSArray * keyCommands;
@property (copy, nonatomic) NSString * lastKeyboardTextInput;
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

- (char)acceptsFocus;
- (struct CGRect)focusCursorFrame;
- (void)setKeyCommands:(NSArray *)arg0;
- (void)setLastKeyboardTextInput:(NSString *)arg0;
- (NSString *)lastKeyboardTextInput;
- (NSArray *)keyCommands;
- (char)canBecomeFirstResponder;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (UIImage *)_responderSelectionImage;
- (char)_shouldRepeatInsertText:(NSString *)arg0;
- (char)isAccessibilityElement;
- (void).cxx_destruct;

@end
