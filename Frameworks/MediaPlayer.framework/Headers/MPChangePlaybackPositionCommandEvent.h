/* Runtime dump - MPChangePlaybackPositionCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent
{
    double _positionTime;
}

@property (readonly, nonatomic) double positionTime;

- (MPChangePlaybackPositionCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (double)positionTime;

@end
