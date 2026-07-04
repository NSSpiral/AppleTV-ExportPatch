/* Runtime dump - PLSemaphore
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLSemaphore : NSObject
{
    NSMutableSet * _interestedObjects;
    NSMutableSet * _pendingDoneObjects;
    NSString * _key;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    double _timeout;
}

@property double timeout;
@property (retain) NSMutableSet * interestedObjects;
@property (retain) NSMutableSet * pendingDoneObjects;
@property (retain) NSString * key;
@property (retain) NSObject<OS_dispatch_semaphore> * semaphore;

+ (PLSemaphore *)sharedSemaphoreForKey:(NSString *)arg0;

- (NSString *)key;
- (void)setKey:(NSString *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_semaphore> *)semaphore;
- (void)setSemaphore:(NSObject<OS_dispatch_semaphore> *)arg0;
- (void)setTimeout:(double)arg0;
- (double)timeout;
- (NSMutableSet *)interestedObjects;
- (NSMutableSet *)pendingDoneObjects;
- (void)signalNonInterestByObject:(NSObject *)arg0;
- (void)setInterestedObjects:(NSMutableSet *)arg0;
- (void)setPendingDoneObjects:(NSMutableSet *)arg0;
- (void)signalStartListening;
- (void)waitWithBlock:(id /* block */)arg0;
- (void)signalInterestByObject:(NSObject *)arg0;
- (void)signalDoneByObject:(NSObject *)arg0;
- (PLSemaphore *)initWithKey:(NSString *)arg0;

@end
