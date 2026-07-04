/* Runtime dump - NSMessagePort
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMessagePort : NSPort
{
    void * _port;
    id _delegate;
}

+ (char)sendBeforeTime:(double)arg0 streamData:(TSUDispatchData *)arg1 components:(NSArray *)arg2 to:(NSObject *)arg3 from:(NSObject *)arg4 msgid:(unsigned int)arg5 reserved:(unsigned int)arg6;
+ (void)_fixNSMessagePortLeak;

- (char)sendBeforeDate:(NSDate *)arg0 components:(NSArray *)arg1 from:(NSObject *)arg2 reserved:(unsigned int)arg3;
- (char)sendBeforeDate:(NSDate *)arg0 msgid:(unsigned int)arg1 components:(NSArray *)arg2 from:(NSObject *)arg3 reserved:(unsigned int)arg4;
- (char)sendBeforeTime:(double)arg0 streamData:(void *)arg1 components:(NSArray *)arg2 from:(NSObject *)arg3 msgid:(unsigned int)arg4;
- (NSMessagePort *)initWithRemoteName:(NSNumber *)arg0;
- (NSMessagePort *)retain;
- (void)release;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSMessagePort *)init;
- (unsigned int)retainCount;
- (NSObject *)delegate;
- (char)setName:(NSString *)arg0;
- (NSString *)name;
- (void)invalidate;
- (char)isValid;
- (char)_tryRetain;
- (char)_isDeallocating;
- (NSMessagePort *)initWithName:(NSString *)arg0;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)finalize;

@end
