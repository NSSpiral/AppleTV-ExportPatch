/* Runtime dump - BRMediaParadeLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRMediaParadeLayer : BRControl
{
    struct CGSize _animationBounds;
    struct CGSize _maxImageBounds;
    char _paused;
}

- (void)layoutSubcontrols;
- (long)maxImages;
- (UIImage *)_addLayerForImage:(UIImage *)arg0;
- (void)_updateAnimations;
- (void)_updateKeyframes;
- (void)_updateAnimationForImageLayer:(id)arg0 withTimeOffset:(double)arg1;
- (BRMediaParadeLayer *)init;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)setPaused:(char)arg0;
- (void)setImages:(NSArray *)arg0;
- (char)paused;
- (id /* <BRMediaProvider> */)provider;
- (void)setProvider:(NSObject *)arg0;

@end
