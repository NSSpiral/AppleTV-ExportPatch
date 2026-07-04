/* Runtime dump - TSUProgressContextProgress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgressContextProgress : TSUProgress
{
    TSUProgressContext * mProgressContext;
    NSObject<OS_dispatch_queue> * mProgressContextObserverQueue;
    char hasAddedProgressContextObserver;
}

- (void)dealloc;
- (TSUProgressContextProgress *)init;
- (double)value;
- (char)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)removeProgressObserver:(NSObject *)arg0;
- (TSUProgressContextProgress *)initWithProgressContext:(NSObject *)arg0;
- (void)p_updateProgressContextObserver;
- (void)p_progressDidChange:(NSDictionary *)arg0;

@end
