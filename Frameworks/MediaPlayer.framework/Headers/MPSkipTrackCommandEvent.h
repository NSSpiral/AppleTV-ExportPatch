/* Runtime dump - MPSkipTrackCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent
{
    char _requestingDefermentToPlaybackQueuePosition;
}

@property (readonly, nonatomic) char requestingDefermentToPlaybackQueuePosition;

- (MPSkipTrackCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (char)isRequestingDefermentToPlaybackQueuePosition;

@end
