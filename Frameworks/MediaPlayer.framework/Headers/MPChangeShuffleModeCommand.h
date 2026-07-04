/* Runtime dump - MPChangeShuffleModeCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeShuffleModeCommand : MPRemoteCommand
{
    unsigned int _currentShuffleType;
}

@property (nonatomic) unsigned int currentShuffleType;

- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setCurrentShuffleType:(unsigned int)arg0;
- (unsigned int)currentShuffleType;

@end
