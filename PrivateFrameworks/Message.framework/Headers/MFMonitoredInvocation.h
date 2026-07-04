/* Runtime dump - MFMonitoredInvocation
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMonitoredInvocation : NSInvocation
{
    MFActivityMonitor * _monitor;
    char _shouldLogInvocation;
    char _isLowPriority;
}

@property (readonly, nonatomic) MFActivityMonitor * monitor;
@property (nonatomic) char isLowPriority;

+ (NSInvocation *)invocationWithMethodSignature:(NSMethodSignature *)arg0;
+ (NSString *)invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1 taskName:(NSString *)arg2 priority:(int)arg3 canBeCancelled:(char)arg4;
+ (NSString *)invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1 object:(NSObject *)arg2 taskName:(NSString *)arg3 priority:(int)arg4 canBeCancelled:(char)arg5;
+ (NSString *)invocationWithSelector:(SEL)arg0 target:(NSObject *)arg1 object1:(NSObject *)arg2 object2:(NSObject *)arg3 taskName:(NSString *)arg4 priority:(int)arg5 canBeCancelled:(char)arg6;

- (void)dealloc;
- (NSString *)description;
- (void)invoke;
- (char)mf_shouldLogInvocation;
- (void)setShouldLogInvocation:(char)arg0;
- (char)isLowPriority;
- (void)setIsLowPriority:(char)arg0;
- (MFActivityMonitor *)monitor;

@end
