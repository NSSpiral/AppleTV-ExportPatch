/* Runtime dump - MPSpecialSeekCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSpecialSeekCommandEvent : MPRemoteCommandEvent
{
    unsigned int _type;
}

@property (readonly, nonatomic) unsigned int type;

- (MPSpecialSeekCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (unsigned int)type;

@end
