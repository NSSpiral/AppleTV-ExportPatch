/* Runtime dump - ACUIAccountViewProvidersManager
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountViewProvidersManager : NSObject
{
    NSDictionary * _accountTypeToPluginNameMap;
    NSMutableDictionary * _pluginCache;
}

+ (ACUIAccountViewProvidersManager *)sharedInstance;

- (ACUIAccountViewProvidersManager *)init;
- (void).cxx_destruct;
- (Class)controllerClassForCreatingAccountWithType:(NSObject *)arg0;
- (Class)viewControllerClassForCreatingAccountWithType:(NSObject *)arg0;
- (NSObject *)configurationInfoForCreatingAccountWithType:(NSObject *)arg0;
- (NSObject *)_accountViewProviderPluginForAccountTypeID:(NSObject *)arg0;
- (Class)viewControllerClassForViewingAccount:(NSObject *)arg0;
- (NSNumber *)configurationInfoForViewingAccount:(NSObject *)arg0;
- (NSString *)_loadAccountViewProviderPluginWithName:(NSString *)arg0;

@end
