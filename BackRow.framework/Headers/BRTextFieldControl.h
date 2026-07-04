/* Runtime dump - BRTextFieldControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRTextField;

@class BREvent, BRMarqueeTextControl;
@interface BRTextFieldControl : BRControl <BRTextField>
{
    id _delegate;
    id _characterDelegate;
    BRMarqueeTextControl * _displayString;
    NSMutableString * _clearString;
    NSDictionary * _savedAttributes;
    char _useSecureText;
    char _processingDeleteChar;
    char _showCursor;
    int _textLengthLimit;
    NSTimer * _textObscureTimer;
    char _drawCursorSymbolNow;
    NSString * _displayStringToSet;
    NSTimer * __enhancedCursorBlinkTimer;
}

@property (nonatomic) char drawCursorSymbolNow;
@property (retain, nonatomic) NSString * displayStringToSet;
@property (nonatomic) NSTimer * _enhancedCursorBlinkTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brKeyEvent:(BREvent *)arg0;
- (void)controlWasDeactivated;
- (void)setTextLengthLimit:(int)arg0;
- (NSArray *)accessibilityTraitsList;
- (void)setShowCursor:(char)arg0;
- (void)setScrollPosition:(float)arg0;
- (char)needsScrollingInBounds:(struct CGRect)arg0;
- (float)maxScrollPosition;
- (void)setUseSecureText:(char)arg0;
- (int)textLengthLimit;
- (void)setCharacterDelegate:(NSObject *)arg0;
- (void)_stopSecureTextObscureTimer;
- (void)_setEnhancedCursorBlinkTimer:(NSObject *)arg0;
- (NSString *)displayStringToSet;
- (NSTimer *)_enhancedCursorBlinkTimer;
- (void)setDrawCursorSymbolNow:(char)arg0;
- (void)_enhancedBlinkCursorTimerFired:(id)arg0;
- (void)setClearString:(NSMutableString *)arg0;
- (NSString *)_secureTextFromClearText;
- (void)_startSecureTextObscureTimer;
- (NSObject *)characterDelegate;
- (char)useSecureText;
- (char)drawCursorSymbolNow;
- (void)setDisplayStringToSet:(NSString *)arg0;
- (void)_secureTextObscureTimerFired:(id)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (BRTextFieldControl *)init;
- (NSString *)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSObject *)delegate;
- (void)setDisplayString:(BRMarqueeTextControl *)arg0;
- (NSDictionary *)textAttributes;
- (void)setTextAttributes:(NSDictionary *)arg0;
- (void)setString:(NSString *)arg0;
- (NSString *)stringValue;
- (NSString *)accessibilityValue;
- (char)showCursor;

@end
