/* Runtime dump - ATVTextEntryView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVTextEntryTextControl, BRCursorControl, BREvent, BRHeaderControl, BRImageControl, BRTextControl, BRTextEntryControl, BRTextFieldBackgroundLayer, BRTextFieldControl;
@interface ATVTextEntryView : BRControl
{
    char _cursorNavigatedFromEditor;
    BRTextEntryControl * _editor;
    struct ? _maxFootnoteTextHeight;
    BRHeaderControl * _headerControl;
    BRTextFieldControl * _textField;
    BRImageControl * _verticalDividerImage;
    BRTextFieldBackgroundLayer * _textFieldBackground;
    BRTextControl * _label;
    ATVTextEntryTextControl * _submitButton;
    BRTextControl * _supplementaryText;
    BRTextControl * _footnoteText;
    BRCursorControl * _cursor;
    ATVTextEntryTextControl * _secondButton;
}

@property (retain, nonatomic) BRTextEntryControl * editor;
@property (nonatomic) struct ? maxFootnoteTextHeight;
@property (retain, nonatomic) BRHeaderControl * headerControl;
@property (retain, nonatomic) ATVTextEntryTextControl * secondButton;
@property (retain, nonatomic) BRTextFieldControl * _textField;
@property (retain, nonatomic) BRImageControl * _verticalDividerImage;
@property (retain, nonatomic) BRTextFieldBackgroundLayer * _textFieldBackground;
@property (retain, nonatomic) BRTextControl * _label;
@property (retain, nonatomic) ATVTextEntryTextControl * _submitButton;
@property (retain, nonatomic) BRTextControl * _supplementaryText;
@property (retain, nonatomic) BRTextControl * _footnoteText;
@property (retain, nonatomic) BRCursorControl * _cursor;
@property (nonatomic) char _cursorNavigatedFromEditor;

- (char)brEventAction:(BREvent *)arg0;
- (ATVTextEntryView *)initWithTextEntryStyle:(int)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (BRCursorControl *)_cursor;
- (void)setSupplementaryText:(BRTextControl *)arg0;
- (void)setFootnoteText:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (BRTextEntryControl *)editor;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (BRHeaderControl *)headerControl;
- (BRImageControl *)_verticalDividerImage;
- (void)setMaxFootnoteTextHeight:(struct ?)arg0;
- (void)set_textField:(BRTextFieldControl *)arg0;
- (void)setEditor:(BRTextEntryControl *)arg0;
- (void)_historyItemSelected:(id)arg0;
- (void)set_verticalDividerImage:(BRImageControl *)arg0;
- (void)set_textFieldBackground:(BRTextFieldBackgroundLayer *)arg0;
- (BRTextFieldBackgroundLayer *)_textFieldBackground;
- (void)set_submitButton:(ATVTextEntryTextControl *)arg0;
- (ATVTextEntryTextControl *)_submitButton;
- (void)_submitButtonClick;
- (BRTextControl *)_supplementaryText;
- (void)set_supplementaryText:(BRTextControl *)arg0;
- (BRTextControl *)_footnoteText;
- (void)set_footnoteText:(BRTextControl *)arg0;
- (void)_switchFocusToSubmitButton;
- (void)set_cursorNavigatedFromEditor:(char)arg0;
- (ATVTextEntryTextControl *)secondButton;
- (void)_removeCursor;
- (char)_cursorNavigatedFromEditor;
- (struct ?)maxFootnoteTextHeight;
- (void)setHeaderControl:(BRHeaderControl *)arg0;
- (void)set_cursor:(BRCursorControl *)arg0;
- (void)setSecondButton:(ATVTextEntryTextControl *)arg0;
- (void)_addCursor;
- (void)setInitialText:(NSString *)arg0;
- (void)dealloc;
- (NSString *)accessibilityLabel;
- (void)setLabel:(BRTextControl *)arg0;
- (BRTextControl *)_label;
- (void)set_label:(BRTextControl *)arg0;
- (BRTextFieldControl *)_textField;

@end
