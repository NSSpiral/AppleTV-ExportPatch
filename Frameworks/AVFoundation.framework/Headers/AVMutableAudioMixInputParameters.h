/* Runtime dump - AVMutableAudioMixInputParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters
{
    AVMutableAudioMixInputParametersInternal * _mutableInputParameters;
}

@property (nonatomic) int trackID;
@property (copy, nonatomic) NSString * audioTimePitchAlgorithm;
@property (retain, nonatomic) struct opaqueMTAudioProcessingTap * audioTapProcessor;

+ (NSDictionary *)audioMixInputParameters;
+ (NSObject *)audioMixInputParametersWithTrack:(NSObject *)arg0;

- (void)setTrackID:(int)arg0;
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;
- (NSString *)audioTimePitchAlgorithm;
- (void)setAudioTimePitchAlgorithm:(NSString *)arg0;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg0;
- (void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ?)arg2;
- (void)setVolume:(float)arg0 atTime:(struct ?)arg1;
- (int)trackID;

@end
