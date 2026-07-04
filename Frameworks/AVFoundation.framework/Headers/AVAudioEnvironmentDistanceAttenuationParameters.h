/* Runtime dump - AVAudioEnvironmentDistanceAttenuationParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject
{
    void * _impl;
}

@property (nonatomic) int distanceAttenuationModel;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float rolloffFactor;

- (void)setDistanceAttenuationModel:(int)arg0;
- (int)distanceAttenuationModel;
- (void)setMaximumDistance:(float)arg0;
- (float)maximumDistance;
- (void)setReferenceDistance:(float)arg0;
- (float)referenceDistance;
- (void)setRolloffFactor:(float)arg0;
- (float)rolloffFactor;
- (void)dealloc;
- (AVAudioEnvironmentDistanceAttenuationParameters *)init;
- (AVAudioEnvironmentDistanceAttenuationParameters *)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl *)arg0;

@end
