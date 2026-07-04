/* Runtime dump - TSUScaledProgress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUScaledProgress : TSUProgress
{
    TSUScaledProgressStorage * mStorage;
    TSUProgress * mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> * mProgressQueue;
}

@property (retain) TSUProgress * progress;
@property double maxValue;

- (void)dealloc;
- (TSUScaledProgress *)init;
- (double)value;
- (void)setProgress:(TSUProgress *)arg0;
- (void)setMaxValue:(double)arg0;
- (TSUProgress *)progress;
- (char)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)removeProgressObserver:(NSObject *)arg0;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;

@end
