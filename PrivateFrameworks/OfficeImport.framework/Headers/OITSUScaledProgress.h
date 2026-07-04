/* Runtime dump - OITSUScaledProgress
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUScaledProgress : OITSUProgress
{
    OITSUScaledProgressStorage * mStorage;
    OITSUProgress * mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> * mProgressQueue;
}

@property (retain) OITSUProgress * progress;
@property double maxValue;

- (void)dealloc;
- (OITSUScaledProgress *)init;
- (double)value;
- (void)setProgress:(OITSUProgress *)arg0;
- (void)setMaxValue:(double)arg0;
- (OITSUProgress *)progress;
- (char)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)removeProgressObserver:(NSObject *)arg0;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;

@end
