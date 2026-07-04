/* Runtime dump - MPInsertIntoPlaybackQueueCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent
{
    int _insertionPosition;
    MPRemotePlaybackQueue * _playbackQueue;
}

@property (readonly, nonatomic) int insertionPosition;
@property (readonly, nonatomic) MPRemotePlaybackQueue * playbackQueue;

- (MPInsertIntoPlaybackQueueCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (MPRemotePlaybackQueue *)playbackQueue;
- (int)insertionPosition;
- (void).cxx_destruct;

@end
