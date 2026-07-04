/* Runtime dump - IMTimer
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMTimer : NSObject
{
    id _timer;
    id _target;
    NSDictionary * _userInfo;
    NSString * _name;
    double _timeInterval;
    SEL _selector;
    char _wakeDevice;
}

@property (readonly, retain, nonatomic) id userInfo;
@property (readonly, retain, nonatomic) NSDate * fireDate;

- (void)dealloc;
- (void)invalidate;
- (NSDictionary *)userInfo;
- (NSDate *)fireDate;
- (IMTimer *)initWithTimeInterval:(double)arg0 name:(NSString *)arg1 shouldWake:(char)arg2 target:(NSObject *)arg3 selector:(SEL)arg4 userInfo:(NSDictionary *)arg5 useCurrentRunLoop:(char)arg6;
- (IMTimer *)initWithTimeInterval:(double)arg0 name:(NSString *)arg1 shouldWake:(char)arg2 target:(NSObject *)arg3 selector:(SEL)arg4 userInfo:(NSDictionary *)arg5;
- (void)setFireTimeInterval:(double)arg0;

@end
