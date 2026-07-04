/* Runtime dump - NSFileCoordinator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileCoordinator : NSObject
{
    id _accessArbiter;
    id _fileReactor;
    id _purposeID;
    NSURL * _recentFilePresenterURL;
    id _accessClaimIDOrIDs;
    char _isCancelled;
    NSMutableDictionary * _movedItems;
}

@property (copy) NSString * purposeIdentifier;

+ (char)tsp_coordinateReadingItemAtURL:(NSURL *)arg0 urlType:(int)arg1 options:(unsigned int)arg2 filePresenter:(PFUbiquityFilePresenter *)arg3 error:(id *)arg4 byAccessor:(NSObject *)arg5;
+ (void)tsp_addFilePresenter:(id)arg0;
+ (void)tsp_removeFilePresenter:(id)arg0;
+ (char)tsp_coordinateReadingItemAtURL:(NSURL *)arg0 urlType:(int)arg1 options:(unsigned int)arg2 writingItemAtURL:(NSURL *)arg3 options:(unsigned int)arg4 filePresenter:(PFUbiquityFilePresenter *)arg5 error:(id *)arg6 byAccessor:(NSObject *)arg7;
+ (char)tsp_coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 filePresenter:(PFUbiquityFilePresenter *)arg2 error:(id *)arg3 byAccessor:(NSObject *)arg4;
+ (char)tsp_coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 filePresenter:(PFUbiquityFilePresenter *)arg4 error:(id *)arg5 byAccessor:(NSObject *)arg6;
+ (void)__itemAtURL:(NSURL *)arg0 didResolveConflictVersionWithClientID:(NSObject *)arg1 name:(NSString *)arg2 purposeID:(NSObject *)arg3;
+ (NSObject *)_currentFileCoordinator;
+ (void)_addProcessIdentifier:(int)arg0 forID:(NSObject *)arg1;
+ (void)_removeProcessIdentifierForID:(NSObject *)arg0;
+ (NSFileCoordinator *)filePresenters;
+ (NSURL *)_canonicalURLForURL:(NSURL *)arg0;
+ (void)_printDebugInfo;
+ (char)_skipCoordinationWork;
+ (void)_addFileProvider:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
+ (NSArray *)_fileProviders;
+ (void)_accessProcessIdentifiersUsingBlock:(id /* block */)arg0;
+ (int)_processIdentifierForPresenterWithID:(int)arg0;
+ (void)addFilePresenter:(PFUbiquityFilePresenter *)arg0;
+ (void)removeFilePresenter:(PFUbiquityFilePresenter *)arg0;
+ (void)__itemAtURL:(NSURL *)arg0 didDisconnectWithPurposeID:(NSObject *)arg1;
+ (void)__itemAtURL:(NSURL *)arg0 didGainVersionWithClientID:(NSObject *)arg1 name:(NSString *)arg2 purposeID:(NSObject *)arg3;
+ (void)__itemAtURL:(NSURL *)arg0 didLoseVersionWithClientID:(NSObject *)arg1 name:(NSString *)arg2 purposeID:(NSObject *)arg3;
+ (void)__itemAtURL:(NSURL *)arg0 didReconnectWithPurposeID:(NSObject *)arg1;
+ (void)__itemAtURL:(NSURL *)arg0 didDisappearWithPurposeID:(NSObject *)arg1;
+ (void)__itemAtURL:(NSURL *)arg0 didMoveToURL:(NSURL *)arg1 purposeID:(NSObject *)arg2;
+ (void)__itemAtURL:(NSURL *)arg0 didChangeWithPurposeID:(NSObject *)arg1;
+ (void)__itemAtURL:(NSURL *)arg0 didChangeUbiquityWithPurposeID:(NSObject *)arg1;
+ (void)_addFileProvider:(NSObject *)arg0;
+ (void)_removeFileProvider:(NSObject *)arg0;
+ (int)_processIdentifierForID:(NSObject *)arg0;

