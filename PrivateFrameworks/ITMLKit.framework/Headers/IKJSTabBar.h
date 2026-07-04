/* Runtime dump - IKJSTabBar
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSTabBar : IKJSObject <IKJSTabBar>
{
    IKAppTabBar * _appTabBar;
    NSArray * _tabItems;
}

@property (readonly, weak, nonatomic) IKAppTabBar * appTabBar;
@property (retain) NSArray * tabItems;
@property (readonly, nonatomic) NSArray * tabs;
@property (retain, nonatomic) IKJSTabBarItem * selectedTab;
@property (readonly, nonatomic) IKJSTabBarItem * transientTab;

- (void).cxx_destruct;
- (void)_reload;
- (IKJSTabBar *)initWithAppContext:(<IKApplication> *)arg0 appTabBar:(IKAppTabBar *)arg1;
- (void)onReload;
- (void)onSelect;
- (NSArray *)tabItems;
- (IKAppTabBar *)appTabBar;
- (void)setTabItems:(NSArray *)arg0;
- (NSArray *)tabs;
- (IKJSTabBarItem *)selectedTab;
- (void)setSelectedTab:(IKJSTabBarItem *)arg0;
- (IKJSTabBarItem *)transientTab;

@end
