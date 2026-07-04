/* Runtime dump - PSUsageBundleManager
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageBundleManager : NSObject
{
    NSDictionary * _bundleMap;
    NSArray * _usageBundleApps;
    NSMutableArray * _storageReporters;
}

- (void)dealloc;
- (void)_loadUsageBundlesWithHandler:(id /* block */)arg0;
- (id)allUsageBundleApps;
- (void)vendUsageBundleAppsWithHandler:(id /* block */)arg0;

@end
