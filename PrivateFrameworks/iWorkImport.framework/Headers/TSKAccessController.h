/* Runtime dump - TSKAccessController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAccessController : NSObject
{
    struct _opaque_pthread_rwlock_t _rwLock;
    char _secondaryThreadWriting;
    NSCondition * _cond;
    NSMutableDictionary * _signalIdentifiers;
    NSMutableDictionary * _waitIdentifiers;
    struct __CFRunLoopSource * _mainThreadPingSource;
    NSMutableArray * _pendingMainThreadInvocations;
    id _readerInfo;
    unsigned int _readerCount;
    NSMutableArray * _writerQueue;
    id _ticketInfo;
    unsigned int _ticketCount;
    unsigned int _writeHeldCount;
    unsigned int _writeBlockedMainThreadCount;
    TSUWeakReference * _delegate;
}

- (void)performRead:(SEL)arg0 thenWrite:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(NSObject *)arg3 argument:(void *)arg4;
- (void)signalIdentifier:(NSString *)arg0;
- (char)hasRead;
- (char)waitOnIdentifier:(NSString *)arg0 untilDate:(NSDate *)arg1 releaseReadWhileWaiting:(char)arg2;
- (void)performRead:(id)arg0;
- (void)performWrite:(id)arg0 blockMainThread:(/* block */ id)arg1;
- (void)spinMainThreadRunLoopUntil:(SEL)arg0 onTarget:(NSObject *)arg1;
- (void)performRead:(SEL)arg0 withTarget:(NSObject *)arg1 argument:(void *)arg2;
- (void)performReadWithTicket:(NSData *)arg0 block:(id /* block */)arg1;
- (void)performRead:(SEL)arg0 thenReadOnMainThread:(SEL)arg1 withTarget:(NSObject *)arg2 argument:(void *)arg3;
- (char)p_hasRead;
- (void)p_readUnlock;
- (char)p_hasWrite;
- (char)p_waitWithCondition:(id)arg0 untilDate:(NSDate *)arg1;
- (void)p_signalThread:(NSObject *)arg0;
- (void)p_readLock;
- (void)p_readLockTakingRealLock:(char)arg0;
- (void)p_readUnlockReleasingRealLock:(char)arg0;
- (void)p_enqueueWriteAndBlock;
- (void)p_writeLockAndBlockMainThread:(char)arg0;
- (void)p_writeUnlock;
- (void)p_dequeueWrite;
- (void)performWrite:(id)arg0;
- (void)p_scheduleMainThreadRead:(id)arg0;
- (void)performRead:(SEL)arg0 thenWrite:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(NSObject *)arg3 argument:(void *)arg4 passReadResultToMainThreadRead:(char)arg5;
- (void)p_writeUnlockAndPerformWithMainThreadBlocked:(id)arg0;
- (NSString *)p_threadIdentifier;
- (void)waitOnIdentifier:(NSString *)arg0;
- (void)p_blockMainThreadForWrite;
- (void)p_asyncPerformSelectorOnMainThread:(SEL)arg0 withTarget:(NSObject *)arg1 argument:(void *)arg2;
- (void)performRead:(SEL)arg0 withTarget:(NSObject *)arg1 argument:(void *)arg2 argument2:(void *)arg3;
- (void)p_performReadOnMainThread:(NSObject *)arg0;
- (void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(char)arg0;
- (void)performReadGrantingTicket:(NSObject *)arg0;
- (void)performWrite:(SEL)arg0 withTarget:(NSObject *)arg1 argument:(void *)arg2;
- (char)hasWrite;
- (char)currentThreadHasWriteLock;
- (void)dealloc;
- (TSKAccessController *)init;
- (TSKAccessController *)initWithDelegate:(TSUWeakReference *)arg0;

@end
