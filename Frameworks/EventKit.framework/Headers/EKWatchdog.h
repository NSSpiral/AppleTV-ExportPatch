/* Runtime dump - EKWatchdog
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKWatchdog : NSObject
{
    double _timeout;
    NSString * _identifier;
    NSObject<OS_dispatch_source> * _timer;
}

+ (void)executeWithTimeout:(double)arg0 identifier:(NSString *)arg1 block:(id /* block */)arg2;

- (EKWatchdog *)initWithTimeout:(double)arg0 identifier:(NSString *)arg1;
- (EKWatchdog *)initWithTimeout:(double)arg0 identifier:(NSString *)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)start;

@end
