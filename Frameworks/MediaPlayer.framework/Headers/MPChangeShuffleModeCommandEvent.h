/* Runtime dump - MPChangeShuffleModeCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent
{
    unsigned int _shuffleType;
}

@property (readonly, nonatomic) unsigned int shuffleType;

- (unsigned int)shuffleType;
- (MPChangeShuffleModeCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;

@end
