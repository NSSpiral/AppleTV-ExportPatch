/* Runtime dump - ACDAccountNotifier
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountNotifier : NSObject
{
    NSSet * _notificationPlugins;
    NSDictionary * _pluginBundlesByAccountTypeID;
    NSMutableDictionary * _instantiatedPluginsByAccountTypeID;
    NSMutableDictionary * _principalObjectByPluginBundleURL;
}

+ (ACDAccountNotifier *)sharedAccountNotifier;
+ (NSObject *)_presumedAccountTypeIDsByNotificationPluginID;

- (ACDAccountNotifier *)init;
- (void).cxx_destruct;
- (char)canRemoveAccount:(NSObject *)arg0 inStore:(NSObject *)arg1;
- (char)postWillChangeNotificationForType:(int)arg0 inStore:(NSObject *)arg1 newAccount:(NSObject *)arg2 oldAccount:(ACAccount *)arg3;
- (void)postDidChangeNotificationForType:(int)arg0 inStore:(NSObject *)arg1 newAccount:(NSObject *)arg2 oldAccount:(ACAccount *)arg3;
- (char)canSaveAccount:(NSObject *)arg0 inStore:(NSObject *)arg1;
- (NSSet *)notificationPlugins;
- (NSBundle *)_loadPrincipalObjectFromBundle:(NSObject *)arg0;
- (NSObject *)_pluginsRegisteredForAccountType:(NSObject *)arg0;
- (void)_faultInNotificationPlugins;
- (id)_loadPrincipalObjectsFromBundles:(id)arg0;
- (NSObject *)_generateMapOfNotificationPluginBundlesByAccountTypeID;
- (void)postWillPerformDataclassActionsOnAccount:(NSObject *)arg0 forDataclasses:(id)arg1;
- (void)postDidPerformDataclassActionsOnAccount:(NSObject *)arg0 forDataclasses:(id)arg1;

@end
