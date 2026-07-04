/* Runtime dump - PeriodicWorkerThread
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol PeriodicWorkerTaskDelegate;

@class PeriodicWorkerTask;
@interface PeriodicWorkerThread : NSThread <PeriodicWorkerTaskDelegate>
{
    char running_;
    char enabled_;
    NSConditionLock * workLock_;
    NSLock * taskLock_;
    NSTimer * intervalTimer_;
    NSMutableSet * tasks_;
    NSMutableArray * inProcessTasks_;
    double interval_;
}

@property char enabled;
@property double interval;
@property char running;
@property (retain) NSConditionLock * workLock;
@property (retain) NSLock * taskLock;
@property (retain) NSTimer * intervalTimer;
@property (retain) NSMutableSet * tasks;
@property (retain) NSMutableArray * inProcessTasks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (PeriodicWorkerThread *)initWithInterval:(double)arg0;
- (void)addPeriodicWorkerTask:(NSObject *)arg0;
- (NSConditionLock *)workLock;
- (NSLock *)taskLock;
- (NSMutableArray *)inProcessTasks;
- (void)trigger:(MPActionTrigger *)arg0;
- (void)setIntervalTimer:(NSTimer *)arg0;
- (NSTimer *)intervalTimer;
- (void)installTimer;
- (void)removeTaskFromCollections:(id)arg0;
- (void)periodicWorkerTaskDidFinish:(PeriodicWorkerTask *)arg0;
- (void)periodicWorkerTaskDidFinishWithCancel:(PeriodicWorkerTask *)arg0;
- (void)removePeriodicWorkerTask:(NSObject *)arg0;
- (void)setWorkLock:(NSConditionLock *)arg0;
- (void)setTaskLock:(NSLock *)arg0;
- (void)setInProcessTasks:(NSMutableArray *)arg0;
- (void)dealloc;
- (PeriodicWorkerThread *)init;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void)main;
- (void).cxx_destruct;
- (void)setInterval:(double)arg0;
- (double)interval;
- (NSMutableSet *)tasks;
- (void)setTasks:(NSMutableSet *)arg0;
- (void)setRunning:(char)arg0;
- (char)running;

@end
