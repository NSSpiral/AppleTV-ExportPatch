/* Runtime dump - NSFileAccessClaim
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessClaim : NSObject
{
    NSObject<OS_xpc_object> * _client;
    NSString * _claimID;
    NSString * _purposeIDOrNil;
    char _cameFromSuperarbiter;
    unsigned int _blockageCount;
    char _didWait;
    char _isRevoked;
    NSMutableArray * _claimerBlockageReasons;
    NSError * _claimerError;
    NSMutableOrderedSet * _pendingClaims;
    NSMutableSet * _blockingClaims;
    NSMutableSet * _blockingReactorIDs;
    NSMutableArray * _providerCancellationProcedures;
    NSMutableDictionary * _reacquisitionProceduresByPresenterID;
    NSMutableArray * _revocationProcedures;
    NSMutableArray * _devaluationProcedures;
    NSMutableArray * _finishingProcedures;
    id _claimerOrNil;
    NSObject<OS_dispatch_semaphore> * _claimerWaiterOrNull;
    NSMutableArray * _sandboxTokens;
}

+ (char)canReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1 safelyOverlapWritingItemAtLocation:(NSObject *)arg2 options:(unsigned int)arg3;
+ (char)canWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1 safelyOverlapWritingItemAtLocation:(NSObject *)arg2 options:(unsigned int)arg3;
+ (char)readingItemAtLocation:(NSObject *)arg0 withPurposeID:(NSObject *)arg1 requiresOnlyPhysicalItemWithOptions:(unsigned int)arg2;
+ (char)writingItemAtLocation:(NSObject *)arg0 withPurposeID:(NSObject *)arg1 requiresOnlyPhysicalItemWithOptions:(unsigned int)arg2;

- (char)cameFromSuperarbiter;
- (char)evaluateSelfWithRootNode:(NSFileAccessNode *)arg0 checkSubarbitrability:(char)arg1;
- (NSString *)claimID;
- (void)forwardUsingMessageSender:(NSObject *)arg0 crashHandler:(/* block */ id)arg1;
- (void)unblock;
- (void)revoked;
- (char)isRevoked;
- (char)isGranted;
- (void)itemAtLocation:(NSObject *)arg0 wasReplacedByItemAtLocation:(NSObject *)arg1;
- (NSFileAccessClaim *)initWithClient:(NSObject<OS_xpc_object> *)arg0 messageParameters:(NSDictionary *)arg1 replySender:(NSObject *)arg2;
- (void)setCameFromSuperarbiter;
- (NSMutableOrderedSet *)pendingClaims;
- (id)newClaimerWaiter;
- (void)granted;
- (void)invokeClaimer;
- (char)claimerInvokingIsBlockedByReactorWithID:(int)arg0;
- (NSObject *)purposeID;
- (char)isBlockedByClaimWithPurposeID:(NSObject *)arg0;
- (void)blockClaimerForReason:(NSString *)arg0;
- (void)unblockClaimerForReason:(NSString *)arg0;
- (void)whenDevaluedPerformProcedure:(id)arg0;
- (void)addPendingClaim:(id)arg0;
- (void)setClaimerError:(NSError *)arg0;
- (char)_writeArchiveOfDirectoryAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1 error:(id *)arg2;
- (void)whenFinishedPerformProcedure:(id)arg0;
- (void)devalueSelf;
- (NSString *)descriptionWithIndenting:(id)arg0;
- (NSFileAccessClaim *)initWithClient:(NSObject<OS_xpc_object> *)arg0 claimID:(NSString *)arg1 purposeID:(NSObject *)arg2;
- (char)didWait;
- (NSError *)claimerError;
- (void)whenRevokedPerformProcedure:(id)arg0;
- (void)evaluateNewClaim:(id)arg0;
- (void)removePendingClaims:(id)arg0;
- (char)isBlockedByReadingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)isBlockedByWritingItemAtLocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (void)makeProviderOfItemAtLocation:(NSObject *)arg0 provideThenContinue:(id)arg1;
- (void)makeProviderOfItemAtLocation:(NSObject *)arg0 providePhysicalURLThenContinue:(id)arg1;
- (void)makePresentersOfItemAtLocation:(NSObject *)arg0 orContainedItem:(char)arg1 relinquishUsingProcedureGetter:(id)arg2;
- (char)canAccessLocations:(id)arg0 forReading:(char)arg1 error:(id *)arg2;
- (void)prepareItemForUploadingFromURL:(NSURL *)arg0 thenContinue:(id)arg1;
- (void)devalueOldClaim:(id)arg0;
- (char)checkIfSymbolicLinkAtURL:(NSURL *)arg0 withResolutionCount:(int *)arg1 andIfSoThenReevaluateSelf:(id)arg2;
- (NSObject *)purposeIDOfClaimOnItemAtLocation:(NSObject *)arg0 forMessagingPresenter:(id)arg1;
- (char)shouldBeRevokedPriorToInvokingAccessor;
- (void)dealloc;
- (NSString *)description;
- (void)cancelled;
- (void)finished;
- (void)block;
- (NSObject<OS_xpc_object> *)client;
- (void)finalize;

@end
