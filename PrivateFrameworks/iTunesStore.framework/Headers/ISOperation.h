/* Runtime dump - ISOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISOperation : NSOperation
{
    <ISOperationDelegate> * _delegate;
    NSError * _error;
    NSLock * _lock;
    NSRunLoop * _operationRunLoop;
    ISOperation * _parentOperation;
    SSOperationProgress * _progress;
    char _shouldMessageMainThread;
    NSString * _powerAssertionIdentifier;
    NSArray * _serializationLockIdentifiers;
    NSMutableArray * _subOperations;
    char _shouldRunWithBackgroundPriority;
    char _stopped;
    char _success;
    id _threadSafeDelegate;
}

@property <ISOperationDelegate> * delegate;
@property char shouldMessageMainThread;
@property (retain) NSString * powerAssertionIdentifier;
@property (readonly) NSString * uniqueKey;
@property char shouldRunWithBackgroundPriority;
@property (retain) NSError * error;
@property char success;
@property (readonly) int progressWeight;
@property (retain) ISOperation * parentOperation;
@property (readonly, nonatomic) SSOperationProgress * progress;
@property (retain) NSRunLoop * operationRunLoop;
@property (readonly) id threadSafeDelegate;
@property (copy) NSArray * serializationLockIdentifiers;

- (char)success;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<ISOperationDelegate> *)arg0;
- (ISOperation *)init;
- (<ISOperationDelegate> *)delegate;
- (void)lock;
- (void)unlock;
- (void)run;
- (SSOperationProgress *)progress;
- (void)main;
- (void)setSuccess:(char)arg0;
- (char)runSubOperation:(NSObject *)arg0 returningError:(id *)arg1;
- (NSError *)error;
- (ISOperation *)parentOperation;
- (void)setParentOperation:(ISOperation *)arg0;
- (void)setError:(NSError *)arg0;
- (void)setShouldMessageMainThread:(char)arg0;
- (void)_keepAliveTimer:(NSObject *)arg0;
- (void)_addSubOperation:(NSObject *)arg0;
- (void)dispatchCompletionBlock;
- (void)_removeSubOperation:(NSObject *)arg0;
- (char)stopRunLoop;
- (NSRunLoop *)operationRunLoop;
- (NSString *)uniqueKey;
- (char)shouldFailAfterUniquePredecessorError:(NSError *)arg0;
- (NSString *)powerAssertionIdentifier;
- (char)shouldRunWithBackgroundPriority;
- (void)_main:(char)arg0;
- (void)_failAfterException;
- (NSString *)copyActivePowerAssertionIdentifiers;
- (NSArray *)serializationLockIdentifiers;
- (NSObject *)threadSafeDelegate;
- (void)_sendErrorToDelegate:(NSObject *)arg0;
- (void)setOperationRunLoop:(NSRunLoop *)arg0;
- (void)sendProgressToDelegate;
- (void)_sendWillStartToDelegate;
- (void)run:(char)arg0;
- (void)_sendSuccessToDelegate;
- (int)progressWeight;
- (long)runRunLoopUntilStopped;
- (char)runSubOperation:(NSObject *)arg0 onQueue:(/* block */ id)arg1 error:(id *)arg2;
- (char)shouldMessageMainThread;
- (id)copySerializationLocks;
- (void)releasePowerAssertionsDuringBlock:(id /* block */)arg0;
- (void)sendDidTakeSerializationLocks;
- (void)setSerializationLockIdentifiers:(NSArray *)arg0;
- (void)setPowerAssertionIdentifier:(NSString *)arg0;
- (void)setShouldRunWithBackgroundPriority:(char)arg0;
- (NSNumber *)authenticatedAccountDSID;
- (NSString *)loadedURLBagWithContext:(NSObject *)arg0 returningError:(id *)arg1;
- (char)loadURLBagWithContext:(NSObject *)arg0 returningError:(id *)arg1;
- (char)copyAccountID:(id *)arg0 byAuthenticatingWithContext:(NSObject *)arg1 returningError:(id *)arg2;
- (char)loadSoftwareMapReturningError:(id *)arg0;

@end
