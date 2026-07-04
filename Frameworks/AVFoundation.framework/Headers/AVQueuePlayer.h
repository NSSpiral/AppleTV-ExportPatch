/* Runtime dump - AVQueuePlayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVQueuePlayer : AVPlayer
{
    AVQueuePlayerInternal * _queuePlayer;
}

+ (NSURL *)playerWithURL:(NSString *)arg0;
+ (AVPlayer *)playerWithPlayerItem:(AVPlayerInternal *)arg0;
+ (AVQueuePlayer *)queuePlayerWithItems:(NSArray *)arg0;
+ (void)initialize;

- (int)_defaultActionAtItemEnd;
- (char)_shouldEnqueueModifications;
- (void)_enqueueModification:(id)arg0;
- (char)canInsertItem:(NSObject *)arg0 afterItem:(NSObject *)arg1;
- (void)beginModifications;
- (void)commitModifications;
- (void)setActionAtItemEnd:(int)arg0;
- (void)insertItem:(NSObject *)arg0 afterItem:(NSObject *)arg1;
- (void)removeAllItems;
- (void)advanceToNextItem;
- (void)dealloc;
- (AVQueuePlayer *)init;
- (NSArray *)items;
- (AVQueuePlayer *)initWithItems:(NSArray *)arg0;
- (void)removeItem:(void *)arg0;

@end
