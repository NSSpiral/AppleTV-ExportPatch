/* Runtime dump - ABSwellTextView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSwellTextView : UIView <UITextViewDelegate>
{
    UITextView * _textView;
    float _maxHeight;
    char _allowsEditing;
    <ABSwellTextViewDelegate> * _delegate;
    struct ? _flags;
}

@property (nonatomic) float maxHeight;
@property (nonatomic) <ABSwellTextViewDelegate> * delegate;
@property (nonatomic) char allowsEditing;
@property (nonatomic) char scrollEnabled;
@property (nonatomic) char highlighted;
@property (nonatomic) UIColor * highlightedTextColor;
@property (nonatomic) NSString * text;
@property (nonatomic) UIFont * font;
@property (nonatomic) UIColor * textColor;
@property (retain, nonatomic) UIColor * shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)lineHeightWithFont:(UIFont *)arg0;

- (void)setKeyboardSettings:(NSDictionary *)arg0;
- (struct CGRect)rectForSelection;
- (void)textViewTextDidChange:(NSDictionary *)arg0;
- (float)abUITextView:(NSObject *)arg0 heightForContentSize:(struct CGSize)arg1;
- (void)abUITextView:(NSObject *)arg0 contentSizeChanged:(struct CGSize)arg1;
- (ABSwellTextView *)initWithFrame:(struct CGRect)arg0;
- (void)setUserInteractionEnabled:(char)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)setDelegate:(<ABSwellTextViewDelegate> *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<ABSwellTextViewDelegate> *)delegate;
- (void)setScrollEnabled:(char)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (char)isScrollEnabled;
- (void)setTextColor:(UIColor *)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (void)setShadowOffset:(struct CGSize)arg0;
- (char)canBecomeFirstResponder;
- (void)_clearBecomeFirstResponderWhenCapable;
- (char)isFirstResponder;
- (struct CGSize)shadowOffset;
- (void)setHighlighted:(char)arg0;
- (UIColor *)shadowColor;
- (char)isHighlighted;
- (UIFont *)font;
- (UIColor *)textColor;
- (void)setHighlightedTextColor:(UIColor *)arg0;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (char)canResignFirstResponder;
- (void)textViewDidBeginEditing:(UITextView *)arg0;
- (void)textViewDidEndEditing:(UITextView *)arg0;
- (char)textViewShouldBeginEditing:(UITextView *)arg0;
- (char)textViewShouldEndEditing:(UITextView *)arg0;
- (UIColor *)highlightedTextColor;
- (char)allowsEditing;
- (void)setAllowsEditing:(char)arg0;
- (float)maxHeight;
- (void)setMaxHeight:(float)arg0;

@end
