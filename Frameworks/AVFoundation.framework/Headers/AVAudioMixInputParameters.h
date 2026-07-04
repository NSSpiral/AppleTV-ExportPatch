/* Runtime dump - AVAudioMixInputParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInputParametersInternal * _inputParameters;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, copy, nonatomic) NSString * audioTimePitchAlgorithm;
@property (readonly, retain, nonatomic) struct opaqueMTAudioProcessingTap * audioTapProcessor;

- (id)_audioVolumeCurve;
- (void)setTrackID:(int)arg0;
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;
- (NSString *)audioTimePitchAlgorithm;
- (void)setAudioTimePitchAlgorithm:(NSString *)arg0;
- (NSString *)_volumeCurveAsString;
- (void)_setScheduledAudioParameters:(NSDictionary *)arg0;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg0;
- (void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ?)arg2;
- (void)setVolume:(float)arg0 atTime:(struct ?)arg1;
- (void)_setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ?)arg2;
- (void)_setVolume:(float)arg0 atTime:(struct ?)arg1;
- (char)getVolumeRampForTime:(struct ?)arg0 startVolume:(float *)arg1 endVolume:(float *)arg2 timeRange:(struct ? *)arg3;
- (void)dealloc;
- (AVAudioMixInputParameters *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AVAudioMixInputParameters *)copyWithZone:(struct _NSZone *)arg0;
- (AVAudioMixInputParameters *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)trackID;
- (void)finalize;

@end
