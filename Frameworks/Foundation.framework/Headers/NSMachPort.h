/* Runtime dump - NSMachPort
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachPort : NSPort
{
    id _delegate;
    unsigned int _flags;
    unsigned int _machPort;
    unsigned int _reserved;
}

@property (readonly) unsigned int machPort;

+ (NSPort *)portWithMachPort:(unsigned int)arg0;
+ (char)sendBeforeTime:(double)arg0 streamData:(TSUDispatchData *)arg1 components:(NSArray *)arg2 to:(NSObject *)arg3 from:(NSObject *)arg4 msgid:(unsigned int)arg5 reserved:(unsigned int)arg6;
+ (void)resetAllPorts;
+ (NSObject *)portWithMachPort:(unsigned int)arg0 options:(unsigned int)arg1;
+ (void)_fixNSMachPortLeak;
+ (NSNumber *)port;

- (unsigned int)machPort;
- (unsigned long)_cfTypeID;
- (NSMachPort *)initWithMachPort:(unsigned int)arg0;
- (char)sendBeforeDate:(NSDate *)arg0 components:(NSArray *)arg1 from:(NSObject *)arg2 reserved:(unsigned int)arg3;
- (char)sendBeforeDate:(NSDate *)arg0 msgid:(unsigned int)arg1 components:(NSArray *)arg2 from:(NSObject *)arg3 reserved:(unsigned int)arg4;
- (char)sendBeforeTime:(double)arg0 streamData:(void *)arg1 components:(NSArray *)arg2 from:(NSObject *)arg3 msgid:(unsigned int)arg4;
- (NSMachPort *)initWithMachPort:(unsigned int)arg0 options:(unsigned int)arg1;
- (NSMachPort *)retain;
- (void)release;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSMachPort *)init;
- (char)isKindOfClass:(Class)arg0;
- (char)isEqual:(NSObject *)arg0;
- (char)isMemberOfClass:(Class)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSObject *)delegate;
- (void)invalidate;
- (char)isValid;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)finalize;

@end
