/* Runtime dump - ATVRunloopInstrumentation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVRunloopInstrumentation : NSObject
{
    NSObject<OS_dispatch_queue> * _serializationQueue;
    struct __CFRunLoop * _instrumentedRunloop;
    struct __CFRunLoopObserver * _topOfLoopObserver;
    struct __CFRunLoopObserver * _beforeTimersObserver;
    struct __CFRunLoopObserver * _bottomOfLoopObserver;
    struct __CFRunLoopObserver * _endLoopObserver;
    unsigned long long _entryTimestamp;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * serializationQueue;
@property (nonatomic) struct __CFRunLoop * instrumentedRunloop;
@property (nonatomic) struct __CFRunLoopObserver * topOfLoopObserver;
@property (nonatomic) struct __CFRunLoopObserver * beforeTimersObserver;
@property (nonatomic) struct __CFRunLoopObserver * bottomOfLoopObserver;
@property (nonatomic) struct __CFRunLoopObserver * endLoopObserver;
@property (nonatomic) unsigned long long entryTimestamp;

+ (ATVRunloopInstrumentation *)instrumentationForRunloop:(struct __CFRunLoop *)arg0 createIfNeeded:(char)arg1;

- (NSObject<OS_dispatch_queue> *)serializationQueue;
- (void)dealloc;
- (void)deactivate;
- (void)activate;
- (void).cxx_destruct;
- (void)disconnect;
- (ATVRunloopInstrumentation *)initWithRunloop:(struct __CFRunLoop *)arg0;
- (void)removeObservers;
- (void)_runloopAtTop;
- (void)_runloopBeforeTimer;
- (void)_runloopAtBottom;
- (void)_runloopWillExit;
- (void)_handleObserverCallback:(struct __CFRunLoopObserver *)arg0;
- (void)setSerializationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (struct __CFRunLoop *)instrumentedRunloop;
- (void)setInstrumentedRunloop:(struct __CFRunLoop *)arg0;
- (struct __CFRunLoopObserver *)topOfLoopObserver;
- (void)setTopOfLoopObserver:(struct __CFRunLoopObserver *)arg0;
- (struct __CFRunLoopObserver *)beforeTimersObserver;
- (void)setBeforeTimersObserver:(struct __CFRunLoopObserver *)arg0;
- (struct __CFRunLoopObserver *)bottomOfLoopObserver;
- (void)setBottomOfLoopObserver:(struct __CFRunLoopObserver *)arg0;
- (struct __CFRunLoopObserver *)endLoopObserver;
- (void)setEndLoopObserver:(struct __CFRunLoopObserver *)arg0;
- (unsigned long long)entryTimestamp;
- (void)setEntryTimestamp:(unsigned long long)arg0;

@end
