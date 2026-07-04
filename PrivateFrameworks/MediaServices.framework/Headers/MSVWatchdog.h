/* Runtime dump - MSVWatchdog
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVWatchdog : NSObject
{
    char _scheduled;
    char _running;
    id _timeoutCallback;
    NSString * _mode;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSRunLoop * _runLoop;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    double _interval;
    double _timeoutInterval;
}

@property (nonatomic) double interval;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id timeoutCallback;
@property (retain, nonatomic) NSString * mode;
@property (retain, nonatomic) NSOperationQueue * operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (retain, nonatomic) NSRunLoop * runLoop;
@property (nonatomic) char scheduled;
@property (nonatomic) char running;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * timer;

- (MSVWatchdog *)init;
- (void)suspend;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (void)setMode:(NSString *)arg0;
- (NSString *)mode;
- (char)scheduled;
- (void)resume;
- (void).cxx_destruct;
- (void)setInterval:(double)arg0;
- (double)interval;
- (void)setTimer:(NSObject<OS_dispatch_source> *)arg0;
- (NSObject<OS_dispatch_source> *)timer;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSOperationQueue *)operationQueue;
- (void)setTimeoutInterval:(double)arg0;
- (void)setTimeoutCallback:(id /* block */)arg0;
- (void)scheduleInOperationQueue:(NSObject *)arg0;
- (void)setRunLoop:(NSRunLoop *)arg0;
- (NSRunLoop *)runLoop;
- (void)_cancelTimeout;
- (void)_invokeCallback;
- (void)_scheduleTest;
- (void)_scheduleTimeout;
- (id /* block */)timeoutCallback;
- (void)setScheduled:(char)arg0;
- (void)scheduleInDispatchQueue:(NSObject *)arg0;
- (void)scheduleInRunLoop:(NSObject *)arg0;
- (double)timeoutInterval;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setRunning:(char)arg0;
- (char)running;

@end
