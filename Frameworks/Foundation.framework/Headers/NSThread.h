/* Runtime dump - NSThread
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSThread : NSObject
{
    id _private;
    id _bytes;
}

@property (readonly, retain) NSMutableDictionary * threadDictionary;
@property double threadPriority;
@property int qualityOfService;
@property (copy) NSString * name;
@property unsigned int stackSize;
@property (readonly) char isMainThread;
@property (readonly) char executing;
@property (readonly) char finished;
@property (readonly) char cancelled;

+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(id /* block */)arg0;
+ (void)tsp_runFinalizeHandlersForReadCoordinator:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
+ (char)tsp_hasReadFileAccess;
+ (char)tsp_isArchiverThread;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(id /* block */)arg0;
+ (char)tsp_isRunningFinalizeHandlersForLegacyDocument;
+ (void)tsp_performSynchronousOperationWithThreadDictionaryObject:(NSMutableDictionary *)arg0 forKey:(NSString *)arg1 usingBlock:(id /* block */)arg2;
+ (NSObject *)_mapkit_networkIOThread;
+ (void)_mapkit_runThread:(NSObject *)arg0;
+ (void)_im_runBlock:(id /* block */)arg0;
+ (NSArray *)callStackReturnAddresses;
+ (char)isMultiThreaded;
+ (NSObject *)mainThread;
+ (double)threadPriority;
+ (char)setThreadPriority:(double)arg0;
+ (char)isDying;
+ (void)exit;
+ (char)isMainThread;
+ (NSThread *)currentThread;
+ (NSArray *)callStackSymbols;
+ (void)detachNewThreadSelector:(SEL)arg0 toTarget:(NSObject *)arg1 withObject:(NSObject *)arg2;
+ (void)sleepUntilDate:(NSDate *)arg0;
+ (void)sleepForTimeInterval:(double)arg0;

- (void)registerForStopNotification;
- (void)unregisterForStopNotification;
- (char)shouldStop;
- (void)__im_performBlock:(id /* block */)arg0 modes:(/* block */ id)arg1;
- (void)__im_performBlock:(id /* block */)arg0;
- (void)__im_performBlock:(id /* block */)arg0 waitUntilDone:(/* block */ id)arg1;
- (void)__im_performBlock:(id /* block */)arg0 waitUntilDone:(/* block */ id)arg1 modes:(char)arg2;
- (void)__im_performBlock:(id /* block */)arg0 afterDelay:(/* block */ id)arg1;
- (void)__im_performBlock:(id /* block */)arg0 afterDelay:(/* block */ id)arg1 modes:(double)arg2;
- (double)threadPriority;
- (void)setThreadPriority:(double)arg0;
- (char)isDying;
- (void)setStackSize:(unsigned int)arg0;
- (unsigned int)stackSize;
- (void)_nq:(id)arg0;
- (void)cancel;
- (void)dealloc;
- (NSThread *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)isMainThread;
- (char)isCancelled;
- (NSMutableDictionary *)threadDictionary;
- (void)start;
- (NSThread *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2;
- (void)main;
- (char)isFinished;
- (char)isExecuting;
- (void)setQualityOfService:(int)arg0;
- (int)qualityOfService;
- (NSRunLoop *)runLoop;

@end
