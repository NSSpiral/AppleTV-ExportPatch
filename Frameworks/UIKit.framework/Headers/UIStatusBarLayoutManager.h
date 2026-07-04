/* Runtime dump - UIStatusBarLayoutManager
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarLayoutManager : NSObject
{
    UIStatusBarForegroundView * _foregroundView;
    int _region;
    id _itemViews;
    char _persistentAnimationsEnabled;
    char _usesVerticalLayout;
}

@property (nonatomic) UIStatusBarForegroundView * foregroundView;
@property (nonatomic) char persistentAnimationsEnabled;
@property (readonly, nonatomic) char usesVerticalLayout;

- (void)dealloc;
- (float)_startPosition;
- (char)usesVerticalLayout;
- (UIStatusBarLayoutManager *)initWithRegion:(int)arg0 foregroundView:(UIStatusBarForegroundView *)arg1 usesVerticalLayout:(char)arg2;
- (void)setForegroundView:(UIStatusBarForegroundView *)arg0;
- (char)prepareEnabledItems:(char *)arg0 withData:(NSData *)arg1 actions:(int)arg2;
- (char)updateItemsWithData:(NSData *)arg0 actions:(int)arg1 animated:(char)arg2;
- (void)setVisibilityOfAllItems:(char)arg0;
- (void)reflowWithVisibleItems:(NSArray *)arg0 duration:(double)arg1;
- (void)setVisibilityOfItem:(NSObject *)arg0 visible:(char)arg1;
- (void)positionInvisibleItems;
- (void)removeDisabledItems:(char *)arg0;
- (void)makeVisibleItemsPerformPendedActions;
- (struct CGRect)rectForItems:(NSArray *)arg0;
- (void)clearOverlapFromItems:(NSArray *)arg0;
- (float)sizeNeededForItems:(NSArray *)arg0;
- (float)distributeOverlap:(float)arg0 amongItems:(NSArray *)arg1;
- (float)sizeNeededForItem:(NSObject *)arg0;
- (float)removeOverlap:(float)arg0 fromItems:(NSArray *)arg1;
- (char)itemIsVisible:(id)arg0;
- (void)setPersistentAnimationsEnabled:(char)arg0;
- (void)_prepareEnabledItemType:(int)arg0 withEnabledItems:(char *)arg1 withData:(NSData *)arg2 actions:(int)arg3 itemAppearing:(char *)arg4 itemDisappearing:(char *)arg5;
- (void)_positionNewItemViewsWithEnabledItems:(char *)arg0;
- (id)_itemViews;
- (char)_updateItemView:(NSObject *)arg0 withData:(NSData *)arg1 actions:(int)arg2 animated:(char)arg3;
- (UIStatusBarForegroundView *)foregroundView;
- (NSObject *)_createViewForItem:(NSObject *)arg0 withData:(NSData *)arg1 actions:(int)arg2;
- (NSObject *)_itemViewsSortedForLayout;
- (struct CGRect)_frameForItemView:(NSObject *)arg0 startPosition:(SEL)arg1 firstView:(NSObject *)arg2;
- (float)_positionAfterPlacingItemView:(NSObject *)arg0 startPosition:(float)arg1 firstView:(char)arg2;
- (struct CGRect)_repositionedNewFrame:(NSObject *)arg0 sizeDelta:(SEL)arg1;
- (char)_processDelta:(float)arg0 forView:(NSObject *)arg1;
- (NSObject *)_viewForItem:(NSObject *)arg0;
- (float)_sizeNeededForItemView:(NSObject *)arg0;
- (SEL)_itemSortSelector;
- (void)_setOrigin:(float)arg0 forPoint:(struct CGPoint *)arg1;
- (float)_dimensionForSize:(struct CGSize)arg0;
- (void)_addOriginDelta:(float)arg0 toPoint:(struct CGPoint *)arg1;
- (char)prepareDoubleHeightItemWithEnabledItems:(char *)arg0;
- (char)updateDoubleHeightItem;
- (void)itemView:(NSObject *)arg0 sizeChangedBy:(float)arg1;
- (char)persistentAnimationsEnabled;

@end
