/* Runtime dump - MPSetPlaybackQueueCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent
{
    MPRemotePlaybackQueue * _playbackQueue;
}

@property (readonly, nonatomic) MPRemotePlaybackQueue * playbackQueue;

- (MPSetPlaybackQueueCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (MPRemotePlaybackQueue *)playbackQueue;
- (void).cxx_destruct;

@end
