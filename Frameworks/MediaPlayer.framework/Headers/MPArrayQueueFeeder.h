/* Runtime dump - MPArrayQueueFeeder
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArrayQueueFeeder : MPQueueFeeder
{
    NSArray * _queueItems;
}

@property (readonly, nonatomic) NSArray * items;

- (int)playbackMode;
- (unsigned int)indexOfItemWithIdentifier:(NSString *)arg0;
- (NSObject *)copyRawItemAtIndex:(unsigned int)arg0;
- (NSString *)playbackInfoForIdentifier:(NSString *)arg0;
- (NSObject *)pathAtIndex:(unsigned int)arg0;
- (NSObject *)identifierAtIndex:(unsigned int)arg0;
- (void)reloadWithPlaybackContext:(RadioPlaybackContext *)arg0 completionHandler:(id /* block */)arg1;
- (void)dealloc;
- (NSArray *)items;
- (MPArrayQueueFeeder *)initWithItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (unsigned int)itemCount;

@end
