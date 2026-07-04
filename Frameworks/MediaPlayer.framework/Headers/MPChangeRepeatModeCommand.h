/* Runtime dump - MPChangeRepeatModeCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeRepeatModeCommand : MPRemoteCommand
{
    unsigned int _currentRepeatType;
}

@property (nonatomic) unsigned int currentRepeatType;

- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setCurrentRepeatType:(unsigned int)arg0;
- (unsigned int)currentRepeatType;

@end
