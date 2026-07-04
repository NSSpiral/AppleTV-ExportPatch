/* Runtime dump - ABHighlightingTextField
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABHighlightingTextField : UITextField
{
    char _isHighlighted;
    char _isHighlightingEnabled;
    UIColor * _savedTextColor;
    UIColor * _highlightedTextColor;
    char _showsClearButtonWhenEmpty;
    <ABResponderDelegate> * _responderDelegate;
}

@property (nonatomic) char abIsHighlighted;
@property (nonatomic) char abIsHighlightingEnabled;
@property (retain, nonatomic) UIColor * abHighlightedTextColor;
@property (nonatomic) char showsClearButtonWhenEmpty;
@property (nonatomic) <ABResponderDelegate> * responderDelegate;

- (void)abSetHighlighted:(char)arg0;
- (void)setShowsClearButtonWhenEmpty:(char)arg0;
- (char)abIsHighlighted;
- (char)abIsHighlightingEnabled;
- (void)abSetHighlightingEnabled:(char)arg0;
- (UIColor *)abHighlightedTextColor;
- (void)abSetHighlightedTextColor:(UIColor *)arg0;
- (<ABResponderDelegate> *)responderDelegate;
- (void)setResponderDelegate:(<ABResponderDelegate> *)arg0;
- (char)showsClearButtonWhenEmpty;
- (void)dealloc;
- (char)becomeFirstResponder;
- (void)setTextColor:(UIColor *)arg0;
- (NSObject *)_nextKeyResponder;
- (NSObject *)_previousKeyResponder;
- (char)_showsClearButtonWhenEmpty;

@end
