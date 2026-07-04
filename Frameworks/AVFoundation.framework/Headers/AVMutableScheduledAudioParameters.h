/* Runtime dump - AVMutableScheduledAudioParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters
{
    AVMutableScheduledAudioParametersInternal * _mutableScheduledParametersInternal;
}

+ (AVMutableScheduledAudioParameters *)scheduledAudioParameters;

- (void)setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ?)arg2;
- (void)setVolume:(float)arg0 atTime:(struct ?)arg1;
- (AVMutableScheduledAudioParameters *)copyWithZone:(struct _NSZone *)arg0;

@end
