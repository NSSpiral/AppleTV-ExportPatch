/* Runtime dump - MPFeedbackCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFeedbackCommandEvent : MPRemoteCommandEvent
{
    char _negative;
}

@property (readonly, nonatomic) char negative;

- (MPFeedbackCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (char)isNegative;

@end
