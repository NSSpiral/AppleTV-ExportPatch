/* Runtime dump - ATVInternetPhotosMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface ATVInternetPhotosMonitor : BRSingleton
{
    NSMutableDictionary * _tasks;
    NSMutableArray * _dataMonitoredObjects;
    NSMutableArray * _temporaryDataMonitoredObjects;
    NSMutableArray * _temporaryUpdateDelegateCandidates;
    id _updateDelegate;
    NSMutableArray * _accountListeners;
    NSMutableArray * _collectionListeners;
}

- (void)removeAccountWithName:(NSString *)arg0;
- (void)loadMediaForAccount:(NSObject *)arg0;
- (void)loadAssetsForCollection:(id)arg0;
- (void)cancelLoadMediaForAccount:(NSObject *)arg0;
- (void)cancelLoadAssetsForCollection:(id)arg0;
- (void)loadThumbnailImageForAsset:(NSSet *)arg0;
- (void)loadCoverArtImageForAsset:(NSSet *)arg0;
- (void)loadFullSizeImageForAsset:(NSSet *)arg0;
- (void)cancelLoadThumbnailImageForAsset:(NSSet *)arg0;
- (void)cancelLoadCoverArtImageForAsset:(NSSet *)arg0;
- (void)cancelLoadFullSizeImageForAsset:(NSSet *)arg0;
- (void)loadAccountWithName:(NSString *)arg0;
- (void)performDataMonitoring;
- (void)postUpdateNotification:(NSNotification *)arg0;
- (void)queueTaskWithIdentifier:(NSString *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2;
- (void)loadSubAccountsForAccount:(NSObject *)arg0;
- (void)loadAccountIconForAccount:(NSObject *)arg0;
- (void)cancelLoadSubAccountsForAccount:(NSObject *)arg0;
- (void)cancelLoadAccountIconForAccount:(NSObject *)arg0;
- (ATVBackgroundTask *)backgroundTask;
- (NSString *)taskContext;
- (void)invokeUpdateDelegateForObject:(NSObject *)arg0 updateData:(NSData *)arg1;
- (void)registerUpdateDelegate:(NSObject *)arg0;
- (void)unregisterUpdateDelegate:(NSObject *)arg0;
- (void)notifyAccountListenersOfChangeToObject:(NSObject *)arg0;
- (void)notifyCollectionListenersOfChangeToObject:(NSObject *)arg0;
- (void)registerCollectionListenerWithID:(int)arg0;
- (void)unregisterCollectionListenerWithID:(int)arg0;
- (void)registerAccountListenerWithID:(int)arg0;
- (void)unregisterAccountListenerWithID:(int)arg0;
- (void)cancelDataMonitoringForCollection:(id)arg0;
- (void)_registerObjectForDataMonitoring:(id)arg0;
- (void)_cancelDataMonitoringForObject:(NSObject *)arg0;
- (NSMutableArray *)dataMonitoredObjects;
- (NSObject *)currentUpdateDelegate;
- (void)cancelLoadAccountWithName:(NSString *)arg0;
- (void)registerAccountForDataMonitoring:(id)arg0;
- (void)cancelDataMonitoringForAccount:(NSObject *)arg0;
- (void)registerCollectionForDataMonitoring:(id)arg0;
- (void)addOneTimeDataMonitoredObject:(NSObject *)arg0;
- (void)registerTemporaryUpdateDelegate:(NSObject *)arg0;
- (void)unregisterTemporaryUpdateDelegate:(NSObject *)arg0;
- (void)_taskComplete:(id)arg0;
- (void)dealloc;
- (void)cancelTaskWithIdentifier:(NSString *)arg0;

@end
