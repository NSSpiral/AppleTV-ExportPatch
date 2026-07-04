/* Runtime dump - PSCloudStorageQuotaManager
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCloudStorageQuotaManager : NSObject

+ (PSCloudStorageQuotaManager *)sharedManager;

- (void)getQuotaInfoForPrimaryAccountCompletion:(id /* block */)arg0;

@end
