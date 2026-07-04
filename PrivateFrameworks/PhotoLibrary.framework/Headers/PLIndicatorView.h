/* Runtime dump - PLIndicatorView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLIndicatorView : UIView
{
    double _timeout;
}

@property (nonatomic) double timeout;

- (PLIndicatorView *)initWithLocation:(struct CGPoint)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)didMoveToWindow;
- (char)isOpaque;
- (void)setTimeout:(double)arg0;
- (void)fadeOut:(id)arg0;
- (double)timeout;

@end
