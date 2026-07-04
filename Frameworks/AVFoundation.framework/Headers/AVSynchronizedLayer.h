/* Runtime dump - AVSynchronizedLayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSynchronizedLayer : CALayer
{
    AVSynchronizedLayerInternal * _syncLayer;
}

@property (retain, nonatomic) AVPlayerItem * playerItem;

+ (AVSynchronizedLayer *)synchronizedLayerWithPlayerItem:(AVPlayerItem *)arg0;

- (void)setPlayerItem:(AVPlayerItem *)arg0;
- (AVPlayerItem *)playerItem;
- (void)layerDidBecomeVisible:(char)arg0;
- (void)dealloc;
- (AVSynchronizedLayer *)init;
- (void)finalize;

@end
