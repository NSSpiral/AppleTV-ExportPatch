/* Runtime dump - ATVDocumentHeaderView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRTextControl;
@interface ATVDocumentHeaderView : BRControl
{
    int _titleAlignment;
    struct ? _buttonsPanelOffsetY;
    BRControl * _buttonsPanelView;
    BRControl * _divider;
    BRTextControl * _titleView;
    BRTextControl * _subtitleView;
}

@property (nonatomic) int titleAlignment;
@property (retain, nonatomic) NSAttributedString * title;
@property (retain, nonatomic) NSAttributedString * subtitle;
@property (nonatomic) struct ? buttonsPanelOffsetY;
@property (retain, nonatomic) BRControl * buttonsPanelView;
@property (retain, nonatomic) BRControl * divider;
@property (retain, nonatomic) BRTextControl * titleView;
@property (retain, nonatomic) BRTextControl * subtitleView;

+ (ATVDocumentHeaderView *)defaultTitleAttributes;
+ (ATVDocumentHeaderView *)defaultSubscriptAttributes;
+ (ATVDocumentHeaderView *)defaultSubtitleAttributes;

- (void)layoutSubcontrols;
- (void)setDivider:(BRControl *)arg0;
- (BRControl *)divider;
- (void)setButtonsPanelView:(BRControl *)arg0;
- (void)setSubtitleView:(BRTextControl *)arg0;
- (BRTextControl *)subtitleView;
- (BRControl *)buttonsPanelView;
- (struct ?)buttonsPanelOffsetY;
- (void)setButtonsPanelOffsetY:(struct ?)arg0;
- (ATVDocumentHeaderView *)init;
- (void)setTitle:(NSAttributedString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)title;
- (NSString *)accessibilityLabel;
- (BRTextControl *)titleView;
- (void)setTitleView:(BRTextControl *)arg0;
- (NSAttributedString *)subtitle;
- (void)setSubtitle:(NSAttributedString *)arg0;
- (void).cxx_destruct;
- (void)setTitleAlignment:(int)arg0;
- (int)titleAlignment;

@end
