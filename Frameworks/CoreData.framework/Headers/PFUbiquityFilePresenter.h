/* Runtime dump - PFUbiquityFilePresenter
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter>
{
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _localPeerID;
    NSString * _storeName;
    NSURL * _presentedItemURL;
    NSObject<OS_dispatch_queue> * _processingQueue;
    char _scheduledProcessingBlock;
    NSMutableArray * _pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary * _locationToSafeSaveFile;
    NSMutableDictionary * _locationToStatus;
}

@property (readonly) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly) NSString * localPeerID;
@property (readonly, copy) NSURL * presentedItemURL;
@property (readonly) NSOperationQueue * presentedItemOperationQueue;
@property (readonly, nonatomic) NSDictionary * locationToStatus;
@property (readonly, nonatomic) NSDictionary * locationToSafeSaveFile;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURL * primaryPresentedItemURL;

+ (int)usesCloudDocsFramework;
+ (void)startDownloadForItems:(NSArray *)arg0 onQueue:(/* block */ id)arg1 withBlock:(id /* block */)arg2;
+ (PFUbiquityFilePresenter *)sharedPrivateOperationQueue;
+ (PFUbiquityFilePresenter *)cloudDocsRootFolder;
+ (void)registerInitialSyncHandlerForURL:(NSURL *)arg0 andContainerID:(NSObject *)arg1 onQueue:(/* block */ id)arg2 withBlock:(id /* block */)arg3;
+ (void)initialize;

- (NSDictionary *)copyStatusDictionary;
- (NSString *)localPeerID;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (void)logWasExported:(id)arg0;
- (void)logWasImported:(id)arg0;
- (void)logImportWasCancelled:(id)arg0;
- (void)logsWereScheduled:(id)arg0;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(NSObject *)arg0;
- (void)printStatus:(id)arg0;
- (void)processPendingURLs;
- (char)isiCloudExtension:(id)arg0;
- (NSObject *)retainedStatusForLocation:(NSObject *)arg0;
- (PFUbiquityFilePresenter *)initWithUbiquityRootLocation:(PFUbiquityLocation *)arg0 localPeerID:(NSString *)arg1 storeName:(NSString *)arg2 processingQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)presentedSubitemUbiquityDidChangeAtURL:(NSURL *)arg0;
- (void)exporterDidMoveLog:(id)arg0;
- (void)registerSafeSaveFile:(NSString *)arg0;
- (void)unregisterSafeSaveFile:(NSString *)arg0;
- (NSDictionary *)locationToStatus;
- (NSDictionary *)locationToSafeSaveFile;
- (void)dealloc;
- (PFUbiquityFilePresenter *)init;
- (NSString *)description;
- (void)relinquishPresentedItemToReader:(NSObject *)arg0;
- (void)relinquishPresentedItemToWriter:(NSObject *)arg0;
- (void)presentedSubitemDidChangeAtURL:(NSURL *)arg0;
- (NSURL *)presentedItemURL;
- (NSOperationQueue *)presentedItemOperationQueue;

@end
