/* Runtime dump - MPSeekCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSeekCommandEvent : MPRemoteCommandEvent
{
    unsigned int _type;
}

@property (readonly, nonatomic) unsigned int type;

- (MPSeekCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (unsigned int)type;

@end
