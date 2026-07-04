/* Runtime dump - FBSSerialQueue
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSerialQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSArray * _mainRunLoopModes;
    struct __CFRunLoopSource * _runLoopSource;
    NSObject<OS_dispatch_semaphore> * _runLoopSemaphore;
}

+ (NSArray *)queueWithMainRunLoopModes:(NSArray *)arg0;
+ (NSOperationQueue *)queueWithDispatchQueue:(VKDispatch *)arg0;

- (void)dealloc;
- (FBSSerialQueue *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSOperationQueue *)_initWithDispatchQueue:(VKDispatch *)arg0 mainRunLoopModes:(NSArray *)arg1;
- (void)assertOnQueue;
- (void)performAsync:(id)arg0;

@end
