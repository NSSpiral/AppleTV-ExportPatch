/* Runtime dump - TimingInstance
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

@interface TimingInstance : NSObject
{
    float startTiming;
    float stopTiming;
    float totalTime;
    char isRunning;
}

@property (nonatomic) float startTiming;
@property (nonatomic) float stopTiming;
@property (nonatomic) float totalTime;
@property (nonatomic) char isRunning;

+ (TimingInstance *)createTimingInstanceWithStartTime:(float)arg0;

- (NSString *)description;
- (char)isRunning;
- (void)setStartTiming:(float)arg0;
- (void)setStopTiming:(float)arg0;
- (float)startTiming;
- (float)stopTiming;
- (float)totalTime;
- (void)setTotalTime:(float)arg0;
- (void)setIsRunning:(char)arg0;

@end
