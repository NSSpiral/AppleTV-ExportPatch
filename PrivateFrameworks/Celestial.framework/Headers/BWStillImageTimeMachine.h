/* Runtime dump - BWStillImageTimeMachine
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageTimeMachine : NSObject
{
    struct OpaqueFigSimpleMutex * _timeMachineMutex;
    struct opaqueCMSampleBuffer * * _frames;
    char _suspended;
    int _capacity;
}

@property (readonly, nonatomic) int capacity;

+ (void)initialize;
+ (char)afComplete:(struct opaqueCMSampleBuffer *)arg0;

- (void)dealloc;
- (BWStillImageTimeMachine *)initWithCapacity:(int)arg0;
- (void)drain;
- (void)resume;
- (void)_drain;
- (void)suspendAndDrain;
- (long)insertFrame:(struct opaqueCMSampleBuffer *)arg0;
- (struct opaqueCMSampleBuffer *)copyBestFrame;
- (int)capacity;

@end
