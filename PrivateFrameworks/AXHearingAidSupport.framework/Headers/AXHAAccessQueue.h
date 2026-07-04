/* Runtime dump - AXHAAccessQueue
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAAccessQueue : NSObject
{
    NSString * _threadLocalStorageKey;
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    unsigned int _specialBehaviors;
}

@property (readonly, copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * threadLocalStorageKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * concurrentQueue;
@property (nonatomic) unsigned int specialBehaviors;
@property (readonly, nonatomic) char behavesAsMainQueue;
@property (readonly, nonatomic) char behavesWithoutErrorReporting;

+ (NSOperationQueue *)mainAccessQueue;
+ (NSOperationQueue *)backgroundAccessQueue;

- (void)dealloc;
- (AXHAAccessQueue *)init;
- (NSString *)description;
- (NSString *)label;
- (void)performSynchronousReadingBlock:(id /* block */)arg0;
- (void)performSynchronousWritingBlock:(id /* block */)arg0;
- (NSString *)_initWithLabel:(NSString *)arg0 appendUUIDToLabel:(char)arg1 specialBehaviors:(unsigned int)arg2;
- (void)performAsynchronousWritingBlock:(id /* block */)arg0;
- (AXHAAccessQueue *)initWithParentClass:(Class)arg0 description:(NSString *)arg1 appendUUIDToLabel:(char)arg2;
- (char)canOnlyReadInCurrentExecutionThread;
- (void)afterDelay:(double)arg0 processWritingBlock:(id /* block */)arg1;
- (void)performAsynchronousReadingBlock:(id /* block */)arg0;
- (char)canWriteInCurrentExecutionThread;
- (void)afterDelay:(double)arg0 processReadingBlock:(id /* block */)arg1;
- (AXHAAccessQueue *)initWithLabel:(NSString *)arg0 appendUUIDToLabel:(char)arg1;
- (void)setSpecialBehaviors:(unsigned int)arg0;
- (void)setThreadLocalStorageKey:(NSString *)arg0;
- (void)setConcurrentQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)behavesAsMainQueue;
- (NSObject<OS_dispatch_queue> *)concurrentQueue;
- (unsigned int)specialBehaviors;
- (void)_performBlock:(id /* block */)arg0 withDispatchFunction:(/* block */ id)arg1 synchronously:(/* block */ id *)arg2 accessQueueContext:(char)arg3;
- (unsigned int)_accessQueueContextInCurrentExecutionThread;
- (char)behavesWithoutErrorReporting;
- (NSString *)threadLocalStorageKey;
- (char)canReadInCurrentExecutionThread;

@end
