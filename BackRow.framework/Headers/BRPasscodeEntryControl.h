/* Runtime dump - BRPasscodeEntryControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRTextField;

@class BRDeviceKeyboardMessage, BREvent, BRPasscodeSelectionLayer;
@interface BRPasscodeEntryControl : BRControl <BRTextField>
{
    BRPasscodeSelectionLayer * _passcodeLayer;
    unsigned int _numDigits;
    char _isUserEditable;
    struct CGSize _passcodeLayerSize;
    BRDeviceKeyboardMessage * _deviceKeyboardMessage;
    <BRTextFieldDelegate> * _textFieldDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (NSArray *)accessibilityTraitsList;
- (struct CGSize)preferredSizeFromScreenSize:(struct CGSize)arg0;
- (void)_layoutUI;
- (void)_handlePlayPauseButton:(id)arg0;
- (BRPasscodeEntryControl *)initWithNumDigits:(unsigned int)arg0 userEditable:(char)arg1 hideDigits:(char)arg2;
- (float)widthOfDigitsFromScreenSize:(struct CGSize)arg0;
- (void)setInitialPasscode:(id)arg0;
- (void)shake;
- (void)deviceKeyboardMessageHandler:(id /* block */)arg0;
- (void)deviceKeyboardUpdate:(char)arg0;
- (void)deviceKeyboardClose;
- (void)setKeyboardTitle:(NSString *)arg0;
- (void)_shakeAnimationCompleted:(id)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)reset;
- (NSString *)accessibilityLabel;
- (void)setString:(NSString *)arg0;
- (NSString *)stringValue;
- (char)isAccessibilityElement;

@end
