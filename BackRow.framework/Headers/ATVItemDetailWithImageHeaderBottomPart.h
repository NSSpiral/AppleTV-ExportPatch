/* Runtime dump - ATVItemDetailWithImageHeaderBottomPart
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRMediaShelfView;
@interface ATVItemDetailWithImageHeaderBottomPart : BRControl
{
    BRControl * _dividerView;
    BRMediaShelfView * _shelfView;
}

@property (retain, nonatomic) BRControl * dividerView;
@property (retain, nonatomic) BRMediaShelfView * shelfView;

- (void)layoutSubcontrols;
- (BRControl *)dividerView;
- (void)setDividerView:(BRControl *)arg0;
- (void)setShelfView:(BRMediaShelfView *)arg0;
- (BRMediaShelfView *)shelfView;
- (ATVItemDetailWithImageHeaderBottomPart *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
