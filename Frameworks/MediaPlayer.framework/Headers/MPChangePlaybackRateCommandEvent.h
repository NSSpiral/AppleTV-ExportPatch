/* Runtime dump - MPChangePlaybackRateCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangePlaybackRateCommandEvent : MPRemoteCommandEvent
{
    float _playbackRate;
}

@property (readonly, nonatomic) float playbackRate;

- (float)playbackRate;
- (MPChangePlaybackRateCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;

@end
