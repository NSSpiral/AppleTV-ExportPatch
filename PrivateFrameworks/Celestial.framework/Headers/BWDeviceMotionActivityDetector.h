/* Runtime dump - BWDeviceMotionActivityDetector
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeviceMotionActivityDetector : NSObject
{
    BWMotionSampleRingBuffer * _motionDataRingBuffer;
    struct OpaqueFigSimpleMutex * _ringMutex;
    char _stationary;
    char _newMotionDataAvailable;
}

@property (readonly, nonatomic) char stationary;

+ (void)initialize;

- (void)dealloc;
- (BWDeviceMotionActivityDetector *)init;
- (void)_detectIfStationary;
- (char)isStationary;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;

@end
