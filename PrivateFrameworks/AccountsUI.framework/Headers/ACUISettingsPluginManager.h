/* Runtime dump - ACUISettingsPluginManager
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUISettingsPluginManager : NSObject
{
    PSViewController<ACUISettingsPluginParentProtocol> * _parentViewController;
    NSMutableDictionary * _pluginCache;
}

- (void).cxx_destruct;
- (NSString *)_settingsPluginFromBundleWithName:(NSString *)arg0;
- (NSString *)_loadSettingsPluginFromBundleWithName:(NSString *)arg0;
- (ACUISettingsPluginManager *)initWithParentViewController:(PSViewController<ACUISettingsPluginParentProtocol> *)arg0;
- (void)parentViewControllerWillDisappear;
- (id)mailSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)contactsSettingsPlugin;

@end
