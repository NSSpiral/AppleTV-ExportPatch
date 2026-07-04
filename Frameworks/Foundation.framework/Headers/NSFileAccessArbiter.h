/* Runtime dump - NSFileAccessArbiter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter>
{
    NSObject<OS_dispatch_queue> * _queue;
    char _isSubarbiter;
    NSMutableDictionary * _accessClaimsByID;
    NSMutableDictionary * _subarbitrationClaimsByID;
    NSMutableDictionary * _reactorsByID;
    NSFileAccessNode * _rootNode;
    NSObject<OS_xpc_object> * _superarbitrationServer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_handleMessage:(NSString *)arg0 fromClient:(NSObject *)arg1;
- (void)_handleCanceledClient:(NSObject *)arg0;
- (void)_registerForDebugInfoRequests;
- (void)_handleMessage:(NSString *)arg0 forSubarbitrationClaim:(NSFileSubarbitrationClaim *)arg1 server:(NSObject *)arg2;
- (void)_grantAccessClaim:(id)arg0;
- (void)_writerWithPurposeID:(NSObject *)arg0 didMoveItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (void)_sendSubarbitersMessageWithKind:(id)arg0 parameters:(NSDictionary *)arg1;
- (void)_revokeAccessClaimForID:(NSObject *)arg0 fromLocal:(char)arg1;
- (void)_grantSubarbitrationClaim:(id)arg0 withServer:(NSObject *)arg1;
- (void)_cancelAccessClaimForID:(NSObject *)arg0;
- (void)_writerWithPurposeID:(NSObject *)arg0 didDisconnectItemAtURL:(NSURL *)arg1;
- (void)_writerWithPurposeID:(NSObject *)arg0 didReconnectItemAtURL:(NSURL *)arg1;
- (void)_writerWithPurposeID:(NSObject *)arg0 didChangeUbiquityOfItemAtURL:(NSURL *)arg1;
- (void)_writerWithPurposeID:(NSObject *)arg0 didMakeItemDisappearAtURL:(NSURL *)arg1;
- (void)_writerWithPurposeID:(NSObject *)arg0 didChangeItemAtURL:(NSURL *)arg1;
- (void)_writerWithPurposeID:(NSObject *)arg0 didVersionChangeOfKind:(id)arg1 toItemAtURL:(NSURL *)arg2 withClientID:(NSObject *)arg3 name:(NSString *)arg4;
- (void)_tiePresenterForID:(NSObject *)arg0 toItemAtURL:(NSURL *)arg1;
- (char)_handleMessage:(NSString *)arg0 ofKind:(NSString *)arg1 withParameters:(NSDictionary *)arg2 embeddedServer:(NSObject *)arg3 fromClient:(NSObject *)arg4;
- (void)_addPresenter:(UIDocumentAlertPresenter *)arg0 ofItemAtURL:(NSURL *)arg1 watchingFile:(char)arg2 withLastEventID:(NSObject *)arg3;
- (void)_removeReactorForID:(NSObject *)arg0;
- (void)_addProvider:(NSObject *)arg0 ofItemsAtURL:(NSURL *)arg1;
- (void)_startArbitratingItemsAtURLs:(id)arg0 withSuperarbitrationServer:(NSObject<OS_xpc_object> *)arg1;
- (void)_getDebugInformationWithString:(NSString *)arg0 fromPid:(int)arg1 thenContinue:(id)arg2;
- (id)grantAccessClaim:(id)arg0 synchronouslyIfPossible:(char)arg1;
- (void)revokeAccessClaimForID:(NSObject *)arg0;
- (void)grantSubarbitrationClaim:(id)arg0 withServer:(NSObject *)arg1;
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
- (NSFileAccessArbiter *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 isSubarbiter:(char)arg1 listener:(NSXPCListener *)arg2;
- (void)stopArbitrating;
- (NSFileAccessNode *)rootNode;
- (void)dealloc;
- (void)finalize;

@end
