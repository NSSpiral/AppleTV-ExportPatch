/* Runtime dump - NSOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperation : NSObject
{
    id _private;
    int _private1;
}

@property (readonly) char cancelled;
@property (readonly) char executing;
@property (readonly) char finished;
@property (readonly) char concurrent;
@property (readonly) char asynchronous;
@property (readonly) char ready;
@property (readonly, copy) NSArray * dependencies;
@property int queuePriority;
@property (copy) id completionBlock;
@property double threadPriority;
@property int qualityOfService;
@property (copy) NSString * name;

+ (NSOperation *)currentOperation;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)setObservationInfo:(void *)arg0;
- (NSDictionary *)_implicitObservationInfo;
- (UIActivity *)_activity;
- (double)threadPriority;
- (void)setThreadPriority:(double)arg0;
- (id)__;
- (char)isAsynchronous;
- (int)_effQoS;
- (void)waitUntilFinishedOrTimeout:(double)arg0;
- (void)removeDependency:(id)arg0;
- (void)cancel;
- (void)dealloc;
- (NSOperation *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (char)isCancelled;
- (void)start;
- (void)main;
- (void *)observationInfo;
- (char)isFinished;
- (char)isExecuting;
- (void)setQualityOfService:(int)arg0;
- (int)qualityOfService;
- (int)queuePriority;
- (void)setQueuePriority:(int)arg0;
- (char)isConcurrent;
- (void)waitUntilFinished;
- (void)addDependency:(id)arg0;
- (NSArray *)dependencies;
- (char)isReady;
- (void)finalize;

@end
