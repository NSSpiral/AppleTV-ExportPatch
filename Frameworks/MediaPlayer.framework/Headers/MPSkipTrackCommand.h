/* Runtime dump - MPSkipTrackCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommand : MPRemoteCommand
{
    struct ? _skipLimit;
}

@property (nonatomic) struct ? skipLimit;

- (struct ?)skipLimit;
- (void)setSkipLimit:(struct ?)arg0;
- (NSDictionary *)_mediaRemoteCommandInfoOptions;

@end
