/* Runtime dump - BRMultipleMessageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVAutoDismissable;

@class ATVMessage, BRControl, BRGridControl, BRGridView, BRHeaderControl, BRListControl, BRListView, BRMenuItem;
@interface BRMultipleMessageControl : BRControl <ATVAutoDismissable>
{
    NSString * _identifier;
    BRHeaderControl * _headerControl;
    BRGridView * _grid;
    ATVMessage * _message;
    BRListView * _buttonList;
    long _gridConfig_NumberOfColumns;
    long _gridConfig_NumberOfItems;
}

- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (void)layoutSubcontrols;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridView *)arg0 itemAtIndex:(long)arg1;
- (void)_handleWindowMaxBoundsChanged;
- (void)_configureGrid:(id)arg0;
- (char)autoDismiss;
- (BRMultipleMessageControl *)initWithIdentifier:(NSString *)arg0 message:(ATVMessage *)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void).cxx_destruct;

@end
