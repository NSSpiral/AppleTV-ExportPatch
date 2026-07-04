/* Runtime dump - MPStoreAVPlayerItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAVPlayerItem : AVPlayerItem
{
    id _deallocationHandler;
}

@property (copy, nonatomic) id deallocationHandler;

- (void)setDeallocationHandler:(id /* block */)arg0;
- (id /* block */)deallocationHandler;
- (void)dealloc;
- (void).cxx_destruct;

@end
