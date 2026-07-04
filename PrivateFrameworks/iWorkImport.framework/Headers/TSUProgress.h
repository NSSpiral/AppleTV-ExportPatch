/* Runtime dump - TSUProgress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgress : NSObject
{
    NSMutableSet * mProgressObservers;
    NSObject<OS_dispatch_queue> * mProgressObserversQueue;
    NSString * mMessage;
}

@property (readonly) double value;
@property (readonly) double maxValue;
@property (readonly) char indeterminate;
@property (copy) NSString * message;

- (void)dealloc;
- (TSUProgress *)init;
- (double)value;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (char)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)removeProgressObserver:(NSObject *)arg0;
- (void)protected_progressDidChange;
- (char)protected_hasProgressObservers;
- (double)protected_minProgressObserverValueInterval;

@end
