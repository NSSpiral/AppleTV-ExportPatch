/* Runtime dump - PFUbiquitySwitchboardEntry
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardEntry : NSObject
{
    NSString * _localPeerID;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
    PFUbiquityLocation * _localRootLocation;
    PFUbiquityFilePresenter * _fp;
    PFUbiquityFilePresenter * _localFP;
    PFUbiquityContainerMonitor * _monitor;
    unsigned int _activeStoreCount;
    NSMutableDictionary * _registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata * _metadata;
    char _finishedSetupForStore;
    char _hasScheduledFinishBlock;
    char _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant * _finishingSetupAssistant;
    NSObject<OS_dispatch_queue> * _privateQueue;
}

@property unsigned int activeStoreCount;
@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) NSString * storeName;
@property (retain, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly) PFUbiquityLocation * localRootLocation;
@property (readonly) PFUbiquityFilePresenter * filePresenter;
@property (readonly) PFUbiquityFilePresenter * localFilePresenter;
@property (readonly) PFUbiquityContainerMonitor * monitor;
@property (readonly) PFUbiquitySetupAssistant * finishingSetupAssistant;
@property (retain, nonatomic) PFUbiquitySwitchboardEntryMetadata * metadata;

- (PFUbiquityFilePresenter *)filePresenter;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (void)unregisterPersistentStore:(NSObject *)arg0;
- (NSString *)cacheWrapperForStoreName:(NSString *)arg0;
- (NSString *)metaForStoreName:(NSString *)arg0;
- (void)setUbiquityRootLocation:(PFUbiquityLocation *)arg0;
- (PFUbiquityLocation *)localRootLocation;
- (void)executeBlockOnPrivateQueue:(NSObject *)arg0;
- (NSArray *)createSetOfActiveStoreNames;
- (NSString *)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(NSString *)arg0;
- (PFUbiquityFilePresenter *)localFilePresenter;
- (PFUbiquitySwitchboardEntry *)initWithLocalPeerID:(NSString *)arg0 storeName:(NSString *)arg1 ubiquityRootLocation:(PFUbiquityLocation *)arg2 andLocalRootLocation:(NSObject *)arg3;
- (void)registerPersistentStore:(NSObject *)arg0 withStoreName:(NSString *)arg1;
- (void)unregisterPersistentStoreCoordinator:(NSObject *)arg0;
- (unsigned int)activeStoreCount;
- (void)entryWillBeRemovedFromSwitchboard;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg0;
- (void)filePresenterNoticedBaselineFileChange:(NSDictionary *)arg0;
- (void)containerIdentifierChanged:(NSNotification *)arg0;
- (void)setupFinished;
- (void)synchronouslyExecuteBlockOnPrivateQueue:(NSObject *)arg0;
- (void)containerStateChanged:(NSNotification *)arg0;
- (void)monitorStateChanged:(NSNotification *)arg0;
- (char)finishSetupForStore:(NSObject *)arg0 withSetupAssistant:(TSCH3DSceneRenderSetup *)arg1 synchronously:(char)arg2 error:(id *)arg3 finishBlock:(id /* block */)arg4;
- (void)afterDelay:(double)arg0 executeBlockOnPrivateQueue:(NSObject *)arg1;
- (void)afterDelay:(double)arg0 executeBlockOnGlobalConcurrentQueue:(NSObject *)arg1;
- (void)setActiveStoreCount:(unsigned int)arg0;
- (PFUbiquitySetupAssistant *)finishingSetupAssistant;
- (void)dealloc;
- (PFUbiquitySwitchboardEntry *)init;
- (NSString *)description;
- (void)setMetadata:(PFUbiquitySwitchboardEntryMetadata *)arg0;
- (PFUbiquitySwitchboardEntryMetadata *)metadata;
- (PFUbiquityContainerMonitor *)monitor;

@end
