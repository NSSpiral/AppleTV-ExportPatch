/* Runtime dump - NSFileAccessArbiterProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter>
{
    NSObject<OS_xpc_object> * _server;
    NSObject<OS_dispatch_queue> * _serverQueue;
    id _serverEventHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _presentersByID;
    NSMutableDictionary * _providersByID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSFileAccessArbiterProxy *)_idForReactor:(id)arg0;
+ (NSFileAccessArbiterProxy *)_fileReactorDebuggingInformation;
+ (void)_accessPresenterOperationRecordsUsingBlock:(id /* block */)arg0;
+ (NSFileAccessArbiterProxy *)_willBeginOperationForReactor:(id)arg0 withDescription:(NSString *)arg1;

- (id)grantAccessClaim:(id)arg0 synchronouslyIfPossible:(char)arg1;
- (void)revokeAccessClaimForID:(NSObject *)arg0;
- (void)grantSubarbitrationClaim:(id)arg0 withServer:(NSObject<OS_xpc_object> *)arg1;
- (void)revokeSubarbitrationClaimForID:(NSObject *)arg0;
- (void)cancelAccessClaimForID:(NSObject *)arg0;
- (void)writerWithPurposeID:(NSObject *)arg0 didMoveItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (void)writerWithPurposeID:(NSObject *)arg0 didDisconnectItemAtURL:(NSURL *)arg1;
- (void)writerWithPurposeID:(NSObject *)arg0 didReconnectItemAtURL:(NSURL *)arg1;
- (void)writerWithPurposeID:(NSObject *)arg0 didChangeUbiquityOfItemAtURL:(NSURL *)arg1;
- (void)writerWithPurposeID:(NSObject *)arg0 didMakeItemDisappearAtURL:(NSURL *)arg1;
- (void)writerWithPurposeID:(NSObject *)arg0 didChangeItemAtURL:(NSURL *)arg1;
- (void)writerWithPurposeID:(NSObject *)arg0 didVersionChangeOfKind:(id)arg1 toItemAtURL:(NSURL *)arg2 withClientID:(NSObject *)arg3 name:(NSString *)arg4;
- (void)tiePresenterForID:(NSObject *)arg0 toItemAtURL:(NSURL *)arg1;
- (void)_makePresenter:(id)arg0 saveChangesWithCompletionHandler:(id /* block */)arg1;
- (id)_readRelinquishmentForPresenter:(id)arg0;
- (void)_makePresenter:(id)arg0 relinquishToAccessClaimWithID:(int)arg1 ifNecessaryUsingSelector:(SEL)arg2 recordingRelinquishment:(id)arg3 continuer:(id)arg4;
- (void)_makePresenter:(id)arg0 accommodateDeletionWithSubitemURL:(NSURL *)arg1 completionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg0 accommodateDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (id)_writeRelinquishmentForPresenter:(id)arg0;
- (void)_makePresenter:(id)arg0 relinquishToReadingClaimWithID:(int)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)_makePresenter:(id)arg0 relinquishToWritingClaimWithID:(int)arg1 options:(unsigned int)arg2 subitemURL:(NSURL *)arg3 completionHandler:(id /* block */)arg4;
- (void)_makePresenter:(id)arg0 reacquireFromReadingClaimForID:(NSObject *)arg1;
- (void)_makePresenter:(id)arg0 reacquireFromWritingClaimForID:(NSObject *)arg1;
- (void)_makePresenter:(id)arg0 observeChangeWithSubitemURL:(NSURL *)arg1;
- (void)_makePresenter:(id)arg0 observeMoveToURL:(NSURL *)arg1 withSubitemURL:(NSURL *)arg2;
- (void)_makePresenterObserveDisconnection:(NSURLConnection *)arg0;
- (void)_makePresenterObserveReconnection:(NSURLConnection *)arg0;
- (void)_makePresenter:(id)arg0 observeUbiquityChangeWithSubitemURL:(NSURL *)arg1;
- (void)_makePresenter:(id)arg0 observeVersionChangeOfKind:(id)arg1 withClientID:(NSObject *)arg2 name:(NSString *)arg3 subitemURL:(NSURL *)arg4;
- (void)_makePresenter:(id)arg0 setLastPresentedItemEventIdentifier:(unsigned long long)arg1;
- (void)_makeProvider:(NSObject *)arg0 provideItemAtURL:(NSURL *)arg1 forAccessClaimWithID:(int)arg2 processIdentifier:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)_makeProvider:(NSObject *)arg0 cancelProvidingItemAtURL:(NSURL *)arg1 forAccessClaimWithID:(int)arg2;
- (void)_makeProvider:(NSObject *)arg0 providePhysicalURLForURL:(NSURL *)arg1 completionHandler:(id /* block */)arg2;
- (void)_makeProvider:(NSObject *)arg0 observePresentationChangeOfKind:(id)arg1 withPresenterID:(NSObject *)arg2 processIdentifier:(int)arg3 url:(NSURL *)arg4 newURL:(NSURL *)arg5 completionHandler:(id /* block */)arg6;
- (void)_makeProvider:(NSObject *)arg0 observeEndOfWriteAtURL:(NSURL *)arg1 forAccessClaimWithID:(int)arg2 processIdentifier:(int)arg3;
- (NSFileAccessArbiterProxy *)initWithServer:(NSObject<OS_xpc_object> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 eventHandler:(SCNEventHandler *)arg2;
- (id)filePresenters;
- (void)addFileProvider:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)removeFileProvider:(NSObject *)arg0;
- (NSArray *)fileProviders;
- (id)idForFileReactor:(id)arg0;
- (void)getDebugInfoWithCompletionHandler:(id /* block */)arg0;
- (void)handleMessage:(NSString *)arg0;
- (void)handleCanceledServer;
- (void)dealloc;
- (void)addFilePresenter:(PFUbiquityFilePresenter *)arg0;
- (void)removeFilePresenter:(PFUbiquityFilePresenter *)arg0;
- (void)finalize;

@end
