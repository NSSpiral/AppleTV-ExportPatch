/* Runtime dump - CMStepCounter
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMStepCounter : NSObject
{
    CMStepCounterProxy * _stepcounterProxy;
}

@property char enabled;
@property (readonly) char everRequested;
@property (readonly, nonatomic) CMStepCounterProxy * stepcounterProxy;

+ (char)isStepCountingAvailable;

- (CMStepCounterProxy *)stepcounterProxy;
- (void)queryStepCountStartingFrom:(NSObject *)arg0 to:(NSObject *)arg1 toQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (void)startStepCountingUpdatesToQueue:(NSObject *)arg0 updateOn:(int)arg1 withHandler:(id /* block */)arg2;
- (void)stopStepCountingUpdates;
- (void)getTotalCountToQueue:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)deleteHistory;
- (char)everRequested;
- (void)dealloc;
- (CMStepCounter *)init;
- (void)setEnabled:(char)arg0;
- (char)enabled;

@end
