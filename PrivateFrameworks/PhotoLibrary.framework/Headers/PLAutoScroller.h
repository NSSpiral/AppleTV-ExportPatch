/* Runtime dump - PLAutoScroller
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAutoScroller : NSObject
{
    UIScrollView * _targetScrollView;
    struct CGPoint _targetPoint;
    float _thresholdDistance;
    NSTimer * _autoscrollTimer;
}

@property (nonatomic) struct CGPoint targetPoint;
@property (readonly) float thresholdDistance;

- (void)dealloc;
- (PLAutoScroller *)init;
- (void)_stopAutoscrollTimer;
- (struct CGPoint)targetPoint;
- (void)setTargetPoint:(struct CGPoint)arg0;
- (void)_updateAutoscrollTimer:(NSObject *)arg0;
- (PLAutoScroller *)initWithTargetScrollView:(UIScrollView *)arg0 thresholdDistance:(float)arg1;
- (void)stopAndInvalidate;
- (float)thresholdDistance;

@end
