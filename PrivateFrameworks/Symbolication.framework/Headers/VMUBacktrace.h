/* Runtime dump - VMUBacktrace
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUBacktrace : NSObject <NSCopying>
{
    int _flavor;
    struct ? _callstack;
}

- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setStartTime:(double)arg0;
- (VMUBacktrace *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)thread;
- (unsigned long long *)backtrace;
- (struct _CSTypeRef)_symbolicator;
- (VMUBacktrace *)initWithSamplingContext:(struct sampling_context_t *)arg0 thread:(unsigned int)arg1;
- (VMUBacktrace *)initWithTask:(unsigned int)arg0 thread:(unsigned int)arg1 is64Bit:(char)arg2 taskMemoryCache:(NSObject *)arg3;
- (unsigned int)backtraceLength;
- (void)fixupStackWithTask:(unsigned int)arg0 symbolicator:(struct _CSTypeRef)arg1 taskMemoryCache:(NSObject *)arg2;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg0 symbolicator:(struct _CSTypeRef)arg1;
- (VMUBacktrace *)initWithTask:(unsigned int)arg0 thread:(unsigned int)arg1 is64Bit:(char)arg2;
- (char)hasSameCallstack:(id)arg0;
- (unsigned long long)topmostFrame;
- (void)removeTopmostFrame;
- (void)setLengthTime:(double)arg0;
- (void)setThreadState:(int)arg0;
- (int)threadState;
- (unsigned long long)dispatchQueueSerialNumber;

@end
