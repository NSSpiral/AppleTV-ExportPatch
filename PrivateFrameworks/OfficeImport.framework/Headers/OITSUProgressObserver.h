/* Runtime dump - OITSUProgressObserver
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUProgressObserver : NSObject
{
    double mValueInterval;
    NSObject<OS_dispatch_queue> * mQueue;
    id mHandler;
    double mLastHandledValue;
    char mLastHandledIndeterminate;
}

@property (readonly, nonatomic) double valueInterval;

- (void)dealloc;
- (OITSUProgressObserver *)init;
- (OITSUProgressObserver *)initWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)handleValue:(double)arg0 maxValue:(double)arg1 isIndeterminate:(char)arg2;
- (double)valueInterval;

@end
