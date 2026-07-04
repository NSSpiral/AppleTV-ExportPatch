/* Runtime dump - ATVMainMenuButtonGrid
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRGridView.h>

@class BRControl, BREvent, BRScrollControl;
@interface ATVMainMenuButtonGrid : BRGridView
{
    char _itemsNeedUpdating;
    char _focusedItemNeedsUpdating;
    char _updatingFocusedItem;
    char _changingControls;
    NSArray * _items;
    NSDictionary * _buttonTemplateInfo;
    long _numberOfColumns;
    id _itemTitleBlock;
    id _itemImageBlock;
    id _itemIconBadgeCountBlock;
    char _shouldAlignCenter;
    char _allowsReordering;
    int _navigationalBias;
}

@property (nonatomic) long numberOfColumns;
@property (nonatomic) char shouldAlignCenter;
@property (nonatomic) char allowsReordering;
@property (nonatomic) int navigationalBias;
@property (readonly, nonatomic) NSDictionary * buttonTemplateInfo;

- (void)layoutSubcontrols;
- (id)ItemsBinding;
- (void)updateBoundItems;
- (void)bindItemsBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (id)initialFocus;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (struct CGPoint)scrollControl:(BRScrollControl *)arg0 adjustScrollPosition:(struct CGPoint)arg1;
- (void)setShouldAlignCenter:(char)arg0;
- (void)setNavigationalBias:(int)arg0;
- (void)bindItemTitleWithBlock:(id /* block */)arg0;
- (void)bindItemImageWithBlock:(id /* block */)arg0;
- (void)setAllowsReordering:(char)arg0;
- (void)bindItemIconBadgeCountWithBlock:(id /* block */)arg0;
- (id)FocusedItemBinding;
- (void)updateBoundFocusedItem;
- (int)navigationalBias;
- (NSArray *)dataItems;
- (char)shouldAlignCenter;
- (void)_centerSubcontrols;
- (void)_updateFocusedItem;
- (void)populateDataCache:(NSObject *)arg0;
- (NSObject *)dataItemAtIndex:(unsigned int)arg0;
- (NSDictionary *)buttonTemplateInfo;
- (id /* block */)_itemImageBlock;
- (id /* block */)_itemTitleBlock;
- (id /* block */)_itemIconBadgeCountBlock;
- (char)allowsReordering;
- (void)didFocusItemAtIndex:(long)arg0;
- (long)targetIndexForMoveFromItemAtIndex:(long)arg0 toProposedIndex:(long)arg1;
- (void)bindFocusedItemBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (struct CGPoint)positionForFocusCandidate:(NSDate *)arg0;
- (float)_rowHeightForControlsInRange:(struct _NSRange)arg0 controls:(NSArray *)arg1;
- (char)canMoveItemAtIndex:(long)arg0;
- (char)moveItemAtIndex:(long)arg0 toIndex:(long)arg1;
- (ATVMainMenuButtonGrid *)initWithLayout:(NSObject *)arg0;
- (ATVMainMenuButtonGrid *)init;
- (long)numberOfColumns;
- (void).cxx_destruct;
- (void)setNumberOfColumns:(long)arg0;
- (BRControl *)itemAtIndex:(long)arg0;
- (void)setControls:(NSArray *)arg0;

@end
