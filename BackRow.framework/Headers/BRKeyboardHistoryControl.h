/* Runtime dump - BRKeyboardHistoryControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboardControl.h>

@class BRControl, BRListView;
@interface BRKeyboardHistoryControl : BRKeyboardControl
{
    NSArray * _textEntryHistoryClients;
    NSArray * _textEntryHistoryBehaviors;
    BRListView * _list;
    struct ? _preferredSize;
    struct ? _listOriginXOffset;
    struct ? _listWidth;
}

- (void)layoutSubcontrols;
- (void)setFocusToGlyphNamed:(id)arg0;
- (char)focusIsAtRightEdge;
- (char)keyboardFocusIsAtEdge:(int)arg0;
- (BRControl *)focusedKeyControl;
- (void)setFocusedKeyControl:(BRControl *)arg0;
- (void)setTextEntryHistoryClients:(NSArray *)arg0 textEntryBehaviors:(NSArray *)arg1 list:(BRListView *)arg2;
- (BRKeyboardHistoryControl *)initWithPreferredSize:(struct ?)arg0;
- (void)setListOriginXOffset:(struct ?)arg0 listWidth:(struct ?)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;

@end
