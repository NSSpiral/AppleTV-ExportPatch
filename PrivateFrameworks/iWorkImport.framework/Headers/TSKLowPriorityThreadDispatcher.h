/* Runtime dump - TSKLowPriorityThreadDispatcher
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher
{
    NSObject<OS_dispatch_queue> * _queue;
    int _suspendCount;
}

@property (readonly) char suspended;

+ (TSKLowPriorityThreadDispatcher *)sharedLowPriorityDispatcher;
+ (TSKLowPriorityThreadDispatcher *)allocWithZone:(struct _NSZone *)arg0;
+ (TSKLowPriorityThreadDispatcher *)_singletonAlloc;

- (NSOperationQueue *)p_dispatchQueue;
- (TSKLowPriorityThreadDispatcher *)retain;
- (void)release;
- (char)isSuspended;
- (TSKLowPriorityThreadDispatcher *)init;
- (TSKLowPriorityThreadDispatcher *)autorelease;
- (unsigned int)retainCount;
- (void)suspend;
- (TSKLowPriorityThreadDispatcher *)copyWithZone:(struct _NSZone *)arg0;
- (void)resume;

@end
