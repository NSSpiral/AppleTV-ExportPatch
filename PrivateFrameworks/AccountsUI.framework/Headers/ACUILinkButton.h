/* Runtime dump - ACUILinkButton
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUILinkButton : UIButton
{
    NSString * _acui_titleString;
}

@property (retain) NSString * acui_titleString;

- (void)drawRect:(struct CGRect)arg0;
- (void)setHighlighted:(char)arg0;
- (void).cxx_destruct;
- (void)setAcui_titleString:(NSString *)arg0;
- (NSDictionary *)_normalStringAttributes;
- (NSDictionary *)_highlightedStringAttributes;
- (NSString *)acui_titleString;
- (ACUILinkButton *)initWithText:(NSString *)arg0 target:(NSObject *)arg1 action:(SEL)arg2;

@end
