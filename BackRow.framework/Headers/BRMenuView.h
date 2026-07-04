/* Runtime dump - BRMenuView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRListView, BRScrollControl, BRTextControl;
@interface BRMenuView : BRControl
{
    float _verticalSpacer;
    BRImageControl * _titleImage;
    float _titleImageVerticalOffset;
    BRTextControl * _title;
    BRTextControl * _menuDescription;
    BRListView * _list;
    BRScrollControl * _scroller;
    int _listAlignment;
    struct ? _listWidth;
    struct ? _listLeadingGap;
    struct ? _listTrailingGap;
}

@property (readonly, nonatomic) int listAlignment;
@property (nonatomic) struct ? listWidth;
@property (nonatomic) struct ? listLeadingGap;
@property (nonatomic) struct ? listTrailingGap;

+ (BRMenuView *)menuViewWithListAlignment:(int)arg0;

- (int)listAlignment;
- (void)layoutSubcontrols;
- (void)setTitle:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (struct CGRect)listFrame;
- (void)setListFrame:(struct CGRect)arg0;
- (void)setTitleImage:(BRImageControl *)arg0 withVerticalOffset:(float)arg1;
- (void)setVerticalSpacer:(float)arg0;
- (BRMenuView *)initWithListAlignment:(int)arg0;
- (void)setListLeadingGap:(struct ?)arg0;
- (void)setListWidth:(struct ?)arg0;
- (void)setMenuDescription:(BRTextControl *)arg0;
- (char)isRandomNavigationCandidate;
- (struct ?)listLeadingGap;
- (struct ?)listTrailingGap;
- (void)setListTrailingGap:(struct ?)arg0;
- (void)setMenuDescription:(BRTextControl *)arg0 withAttributes:(NSDictionary *)arg1;
- (struct ?)listWidth;
- (BRTextControl *)menuDescription;
- (void)dealloc;
- (BRMenuView *)init;
- (void)setTitle:(BRTextControl *)arg0;
- (BRTextControl *)title;
- (NSString *)accessibilityLabel;
- (BRScrollControl *)scroller;
- (BRListView *)list;
- (NSString *)accessibilitySecondaryLabel;

@end
