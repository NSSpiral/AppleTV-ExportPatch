/* Runtime dump - UICollectionViewAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewAnimation : NSObject
{
    UICollectionReusableView * _view;
    UICollectionViewLayoutAttributes * _finalLayoutAttributes;
    float _startFraction;
    float _endFraction;
    int _viewType;
    NSMutableArray * _completionHandlers;
    NSMutableArray * _startupHandlers;
    id _animationBlock;
    struct ? _collectionViewAnimationFlags;
}

@property (readonly, nonatomic) UICollectionReusableView * view;
@property (readonly, nonatomic) int viewType;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes * finalLayoutAttributes;
@property (readonly, nonatomic) float startFraction;
@property (readonly, nonatomic) float endFraction;
@property (readonly, nonatomic) char animateFromCurrentPosition;
@property (readonly, nonatomic) char deleteAfterAnimation;
@property (nonatomic) char rasterizeAfterAnimation;
@property (nonatomic) char resetRasterizationAfterAnimation;

- (void)dealloc;
- (NSString *)description;
- (UICollectionReusableView *)view;
- (float)startFraction;
- (float)endFraction;
- (char)animateFromCurrentPosition;
- (void)start;
- (UICollectionViewAnimation *)initWithView:(UICollectionReusableView *)arg0 viewType:(int)arg1 finalLayoutAttributes:(UICollectionViewLayoutAttributes *)arg2 startFraction:(float)arg3 endFraction:(float)arg4 animateFromCurrentPostion:(char)arg5 deleteAfterAnimation:(char)arg6 customAnimations:(id)arg7;
- (char)deleteAfterAnimation;
- (void)setRasterizeAfterAnimation:(char)arg0;
- (char)rasterizeAfterAnimation;
- (void)setResetRasterizationAfterAnimation:(char)arg0;
- (char)resetRasterizationAfterAnimation;
- (void)addCompletionHandler:(id /* block */)arg0;
- (void)addStartupHandler:(id /* block */)arg0;
- (int)viewType;
- (UICollectionViewLayoutAttributes *)finalLayoutAttributes;

@end
