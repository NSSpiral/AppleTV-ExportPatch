/* Runtime dump - MRLayerClock
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRLayerClock : NSObject
{
    double _time;
    double _layerDuration;
    double _containerTime;
    double _containerDuration;
    double _localTimeOffset;
    double _stopAtTime;
    int _currentLoopIndex;
    unsigned int _flags;
}

@property (nonatomic) double time;
@property (nonatomic) double layerDuration;
@property (readonly, nonatomic) double croppedContainerTime;
@property (readonly, nonatomic) double extendedContainerTime;
@property (readonly, nonatomic) double containerDuration;
@property (nonatomic) double localTimeOffset;
@property (nonatomic) double stopAtTime;
@property (readonly, nonatomic) int currentLoopIndex;
@property (readonly, nonatomic) char isPaused;
@property (readonly, nonatomic) char jumpedBackInTime;
@property (readonly, nonatomic) char isInPhaseIn;
@property (readonly, nonatomic) char isInPhaseOut;

- (MRLayerClock *)init;
- (void)setTime:(double)arg0;
- (double)time;
- (double)layerDuration;
- (void)setLayerDuration:(double)arg0;
- (void)reactivate:(char)arg0;
- (int)currentLoopIndex;
- (char)isInPhaseOut;
- (void)updateForTime:(double)arg0 andPlug:(id)arg1;
- (void)setParentIsPaused:(char)arg0;
- (double)extendedContainerTime;
- (char)jumpedBackInTime;
- (void)resumeOnNextUpdate;
- (void)pauseOnNextUpdate;
- (void)setLocalTimeOffset:(double)arg0;
- (double)croppedContainerTime;
- (double)containerDuration;
- (double)localTimeOffset;
- (char)isInPhaseIn;
- (double)stopAtTime;
- (void)setStopAtTime:(double)arg0;
- (char)isPaused;

@end
