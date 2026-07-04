/* Runtime dump - TSPSupportManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate>
{
    TSPObjectContext * _context;
    NSOperationQueue * _presentedItemQueue;
    NSRecursiveLock * _presentedSupportURLLock;
    NSURL * _presentedSupportURL;
    TSPSupportSaveOperationState * _saveOperationState;
    NSObject<OS_dispatch_group> * _pendingEndSaveGroup;
}

@property (copy) NSURL * presentedSupportURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURL * presentedItemURL;
@property (readonly, retain) NSOperationQueue * presentedItemOperationQueue;
@property (readonly, copy) NSURL * primaryPresentedItemURL;

+ (TSPSupportManager *)defaultSupportDirectoryURL;
+ (TSPSupportManager *)supportBundleURLForUUID:(id)arg0 delegate:(NSObject *)arg1;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg0 delegate:(NSObject *)arg1;
+ (char)isSupportAtURLValid:(id)arg0 documentUUID:(NSUUID *)arg1 versionUUID:(NSUUID *)arg2 documentProperties:(id *)arg3;
+ (NSObject *)supportDirectoryURLWithDelegate:(NSObject *)arg0;

- (void)removeFilePresenter;
- (void)beginSaveWithDocumentUUID:(NSUUID *)arg0 versionUUID:(NSUUID *)arg1 originalURL:(NSURL *)arg2 updateType:(int)arg3;
- (char)writeSupportForDocumentUUID:(id)arg0 error:(id *)arg1 writer:(NSObject *)arg2;
- (char)endSaveWithSuccess:(char)arg0 packageWriter:(NSObject *)arg1 newURL:(id *)arg2 writtenPackage:(id *)arg3;
- (void)updatePresentedItemURL:(NSURL *)arg0;
- (char)didUpdateDocumentUUIDWithOriginalDocumentProperties:(NSDictionary *)arg0 newDocumentProperties:(NSDictionary *)arg1 preserveOriginalDocumentSupport:(char)arg2 preserveShareUUID:(char)arg3 originalURL:(NSURL *)arg4 newURL:(id *)arg5 error:(id *)arg6;
- (void)performReadUsingAccessor:(NSObject *)arg0;
- (id)supportURLWithDocumentUUID:(NSUUID *)arg0;
- (void)setPresentedSupportURL:(NSURL *)arg0;
- (NSURL *)presentedSupportURL;
- (char)copyOrMoveSupportAtURL:(NSURL *)arg0 originalDocumentProperties:(NSDictionary *)arg1 toURL:(NSURL *)arg2 isCopying:(char)arg3 newDocumentProperties:(NSDictionary *)arg4 error:(id *)arg5;
- (TSPSupportManager *)init;
- (TSPSupportManager *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;
- (void)relinquishPresentedItemToWriter:(NSObject *)arg0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg0;
- (void)presentedItemDidMoveToURL:(NSURL *)arg0;
- (void)presentedItemDidChange;
- (NSURL *)presentedItemURL;
- (NSOperationQueue *)presentedItemOperationQueue;

@end
