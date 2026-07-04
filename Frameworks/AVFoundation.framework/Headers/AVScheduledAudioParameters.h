/* Runtime dump - AVScheduledAudioParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying>
{
    AVScheduledAudioParametersInternal * _scheduledParametersInternal;
}

@property (copy, nonatomic) NSArray * ramps;

- (id)_audioVolumeCurve;
- (NSString *)_volumeCurveAsString;
- (void)_setVolumeRampFromStartVolume:(float)arg0 toEndVolume:(float)arg1 timeRange:(struct ?)arg2;
- (char)getVolumeRampForTime:(struct ?)arg0 startVolume:(float *)arg1 endVolume:(float *)arg2 timeRange:(struct ? *)arg3;
- (void)_setRamps:(id)arg0;
- (NSArray *)_ramps;
- (void)dealloc;
- (AVScheduledAudioParameters *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AVScheduledAudioParameters *)copyWithZone:(struct _NSZone *)arg0;
- (AVScheduledAudioParameters *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
