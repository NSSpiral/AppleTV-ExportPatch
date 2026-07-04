/* Runtime dump - PSFooterHyperlinkView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate>
{
    UITextView * _textView;
    NSString * _text;
    NSURL * _URL;
    struct _NSRange _linkRange;
    id _target;
    SEL _action;
}

@property (retain) NSString * text;
@property struct _NSRange linkRange;
@property id target;
@property SEL action;
@property (retain) NSURL * URL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (PSFooterHyperlinkView *)initWithSpecifier:(PSPhoneNumberSpecifier *)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSObject *)target;
- (void)setAction:(SEL)arg0;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (char)textView:(UITextView *)arg0 shouldInteractWithURL:(NSString *)arg1 inRange:(struct _NSRange)arg2;
- (float)preferredHeightForWidth:(float)arg0;
- (void)setLinkRange:(struct _NSRange)arg0;
- (void)_linkify;
- (struct _NSRange)linkRange;

@end
