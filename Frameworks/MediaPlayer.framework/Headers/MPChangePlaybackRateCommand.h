/* Runtime dump - MPChangePlaybackRateCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangePlaybackRateCommand : MPRemoteCommand
{
    NSArray * _supportedPlaybackRates;
}

@property (copy, nonatomic) NSArray * supportedPlaybackRates;

- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setSupportedPlaybackRates:(NSArray *)arg0;
- (NSArray *)supportedPlaybackRates;
- (void).cxx_destruct;

@end
