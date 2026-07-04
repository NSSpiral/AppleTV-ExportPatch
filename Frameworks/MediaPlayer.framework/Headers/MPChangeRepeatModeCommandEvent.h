/* Runtime dump - MPChangeRepeatModeCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent
{
    unsigned int _repeatType;
}

@property (readonly, nonatomic) unsigned int repeatType;

- (unsigned int)repeatType;
- (MPChangeRepeatModeCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;

@end
