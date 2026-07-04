/* Runtime dump - PLFilledActivityIndicator
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLFilledActivityIndicator : UIView
{
    UIActivityIndicatorView * _indicatorView;
}

- (PLFilledActivityIndicator *)initWithLocation:(struct CGPoint)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)didMoveToWindow;
- (char)isOpaque;
- (char)isAnimating;
- (void)stopAnimating;
- (void)startAnimatingAfterDelay:(double)arg0;

@end
