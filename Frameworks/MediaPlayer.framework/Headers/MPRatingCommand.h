/* Runtime dump - MPRatingCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRatingCommand : MPRemoteCommand
{
    float _minimumRating;
    float _maximumRating;
}

@property (nonatomic) float minimumRating;
@property (nonatomic) float maximumRating;

- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setMinimumRating:(float)arg0;
- (void)setMaximumRating:(float)arg0;
- (float)minimumRating;
- (float)maximumRating;

@end
