/* Runtime dump - ATVSingleCommentView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVSingleCommentView : BRControl
{
    char _showsDivider;
    struct ? _horizontalMargin;
    NSAttributedString * _text;
    NSAttributedString * _footer;
}

@property (nonatomic) struct ? horizontalMargin;
@property (nonatomic) char showsDivider;
@property (retain, nonatomic) NSAttributedString * text;
@property (retain, nonatomic) NSAttributedString * footer;

- (void)layoutSubcontrols;
- (void)setTextString:(NSString *)arg0;
- (void)setShowsDivider:(char)arg0;
- (struct ?)horizontalMargin;
- (char)showsDivider;
- (void)setTextString:(NSString *)arg0 alignment:(int)arg1;
- (void)setFooterString:(NSString *)arg0 alignment:(int)arg1;
- (void)setHorizontalMargin:(struct ?)arg0;
- (ATVSingleCommentView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)text;
- (void)setText:(NSAttributedString *)arg0;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (void)setFooterString:(NSString *)arg0;
- (NSAttributedString *)footer;
- (void)setFooter:(NSAttributedString *)arg0;

@end
