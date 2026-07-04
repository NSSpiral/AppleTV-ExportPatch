/* Runtime dump - LSObserverTimer
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSObserverTimer : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _name;
    NSTimer * _timer;
    NSDate * _lastFiredDate;
    NSMutableSet * _applications;
    NSMutableSet * _plugins;
    SEL _appObserverSelector;
    double _minInterval;
    double _latency;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSTimer * timer;
@property (retain, nonatomic) NSDate * lastFiredDate;
@property (retain, nonatomic) NSMutableSet * applications;
@property (retain, nonatomic) NSMutableSet * plugins;
@property (readonly, nonatomic) double minInterval;
@property (readonly, nonatomic) double latency;
@property SEL appObserverSelector;

- (void)stopTimer;
- (void)addApplication:(UIApplication *)arg0;
- (NSDate *)lastFiredDate;
- (double)minInterval;
- (void)setLastFiredDate:(NSDate *)arg0;
- (SEL)appObserverSelector;
- (LSObserverTimer *)initWithAppSelector:(SEL)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)removeApplication:(UIApplication *)arg0;
- (void)notifyObservers:(id)arg0 withApplication:(NSString *)arg1;
- (void)setPlugins:(NSMutableSet *)arg0;
- (void)setAppObserverSelector:(SEL)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)clear;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (void)sendMessage:(NSString *)arg0;
- (double)latency;
- (NSMutableSet *)applications;
- (void)setApplications:(NSMutableSet *)arg0;
- (NSMutableSet *)plugins;

@end
