/* Runtime dump - MPRatingCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRatingCommandEvent : MPRemoteCommandEvent
{
    float _rating;
}

@property (readonly, nonatomic) float rating;

- (MPRatingCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (float)rating;

@end
