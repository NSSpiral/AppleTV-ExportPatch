/* Runtime dump - OITSUProgressContextProgress
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUProgressContextProgress : OITSUProgress
{
    OITSUProgressContext * mProgressContext;
    NSObject<OS_dispatch_queue> * mProgressContextObserverQueue;
    char hasAddedProgressContextObserver;
}

- (void)dealloc;
- (OITSUProgressContextProgress *)init;
- (double)value;
- (char)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)removeProgressObserver:(NSObject *)arg0;
- (OITSUProgressContextProgress *)initWithProgressContext:(NSObject *)arg0;
- (void)p_updateProgressContextObserver;
- (void)p_progressDidChange:(NSDictionary *)arg0;

@end
