/* Runtime dump - BRCContainerCellularSettings
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerCellularSettings : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _isCellularEnabledForDocumentsAndData;
}

+ (NSDictionary *)containerCellularSettings;

- (BRCContainerCellularSettings *)init;
- (void).cxx_destruct;
- (char)isCellularEnabledForContainerID:(NSObject *)arg0;
- (void)_accountDidChange;
- (char)_isCellularEnabledForDocumentsAndData;
- (char)_isCellularEnabledForBundleID:(NSObject *)arg0;

@end
