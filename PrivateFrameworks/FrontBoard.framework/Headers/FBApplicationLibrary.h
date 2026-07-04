/* Runtime dump - FBApplicationLibrary
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    LSApplicationWorkspace * _applicationWorkspace;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observerQueue_observers;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _workQueue_installedApplicationsByBundleID;
    NSMutableDictionary * _workQueue_placeholdersByBundleID;
    char _workQueue_usingNetwork;
    unsigned int _workQueue_synchronizationActionCount;
    NSMutableArray * _workQueue_pendingSynchronizationExecutionBlocks;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_group> * _preInstallGroup;
    char _usingNetwork;
}

@property (readonly, nonatomic) char usingNetwork;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (FBApplicationLibrary *)sharedInstance;
+ (void)setBundleExtendedInfoGenerationHandler:(id /* block */)arg0;

- (char)isUsingNetwork;
- (void)applicationInstallsDidCancel:(id)arg0;
- (void)applicationInstallsDidPause:(id)arg0;
- (void)applicationInstallsDidPrioritize:(id)arg0;
- (void)applicationInstallsDidResume:(id)arg0;
- (void)networkUsageChanged:(char)arg0;
- (void)applicationInstallsDidStart:(id)arg0;
- (void)applicationInstallsDidUpdateIcon:(UIImage *)arg0;
- (void)applicationInstallsDidChange:(NSDictionary *)arg0;
- (void)applicationsWillInstall:(id)arg0;
- (void)applicationsDidInstall:(id)arg0;
- (void)applicationsDidFailToInstall:(id)arg0;
- (void)applicationsWillUninstall:(id)arg0;
- (void)applicationsDidUninstall:(id)arg0;
- (void)applicationsDidFailToUninstall:(id)arg0;
- (void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1;
- (void)dealloc;
- (FBApplicationLibrary *)init;
- (NSString *)description;
- (void)removeObserver:(NSObject *)arg0;
- (id)allInstalledApplications;
- (void)addObserver:(NSObject *)arg0;
- (NSString *)installedApplicationWithBundleIdentifier:(NSString *)arg0;
- (void)_reload;
- (NSHashTable *)_observers;
- (void)_sendToObservers:(id)arg0 didRemoveApplications:(id)arg1;
- (void)_workQueue_executeInstallSynchronizationBlock:(id /* block */)arg0;
- (void)_dispatchToObservers:(id)arg0 synchronously:(char)arg1 preBlock:(id /* block */)arg2 block:(/* block */ id)arg3;
- (id)_workQueue_placeholdersForProxies:(id)arg0 updateExistingIfNecessary:(char)arg1 createIfNecessary:(char)arg2 createdPlaceholders:(id *)arg3 existingPlaceholders:(id)arg4 unmappedProxies:(id *)arg5;
- (id)_workQueue_applicationsForProxies:(id)arg0 createIfNecessary:(char)arg1 createdPlaceholders:(id *)arg2 existingApplications:(id)arg3 unmappedProxies:(id *)arg4;
- (NSObject *)_workQueue_placeholderForProxy:(NSObject *)arg0 updateExistingIfNecessary:(char)arg1 createIfNecessary:(char)arg2 wasCreated:(char *)arg3;
- (NSObject *)_workQueue_applicationInfoForProxy:(NSObject *)arg0 createIfNecessary:(char)arg1 wasCreated:(char *)arg2;
- (void)_workQueue_generateExtendedInfoForBundleInfo:(NSDictionary *)arg0;
- (void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg0;
- (void)_sendToObservers:(id)arg0 didAddPlaceholders:(id)arg1;
- (void)_workQueue_incrementSynchronizationActionCount;
- (char)_workQueue_applicationHasBeenModified:(id)arg0 applicationProxy:(NSObject *)arg1;
- (void)_sendToObservers:(id)arg0 didAddApplications:(id)arg1;
- (void)_sendToObservers:(id)arg0 didReplaceApplications:(id)arg1 withApplications:(id)arg2;
- (void)_workQueue_decrementSynchronizationActionCount;
- (void)_sendToObservers:(id)arg0 didCancelPlaceholders:(id)arg1;
- (void)_sendToObservers:(id)arg0 networkUsageDidChange:(NSDictionary *)arg1 usingNetwork:(char)arg2;
- (id)allPlaceholders;
- (NSString *)placeholderWithBundleIdentifier:(NSString *)arg0;
- (void)uninstallApplication:(id)arg0 completion:(id /* block */)arg1;
- (void)executeOrPendInstallSynchronizationBlock:(id /* block */)arg0;

@end
