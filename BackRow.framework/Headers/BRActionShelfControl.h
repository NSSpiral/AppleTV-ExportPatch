/* Runtime dump - BRActionShelfControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMediaShelfView.h>

@class BRControl, BREvent;
@interface BRActionShelfControl : BRMediaShelfView
{
    int _style;
    long _previousIndex;
    char _indexSelected;
    int _lastSelectedIndex;
}

- (void)layoutSubcontrols;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (void)setActionControlStyle:(int)arg0;
- (int)actionControlStyle;

@end