- (void)__coordinateReadingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 purposeID:(NSObject *)arg4 byAccessor:(NSObject *)arg5;
- (void)_lockdownPurposeIdentifier;
- (char)_purposeIdentifierLockedDown;
- (void)_setPurposeIdentifier:(NSString *)arg0;
- (void)_invokeAccessor:(NSObject *)arg0 thenCompletionHandler:(/* block */ id)arg1;
- (void)_coordinateReadingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2 byAccessor:(NSObject *)arg3;
- (void)_coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2 byAccessor:(NSObject *)arg3;
- (void)_coordinateReadingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 error:(id *)arg4 byAccessor:(NSObject *)arg5;
- (void)_coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 error:(id *)arg4 byAccessor:(NSObject *)arg5;
- (void)_coordinateAccessWithIntents:(id)arg0 queue:(NSObject *)arg1 byAccessor:(NSObject *)arg2;
- (void)__prepareForReadingItemsAtURLs:(id)arg0 options:(unsigned int)arg1 writingItemsAtURLs:(id)arg2 options:(unsigned int)arg3 byAccessor:(NSObject *)arg4;
- (void)_itemAtURL:(NSURL *)arg0 willMoveToURL:(NSURL *)arg1;
- (void)_itemAtURL:(NSURL *)arg0 didMoveToURL:(NSURL *)arg1;
- (void)setPurposeIdentifier:(NSString *)arg0;
- (NSString *)purposeIdentifier;
- (void)coordinateAccessWithIntents:(id)arg0 queue:(NSObject *)arg1 byAccessor:(NSObject *)arg2;
- (void)prepareForReadingItemsAtURLs:(id)arg0 options:(unsigned int)arg1 writingItemsAtURLs:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4 byAccessor:(NSObject *)arg5;
- (void)itemAtURL:(NSURL *)arg0 willMoveToURL:(NSURL *)arg1;
- (void)_requestAccessClaim:(id)arg0 withProcedure:(id)arg1;
- (void)_forgetAccessClaimForID:(NSObject *)arg0;
- (void)_itemDidDisappearAtURL:(NSURL *)arg0;
- (void)_blockOnAccessClaim:(id)arg0;
- (void)_invokeAccessor:(NSObject *)arg0 orDont:(/* block */ id)arg1 andRelinquishAccessClaim:(char)arg2;
- (id)_willStartWriteWithIntents:(id)arg0 async:(char)arg1;
- (void)_didEndWrite:(id)arg0;
- (void)_ubiquityDidChangeForItemAtURL:(NSURL *)arg0;
- (void)_itemDidChangeAtURL:(NSURL *)arg0;
- (void)_setFileProvider:(NSObject *)arg0;
- (id)retainAccess;
- (void)releaseAccess:(id)arg0;
- (void)cancel;
- (void)dealloc;
- (NSFileCoordinator *)init;
- (void)coordinateReadingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 error:(id *)arg4 byAccessor:(NSObject *)arg5;
- (void)coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2 byAccessor:(NSObject *)arg3;
- (void)coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 error:(id *)arg4 byAccessor:(NSObject *)arg5;
- (NSFileCoordinator *)initWithFilePresenter:(PFUbiquityFilePresenter *)arg0;
- (void)coordinateReadingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2 byAccessor:(NSObject *)arg3;
- (void)itemAtURL:(NSURL *)arg0 didMoveToURL:(NSURL *)arg1;
- (void)__coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 purposeID:(NSObject *)arg2 byAccessor:(NSObject *)arg3;
- (void)__coordinateReadingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 purposeID:(NSObject *)arg2 byAccessor:(NSObject *)arg3;
- (void)__coordinateWritingItemAtURL:(NSURL *)arg0 options:(unsigned int)arg1 writingItemAtURL:(NSURL *)arg2 options:(unsigned int)arg3 purposeID:(NSObject *)arg4 byAccessor:(NSObject *)arg5;

@end
