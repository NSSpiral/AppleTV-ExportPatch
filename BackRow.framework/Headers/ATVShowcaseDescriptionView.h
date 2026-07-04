/* Runtime dump - ATVShowcaseDescriptionView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRHorizontalDividerControl, BRTextControl;
@interface ATVShowcaseDescriptionView : BRControl
{
    struct ? _preferredWidth;
    struct ? _preferredMinHeight;
    int _maxDescriptionLines;
    BRTextControl * _titleView;
    BRTextControl * _descriptionView;
    BRHorizontalDividerControl * _dividerView;
}

@property (retain, nonatomic) NSAttributedString * title;
@property (retain, nonatomic) NSAttributedString * descriptionStr;
@property (nonatomic) struct ? preferredWidth;
@property (nonatomic) struct ? preferredMinHeight;
@property (nonatomic) int maxDescriptionLines;
@property (retain, nonatomic) BRTextControl * titleView;
@property (retain, nonatomic) BRTextControl * descriptionView;
@property (retain, nonatomic) BRHorizontalDividerControl * dividerView;

+ (ATVShowcaseDescriptionView *)defaultTitleAttributes;
+ (ATVShowcaseDescriptionView *)defaultDescriptionAttributes;

- (void)layoutSubcontrols;
- (void)setDescriptionView:(BRTextControl *)arg0;
- (void)setPreferredWidth:(struct ?)arg0;
- (BRHorizontalDividerControl *)dividerView;
- (void)setDividerView:(BRHorizontalDividerControl *)arg0;
- (BRTextControl *)descriptionView;
- (int)maxDescriptionLines;
- (NSAttributedString *)descriptionStr;
- (struct ?)preferredMinHeight;
- (void)setDescriptionStr:(NSAttributedString *)arg0;
- (void)setPreferredMinHeight:(struct ?)arg0;
- (void)setMaxDescriptionLines:(int)arg0;
- (struct ?)preferredWidth;
- (ATVShowcaseDescriptionView *)init;
- (void)setTitle:(NSAttributedString *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSAttributedString *)title;
- (NSString *)accessibilityLabel;
- (BRTextControl *)titleView;
- (void)setTitleView:(BRTextControl *)arg0;
- (void).cxx_destruct;

@end
