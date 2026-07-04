/* Runtime dump - PeriodicWorkerTask
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface PeriodicWorkerTask : NSOperation
{
    char localExecuting_;
    char finished_;
    <PeriodicWorkerTaskDelegate> * delegate_;
    double interval_;
    double startTime_;
}

@property double interval;
@property char localExecuting;
@property double startTime;
@property char finished;
@property <PeriodicWorkerTaskDelegate> * delegate;

- (PeriodicWorkerTask *)initWithInterval:(double)arg0 delegate:(<PeriodicWorkerTaskDelegate> *)arg1;
- (char)executeIfReady;
- (void)refreshStartTime;
- (void)setLocalExecuting:(char)arg0;
- (void)finishedTask;
- (void)executedTask;
- (char)localExecuting;
- (void)completed;
- (void)dealloc;
- (void)setDelegate:(<PeriodicWorkerTaskDelegate> *)arg0;
- (PeriodicWorkerTask *)init;
- (<PeriodicWorkerTaskDelegate> *)delegate;
- (void)setStartTime:(double)arg0;
- (void)start;
- (void)main;
- (double)startTime;
- (void)setInterval:(double)arg0;
- (double)interval;
- (char)isFinished;
- (char)isExecuting;
- (void)setFinished:(char)arg0;
- (char)isConcurrent;
- (char)finished;

@end
