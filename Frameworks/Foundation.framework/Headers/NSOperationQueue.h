/* Runtime dump - NSOperationQueue
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperationQueue : NSObject
{
    id _private;
    void * _reserved;
}

@property (readonly, copy) NSArray * operations;
@property (readonly) unsigned int operationCount;
@property int maxConcurrentOperationCount;
@property char suspended;
@property (copy) NSString * name;
@property int qualityOfService;
@property NSObject<OS_dispatch_queue> * underlyingQueue;

+ (NSOperationQueue *)atv_callbackQueue;
+ (NSOperationQueue *)currentQueue;
+ (NSOperationQueue *)mainQueue;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (void)cancelAllOperationsWithError:(NSError *)arg0;
- (void)addOperations:(NSArray *)arg0 waitUntilFinished:(char)arg1;
- (id)__;
- (char)overcommitsOperations;
- (void)setOvercommitsOperations:(char)arg0;
- (NSObject<OS_dispatch_queue> *)underlyingQueue;
- (char)isSuspended;
- (void)dealloc;
- (NSOperationQueue *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setMaxConcurrentOperationCount:(int)arg0;
- (void)setUnderlyingQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)addOperationWithBlock:(id /* block */)arg0;
- (void)cancelAllOperations;
- (void)addOperation:(NSObject *)arg0;
- (void)waitUntilAllOperationsAreFinished;
- (NSArray *)operations;
- (unsigned int)operationCount;
- (void)setSuspended:(char)arg0;
- (void)setQualityOfService:(int)arg0;
- (int)qualityOfService;
- (int)maxConcurrentOperationCount;

@end
