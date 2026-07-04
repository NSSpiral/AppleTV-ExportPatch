/* Runtime dump - ABUITextView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUITextView : UITextView
{
    float _lastContentHeight;
    char _isHighlighted;
    UIColor * _savedTextColor;
    UIColor * _highlightedTextColor;
    UIColor * _shadowColor;
    struct CGSize _shadowOffset;
    char _disallowsSetContentOffset;
    char _informParentOfContentSizeChange;
    struct _NSRange _pinnedCursorPosition;
    ABSwellTextView * _parent;
}

@property (nonatomic) ABSwellTextView * parent;
@property (nonatomic) char highlighted;
@property (retain, nonatomic) UIColor * highlightedTextColor;
@property (retain, nonatomic) UIColor * shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) char disallowsSetContentOffset;

- (void)_updateStylesheet;
- (void)setDisallowsSetContentOffset:(char)arg0;
- (void)_secretSetFrame:(struct CGRect)arg0;
- (char)disallowsSetContentOffset;
- (ABUITextView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (char)becomeFirstResponder;
- (void)setContentOffset:(struct CGPoint)arg0;
- (void)setTextColor:(UIColor *)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (void)setShadowOffset:(struct CGSize)arg0;
- (void)setContentSize:(struct CGSize)arg0;
- (struct CGSize)shadowOffset;
- (void)setHighlighted:(char)arg0;
- (UIColor *)shadowColor;
- (char)isHighlighted;
- (void)setHighlightedTextColor:(UIColor *)arg0;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (UIColor *)highlightedTextColor;
- (ABSwellTextView *)parent;
- (void)setParent:(ABSwellTextView *)arg0;

@end
