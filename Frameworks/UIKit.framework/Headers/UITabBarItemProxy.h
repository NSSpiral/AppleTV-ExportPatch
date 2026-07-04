/* Runtime dump - UITabBarItemProxy
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarItemProxy : NSObject
{
    UITabBarItem * _item;
    UIView * _view;
}

- (void)dealloc;
- (UIView *)view;
- (UITabBarItem *)item;
- (void)setSelected:(char)arg0;
- (UITabBarItemProxy *)initWithItem:(UITabBarItem *)arg0 inTabBar:(UITabBar *)arg1;

@end
