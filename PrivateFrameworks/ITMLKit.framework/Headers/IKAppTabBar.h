/* Runtime dump - IKAppTabBar
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppTabBar : NSObject
{
    <IKAppTabBarController> * _controller;
    IKJSTabBar * _jsTabBar;
}

@property (readonly, weak, nonatomic) <IKAppTabBarController> * controller;
@property (weak, nonatomic) IKJSTabBar * jsTabBar;

- (<IKAppTabBarController> *)controller;
- (void).cxx_destruct;
- (IKJSTabBar *)jsTabBar;
- (void)onReload;
- (void)onSelect;
- (IKAppTabBar *)initWithTabBarController:(UITabBarController *)arg0;
- (void)setJsTabBar:(IKJSTabBar *)arg0;

@end
