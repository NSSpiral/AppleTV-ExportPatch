/* Runtime dump - IMNetworkAvailability
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMNetworkAvailability : NSObject
{
    NSString * _guid;
    NSTimer * _timer;
    void * _context;
    double _timeout;
    double _wifiTimeout;
    double _startTime;
    unsigned int _flags;
    unsigned int _options;
    id _completionBlock;
}

@property (nonatomic) void * context;

- (void)cancel;
- (void)dealloc;
- (void *)context;
- (void)setContext:(void *)arg0;
- (void)start;
- (void)_cancel;
- (IMNetworkAvailability *)initWithFlags:(unsigned int)arg0 options:(unsigned int)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(id /* block */)arg4;
- (void)_setTimer;
- (void)_timerHit:(id)arg0;
- (IMNetworkAvailability *)initWithFlags:(unsigned int)arg0 timeout:(double)arg1 wifiTimeout:(double)arg2 completionBlock:(id /* block */)arg3;

@end
