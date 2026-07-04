/* Runtime dump - BRScrollingTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVAutoDismissable;

@class ATVTextEntryTextControl, BRControl, BREvent, BRHeaderControl, BRPanelControl, BRScrollingTextBoxControl;
@interface BRScrollingTextControl : BRControl <ATVAutoDismissable>
{
    BRHeaderControl * _header;
    BRScrollingTextBoxControl * _textBox;
    BRPanelControl * _buttonGrid;
    NSAttributedString * _attributedString;
    long _selectedIndex;
    NSString * _dialogIdentifier;
    char _allowAutoDismiss;
    long _autoDismissIdx;
    char _canceled;
}

@property (readonly, nonatomic) NSArray * buttons;
@property (nonatomic) char canceled;

+ (int)postControlAsDialogWithTitle:(NSString *)arg0 text:(NSString *)arg1 firstButton:(id)arg2 secondButton:(ATVTextEntryTextControl *)arg3 thirdButton:(id)arg4 defaultFocus:(int)arg5 allowAutodismiss:(char)arg6 modalIdentifier:(NSString *)arg7;
+ (NSString *)controlWithTitle:(NSString *)arg0 text:(NSString *)arg1 firstButton:(id)arg2 secondButton:(ATVTextEntryTextControl *)arg3 thirdButton:(id)arg4 defaultFocus:(int)arg5;
+ (int)postControlAsDialogWithTitle:(NSString *)arg0 text:(NSString *)arg1;
+ (NSString *)controlWithTitle:(NSString *)arg0 documentPath:(NSString *)arg1 firstButton:(id)arg2 secondButton:(ATVTextEntryTextControl *)arg3 thirdButton:(id)arg4 defaultFocus:(int)arg5;

- (char)brEventAction:(BREvent *)arg0;
- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)setSelectionHandler:(<BRSelectionHandler> *)arg0;
- (long)_selectedIndex;
- (void)addButtonWithTitle:(NSString *)arg0 isDefaultFocus:(char)arg1;
- (char)autoDismiss;
- (void)setDocumentPath:(NSString *)arg0;
- (void)_setDialogIdentifier:(NSString *)arg0;
- (NSDictionary *)_paragraphTextAttributes;
- (void)setDocumentPath:(NSString *)arg0 encoding:(unsigned int)arg1;
- (NSString *)_dialogIdentifier;
- (void)_setSelectedIndexWithControl:(BRControl *)arg0;
- (void)dealloc;
- (BRScrollingTextControl *)init;
- (void)setTitle:(NSString *)arg0;
- (void)setText:(NSString *)arg0;
- (NSString *)accessibilityLabel;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSAttributedString *)attributedString;
- (char)isAccessibilityElement;
- (NSArray *)buttons;
- (BRHeaderControl *)header;
- (char)canceled;
- (void)setCanceled:(char)arg0;

@end
