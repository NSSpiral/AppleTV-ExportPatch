/* Runtime dump - VMUSampler
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSampler : NSObject
{
    unsigned int _options;
    int _pid;
    unsigned int _task;
    char _needTaskPortDealloc;
    char _recordThreadStates;
    char _taskIs64Bit;
    NSString * _processName;
    VMUProcessDescription * _processDescription;
    struct _CSTypeRef _symbolicator;
    VMUTaskMemoryCache * _memCache;
    struct sampling_context_t * _samplingContext;
    unsigned int _mainThread;
    NSMapTable * _lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int * _previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock * _stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    char _sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray * _samples;
    char _stacksFixed;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
}

+ (void)initialize;
+ (VMUSampler *)sampleAllThreadsOfPID:(int)arg0;
+ (NSURLSessionTask *)sampleAllThreadsOfTask:(unsigned int)arg0;
+ (NSURLSessionTask *)sampleAllThreadsOfTask:(unsigned int)arg0 symbolicate:(char)arg1;

- (VMUSampler *)initWithTask:(unsigned int)arg0;
- (unsigned int)mainThread;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (unsigned int)sampleCount;
- (char)stop;
- (char)start;
- (int)pid;
- (void)setTimeLimit:(double)arg0;
- (double)timeLimit;
- (NSMutableArray *)samples;
- (NSString *)outputString;
- (char)waitUntilDone;
- (void)forceStop;
- (VMUSampler *)initWithPID:(int)arg0 task:(unsigned int)arg1 processName:(NSString *)arg2 is64Bit:(char)arg3 options:(unsigned int)arg4;
- (VMUSampler *)initWithPID:(int)arg0 orTask:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)_checkDispatchThreadLimits;
- (void)_makeHighPriority;
- (void)initializeSamplingContext:(char)arg0;
- (unsigned int)recordSampleTo:(id)arg0 beginTime:(double)arg1 endTime:(double)arg2 thread:(unsigned int)arg3;
- (void)_makeTimeshare;
- (VMUSampler *)initWithPID:(int)arg0;
- (id)sampleAllThreadsOnce;
- (VMUSampler *)initWithTask:(unsigned int)arg0 options:(unsigned int)arg1;
- (void)_fixupStacks:(id)arg0;
- (void)_runSamplingThread;
- (NSObject *)threadNameForThread:(unsigned int)arg0 returnedThreadId:(unsigned long long *)arg1 returnedDispatchQueueSerialNum:(unsigned long long *)arg2;
- (NSNumber *)dispatchQueueNameForSerialNumber:(unsigned long long)arg0 returnedConcurrentFlag:(char *)arg1 returnedThreadId:(unsigned long long *)arg2;
- (void)stopSampling;
- (NSObject *)stopSamplingAndReturnCallNode;
- (VMUSampler *)initWithPID:(int)arg0 options:(unsigned int)arg1;
- (NSObject *)sampleThread:(unsigned int)arg0;
- (void)setSampleLimit:(unsigned int)arg0;
- (unsigned int)sampleLimit;
- (void)setRecordThreadStates:(char)arg0;
- (void)setShouldOutputSignature:(char)arg0;
- (char)shouldOutputSignature;
- (struct _CSTypeRef)symbolicator;
- (void)flushData;
- (NSObject *)threadNameForThread:(unsigned int)arg0;
- (NSNumber *)dispatchQueueNameForSerialNumber:(unsigned long long)arg0;
- (void)preloadSymbols;
- (void)sampleForDuration:(unsigned int)arg0 interval:(unsigned int)arg1;
- (NSObject *)createOutput;
- (void)writeOutput:(NSObject *)arg0 append:(char)arg1;
- (void)finalize;
- (void)setSamplingInterval:(double)arg0;
- (double)samplingInterval;

@end
