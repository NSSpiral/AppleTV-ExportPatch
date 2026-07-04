/* Runtime dump - MPQueryPlaybackContext
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueryPlaybackContext : MPPlaybackContext
{
    MPMediaQuery * _query;
}

@property (readonly, nonatomic) MPMediaQuery * query;

+ (Class)queueFeederClass;

- (NSArray *)descriptionComponents;
- (MPMediaQuery *)query;
- (void).cxx_destruct;
- (MPQueryPlaybackContext *)initWithQuery:(MPMediaQuery *)arg0;

@end
