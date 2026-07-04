/* Runtime dump - WLKSettingsCloudUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKSettingsCloudUtilities : NSObject

+ (char)synchronizeSettingsFromCloudIfNeeded;
+ (void)updateCloudStoreWithCompletion:(id /* block */)arg0;
+ (void)updateLocalStoreWithCompletion:(id /* block */)arg0;
+ (void)updateCloudStoreAccountLevelSetting:(id)arg0 value:(NSObject *)arg1 completion:(id /* block */)arg2;
+ (char)cloudSyncEnabled;
+ (NSObject *)_syncDictionaryForLocalStore;
+ (void)_postChangeDictionaryToCloud:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateCloudStoreAppSettings:(NSDictionary *)arg0 deleteHistory:(char)arg1 removeEntry:(char)arg2 completion:(id /* block */)arg3;
+ (void)_fetchSyncDictionary:(NSDictionary *)arg0;
+ (void)updateCloudStoreAppSettings:(NSDictionary *)arg0 deleteHistory:(char)arg1 completion:(id /* block */)arg2;
+ (void)issueDeleteAllRequestWithCompletion:(id /* block */)arg0;
+ (void)resetAccountWithCompletion:(id /* block */)arg0;
+ (void)deleteAllHistoryWithCompletion:(id /* block */)arg0;
+ (NSOperationQueue *)_queue;

@end
