/* Runtime dump - ATVActionCollectionView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCursorControl, BRMediaShelfView;
@interface ATVActionCollectionView : BRControl
{
    BRControl * _headerControl;
    BRControl * _content;
    BRMediaShelfView * _bottomShelf;
    BRCursorControl * _cursor;
}

@property (retain, nonatomic) BRControl * headerControl;
@property (retain, nonatomic) BRControl * content;
@property (retain, nonatomic) BRMediaShelfView * bottomShelf;
@property (retain) BRCursorControl * cursor;

- (void)layoutSubcontrols;
- (BRControl *)headerControl;
- (void)setHeaderControl:(BRControl *)arg0;
- (BRMediaShelfView *)bottomShelf;
- (void)setBottomShelf:(BRMediaShelfView *)arg0;
- (void)dealloc;
- (ATVActionCollectionView *)init;
- (BRControl *)content;
- (BRCursorControl *)cursor;
- (void)setCursor:(BRCursorControl *)arg0;
- (void)setContent:(BRControl *)arg0;

@end
