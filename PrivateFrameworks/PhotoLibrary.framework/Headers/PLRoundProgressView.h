/* Runtime dump - PLRoundProgressView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLRoundProgressView : UIView
{
    CAShapeLayer * _sliceLayer;
    CAShapeLayer * _circleLayer;
    struct CGPoint _pieCenter;
    float _pieRadius;
    NSTimer * _progressTimer;
    float _uiProgress;
    float _realProgress;
    float _increaseRate;
    NSDate * _prevUpdateTime;
    int _style;
}

@property (readonly, nonatomic) int style;

- (void)_setupSubviews;
- (PLRoundProgressView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (int)style;
- (void)setProgress:(float)arg0;
- (PLRoundProgressView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)resetProgress;
- (void)setPieRadius:(float)arg0;
- (void)setPieCenter:(struct CGPoint)arg0;
- (void)increaseUIProgress:(id)arg0;
- (float)toRadian:(float)arg0;
- (void)recalculateIncreaseProgress:(float)arg0 withTimeDiff:(double)arg1;
- (void)setInitialIncreaseRatePerFrame:(float)arg0;

@end
