/* Runtime dump - NSTimer
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimer : NSObject

@property (copy) NSDate * fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly) char valid;
@property (readonly, retain) id userInfo;

+ (NSTimer *)timerWithTimeInterval:(double)arg0 invocation:(NSObject *)arg1 repeats:(char)arg2;
+ (NSTimer *)scheduledTimerWithTimeInterval:(double)arg0 invocation:(NSObject *)arg1 repeats:(char)arg2;
+ (NSTimer *)timerWithFireDate:(NSDate *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 userInfo:(NSDictionary *)arg3;
+ (NSTimer *)timerWithTimeInterval:(double)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 userInfo:(NSDictionary *)arg3 repeats:(char)arg4;
+ (NSTimer *)scheduledTimerWithTimeInterval:(double)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 userInfo:(NSDictionary *)arg3 repeats:(char)arg4;
+ (NSTimer *)allocWithZone:(struct _NSZone *)arg0;

- (double)tolerance;
- (void)setTolerance:(double)arg0;
- (void)fire;
- (double)_cffireTime;
- (void)setFireTime:(double)arg0;
- (double)fireTime;
- (struct __CFString *)copyDebugDescription;
- (void)invalidate;
- (char)isValid;
- (void)setFireDate:(NSDate *)arg0;
- (NSDictionary *)userInfo;
- (struct ?)context;
- (NSTimer *)initWithFireDate:(NSDate *)arg0 interval:(double)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4 repeats:(char)arg5;
- (double)timeInterval;
- (long)order;
- (NSDate *)fireDate;
- (double)interval;

@end
