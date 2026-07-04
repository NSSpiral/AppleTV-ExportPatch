/* Runtime dump - MPSkipIntervalCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipIntervalCommand : MPRemoteCommand
{
    NSArray * _preferredIntervals;
}

@property (copy, nonatomic) NSArray * preferredIntervals;

- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setPreferredIntervals:(NSArray *)arg0;
- (NSArray *)preferredIntervals;
- (void).cxx_destruct;

@end
