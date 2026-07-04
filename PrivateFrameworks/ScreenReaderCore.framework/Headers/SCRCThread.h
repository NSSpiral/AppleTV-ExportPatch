/* Runtime dump - SCRCThread
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCThread : NSObject
{
    SCRCStackQueue * _queue;
    SCRCStackQueue * _waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource * _source;
    struct __CFRunLoop * _runLoop;
    id _key;
    char _isInvalid;
    char _isRegistered;
    char _isTimerSet;
    double _lastStartTime;
    NSString * _description;
    char _descriptionChanged;
    NSThread * _nsThread;
    char _shouldStop;
    char _isWaitingForStoppingThread;
}

+ (void)initialize;
+ (UIActivity *)activity;
+ (int)activeThreadCount;
+ (double)_performSelector:(SEL)arg0 withThreadKey:(NSString *)arg1 onTarget:(NSObject *)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 firstObject:(NSObject *)arg6 moreObjects:(void *)arg7;
+ (double)lastStartTimeForKey:(NSString *)arg0;
+ (void)invalidateForKey:(NSString *)arg0;
+ (void)postStopNotification;

- (void)_setName:(NSString *)arg0;
- (void)_setKey:(NSString *)arg0;
- (void)dealloc;
- (SCRCThread *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)_initWithKey:(NSString *)arg0 task:(NSObject *)arg1;
- (void)_setIsWaitingForStoppingThread:(char)arg0;
- (void)_enqueueTask:(NSObject *)arg0 cancelMask:(unsigned long)arg1 lastStartTime:(double *)arg2;
- (double)lastStartTime;
- (void)setIsInvalid:(char)arg0;
- (void)_runThread:(NSObject *)arg0;
- (double)performSelector:(SEL)arg0 onTarget:(NSObject *)arg1 count:(unsigned long)arg2 objects:(id *)arg3;
- (void)_threadDidStop;
- (double)_performSelector:(SEL)arg0 onTarget:(NSObject *)arg1 cancelMask:(unsigned long)arg2 count:(unsigned long)arg3 firstObject:(NSObject *)arg4 moreObjects:(void *)arg5;
- (void)_enqueueImmediateTask:(NSObject *)arg0 cancelMask:(unsigned long)arg1 lastStartTime:(double *)arg2;
- (void)_enqueueWaitingTask:(NSObject *)arg0 cancelMask:(unsigned long)arg1 lastStartTime:(double *)arg2;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (double)performSelector:(SEL)arg0 onTarget:(NSObject *)arg1 cancelMask:(unsigned long)arg2 count:(unsigned long)arg3 objects:(id *)arg4;
- (char)_isWaitingForStoppingThread;
- (char)_shouldStop;
- (char)isInvalid;

@end
