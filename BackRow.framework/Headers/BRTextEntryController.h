/* Runtime dump - BRTextEntryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol ATVAutoDismissable;

@class BRCursorControl, BREvent, BRImageControl, BRTextControl, BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextFieldBackgroundLayer, BRTextFieldControl;
@interface BRTextEntryController : BRMenuController <ATVAutoDismissable>
{
    BRTextEntryControl * _editor;
    BRTextFieldControl * _textField;
    BRImageControl * _verticalDividerImage;
    BRTextFieldBackgroundLayer * _textFieldBackground;
    BRTextControl * _textFieldLabel;
    BRTextControlWithWiderFocusFrame * _submitButton;
    BRTextControl * _footnoteText;
    BRCursorControl * _cursor;
    char _cursorNavigatedFromEditor;
    char _allowAutoDismiss;
    long _autoDismissIdx;
    struct ? _maxFootnoteTextHeight;
    NSString * _tagString;
}

@property (nonatomic) struct ? maxFootnoteTextHeight;
@property (copy, nonatomic) NSString * tagString;

- (char)brEventAction:(BREvent *)arg0;
- (BRTextEntryController *)initWithTextEntryStyle:(int)arg0;
- (void)setDisplayTextEntryHistory:(char)arg0;
- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)setSupplementaryText:(BRTextControl *)arg0;
- (void)setTextFieldDelegate:(<BRTextFieldDelegate> *)arg0;
- (void)setInitialTextEntryText:(NSString *)arg0;
- (void)setTextEntryStyle:(int)arg0;
- (void)setFootnoteText:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setTagString:(NSString *)arg0;
- (BRTextEntryControl *)editor;
- (void)setTextEntryTextFieldLabel:(NSString *)arg0;
- (void)setTextEntryHistoryClient:(NSString *)arg0 textEntryBehavior:(id)arg1;
- (void)displayTextEntryHistoryForClients:(id)arg0 textEntryBehaviors:(NSArray *)arg1;
- (void)setShowUserEnteredText:(char)arg0;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (char)accessibilityOutputsRangeForChildren;
- (void)setFocusToGlyphNamed:(id)arg0;
- (void)setMaxFootnoteTextHeight:(struct ?)arg0;
- (void)_historyItemSelected:(id)arg0;
- (void)_switchFocusToSubmitButton;
- (void)_removeCursor;
- (struct ?)maxFootnoteTextHeight;
- (void)_addCursor;
- (char)autoDismiss;
- (char)isValidAfterDataUpdate;
- (void)setSecondaryInfoText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (NSString *)tagString;
- (void)_submitButtonClick:(id)arg0;
- (char)_isSubmitButtonFocused;
- (void)_removeFocusFromSubmitButton;
- (void)dealloc;
- (BRTextEntryController *)init;
- (void)reset;

@end
