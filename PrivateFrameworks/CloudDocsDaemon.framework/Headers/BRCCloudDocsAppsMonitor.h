/* Runtime dump - BRCCloudDocsAppsMonitor
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate>
{
    NSDictionary * _cloudDocsContainersByAppID;
    NSDictionary * _appIDsByContainerID;
    NSMutableSet * _observers;
    struct br_pacer_t * _refetchPacer;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRCCloudDocsAppsMonitor *)cloudDocsAppsMonitor;

- (void)dealloc;
- (BRCCloudDocsAppsMonitor *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)_start;
- (void).cxx_destruct;
- (void)addObserver:(NSObject *)arg0;
- (NSString *)allApplicationIdentifiers;
- (void)forceRefetchAppList;
- (NSString *)containerIDsForApplicationIdentifier:(NSString *)arg0;
- (NSObject *)applicationIdentifiersForContainerID:(NSObject *)arg0;
- (void)_refetchApps;
- (char)isApplicationInstalledForContainerID:(NSObject *)arg0;

@end
