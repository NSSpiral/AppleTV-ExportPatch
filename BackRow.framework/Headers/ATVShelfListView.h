/* Runtime dump - ATVShelfListView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCursorControl, BRListView, BRMediaShelfView;
@interface ATVShelfListView : BRControl
{
    BRCursorControl * _cursor;
    BRControl * _headerControl;
    BRMediaShelfView * _centerShelf;
    BRListView * _bottomList;
}

@property (retain, nonatomic) BRControl * headerControl;
@property (retain, nonatomic) BRMediaShelfView * centerShelf;
@property (retain, nonatomic) BRListView * bottomList;
@property (retain, nonatomic) BRCursorControl * cursor;

- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (BRControl *)headerControl;
- (void)setHeaderControl:(BRControl *)arg0;
- (BRListView *)bottomList;
- (BRMediaShelfView *)centerShelf;
- (void)setCenterShelf:(BRMediaShelfView *)arg0;
- (void)setBottomList:(BRListView *)arg0;
- (void)dealloc;
- (ATVShelfListView *)init;
- (BRCursorControl *)cursor;
- (void)setCursor:(BRCursorControl *)arg0;

@end
