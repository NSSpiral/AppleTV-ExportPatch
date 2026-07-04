/* Runtime dump - IKJSTabBarItem
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSTabBarItem : IKJSObject <IKJSTabBarItem>
{
    IKJSNavigationDocument * _navigationDocument;
    NSString * _identifier;
    NSString * _rootURL;
    <IKAppNavigationController> * _navigationControllerDelegate;
    JSManagedValue * _managedNavigationDocument;
    JSManagedValue * _managedSelf;
    IKJSTabBar * _owner;
}

@property (readonly, weak, nonatomic) <IKAppNavigationController> * navigationControllerDelegate;
@property (retain, nonatomic) JSManagedValue * managedNavigationDocument;
@property (retain, nonatomic) JSManagedValue * managedSelf;
@property (weak, nonatomic) IKJSTabBar * owner;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * rootURL;
@property (readonly, nonatomic) IKJSNavigationDocument * navigationDocument;

- (void)dealloc;
- (NSString *)identifier;
- (void).cxx_destruct;
- (NSString *)rootURL;
- (IKJSTabBar *)owner;
- (IKJSNavigationDocument *)navigationDocument;
- (JSManagedValue *)managedSelf;
- (JSManagedValue *)managedNavigationDocument;
- (IKJSTabBarItem *)initWithAppContext:(<IKApplication> *)arg0 identifier:(NSString *)arg1 rootURL:(NSString *)arg2 navigationController:(UINavigationController *)arg3 owner:(IKJSTabBar *)arg4;
- (<IKAppNavigationController> *)navigationControllerDelegate;
- (void)setManagedNavigationDocument:(JSManagedValue *)arg0;
- (void)setManagedSelf:(JSManagedValue *)arg0;
- (void)setOwner:(IKJSTabBar *)arg0;

@end
