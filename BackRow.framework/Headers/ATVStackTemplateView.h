/* Runtime dump - ATVStackTemplateView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCursorControl, BRGridView, BRScrollControl;
@interface ATVStackTemplateView : BRControl
{
    struct ? _headerTopMargin;
    BRControl * _headerView;
    BRGridView * _gridView;
    BRScrollControl * _scrollView;
    BRCursorControl * _cursorControl;
}

@property (nonatomic) struct ? headerTopMargin;
@property (retain, nonatomic) BRControl * headerView;
@property (retain, nonatomic) BRGridView * gridView;
@property (retain, nonatomic) BRScrollControl * scrollView;
@property (retain, nonatomic) BRCursorControl * cursorControl;

- (void)layoutSubcontrols;
- (BRCursorControl *)cursorControl;
- (void)setCursorControl:(BRCursorControl *)arg0;
- (struct ?)headerTopMargin;
- (void)setHeaderTopMargin:(struct ?)arg0;
- (ATVStackTemplateView *)init;
- (void)setScrollView:(BRScrollControl *)arg0;
- (BRScrollControl *)scrollView;
- (BRControl *)headerView;
- (void)setHeaderView:(BRControl *)arg0;
- (void).cxx_destruct;
- (BRGridView *)gridView;
- (void)setGridView:(BRGridView *)arg0;

@end
