/* Runtime dump - UITabBarCustomizeView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarCustomizeView : UIView
{
    UITabBar * _tabBar;
    NSMutableArray * _proxies;
    NSMutableArray * _fixedItems;
    UITabBarItemProxy * _draggingProxy;
    UITabBarItem * _draggingItem;
    UISnapshotView * _dragImage;
    UIImageView * _replacementGlow;
    UITabBarItem * _replaceItem;
    UILabel * _titleLabel;
    struct CGPoint _startPoint;
    int _itemsInRowCount;
    float _gridOffset;
    struct CGRect _firstItemRect;
    UITabBarItem * _selectedBeforeItem;
    NSArray * _availableItems;
}

@property (retain, nonatomic) NSArray * availableItems;

- (UITabBarCustomizeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (int)_barMetrics;
- (void)updateProxiesSelection;
- (void)setAvailableItems:(NSArray *)arg0;
- (void)tintTabBarItemsForEdit:(char)arg0;
- (void)adjustDragImageWithTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (NSArray *)itemInTabBarWithTouches:(NSArray *)arg0 withEvent:(Event *)arg1;
- (void)tabBarTouchesEnded:(id)arg0 withEvent:(Event *)arg1;
- (void)setTabBar:(UITabBar *)arg0 currentItems:(NSArray *)arg1 availableItems:(NSArray *)arg2;
- (void)tabBarTouchesBegan:(id)arg0 withEvent:(Event *)arg1;
- (void)tabBarTouchesMoved:(id)arg0 withEvent:(Event *)arg1;
- (void)tabBarTouchesCancelled:(id)arg0 withEvent:(Event *)arg1;
- (NSArray *)availableItems;

@end
