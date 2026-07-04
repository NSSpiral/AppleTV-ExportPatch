/* Runtime dump - MPArrayPlaybackContext
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArrayPlaybackContext : MPPlaybackContext
{
    NSArray * _items;
}

@property (readonly, nonatomic) NSArray * items;

+ (Class)queueFeederClass;

- (MPArrayPlaybackContext *)initWithArrayQueueItems:(NSArray *)arg0;
- (NSArray *)descriptionComponents;
- (NSArray *)items;
- (void).cxx_destruct;

@end
