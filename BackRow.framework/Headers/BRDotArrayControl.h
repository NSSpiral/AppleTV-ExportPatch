/* Runtime dump - BRDotArrayControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRGridControl, BRGridView;
@interface BRDotArrayControl : BRControl
{
    long _dotCount;
    long _activeDot;
    BRGridView * _dotGrid;
    ATVImage * _dotOnImage;
    ATVImage * _dotOffImage;
}

- (void)layoutSubcontrols;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (void)setDotCount:(long)arg0;
- (void)setActiveDot:(long)arg0;
- (BRDotArrayControl *)initWithDotCount:(long)arg0;
- (long)dotCount;
- (long)activeDot;
- (void)dealloc;
- (BRDotArrayControl *)init;

@end
