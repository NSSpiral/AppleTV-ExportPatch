/* Runtime dump - NSCFTimer
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFTimer : NSTimer

+ (NSCFTimer *)allocWithZone:(struct _NSZone *)arg0;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (unsigned long)_cfTypeID;
- (double)tolerance;
- (void)setTolerance:(double)arg0;
- (void)fire;
- (NSCFTimer *)retain;
- (void)release;
- (NSCFTimer *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (void)invalidate;
- (char)isValid;
- (void)setFireDate:(NSDate *)arg0;
- (NSDictionary *)userInfo;
- (NSCFTimer *)initWithFireDate:(NSDate *)arg0 interval:(double)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 userInfo:(NSDictionary *)arg4 repeats:(char)arg5;
- (double)timeInterval;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (NSDate *)fireDate;
- (void)finalize;

@end
