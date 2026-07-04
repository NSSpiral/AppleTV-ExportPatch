/* Runtime dump - CAMZoomSlider
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMZoomSlider : UISlider
{
    char _minimumAutozooming;
    char _maximumAutozooming;
    char __autozooming;
    <CAMZoomSliderDelegate> * _delegate;
    NSTimer * __visibilityTimer;
    UIImageView * __thumbImageView;
    UIView * __minTrackMaskView;
    UIView * __maxTrackMaskView;
}

@property (nonatomic) <CAMZoomSliderDelegate> * delegate;
@property (nonatomic) char minimumAutozooming;
@property (nonatomic) char maximumAutozooming;
@property (readonly, nonatomic) NSTimer * _visibilityTimer;
@property (nonatomic) char _autozooming;
@property (readonly, nonatomic) UIImageView * _thumbImageView;
@property (readonly, nonatomic) UIView * _minTrackMaskView;
@property (readonly, nonatomic) UIView * _maxTrackMaskView;

- (CAMZoomSlider *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (CAMZoomSlider *)initWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<CAMZoomSliderDelegate> *)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (<CAMZoomSliderDelegate> *)delegate;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (NSObject *)createThumbView;
- (void).cxx_destruct;
- (void)startVisibilityTimer;
- (void)stopVisibilityTimer;
- (void)makeVisible;
- (void)makeInvisible;
- (char)isMinimumAutozooming;
- (char)visibilityTimerIsValid;
- (UIView *)_minTrackMaskView;
- (UIView *)_maxTrackMaskView;
- (void)_commonCAMZoomSliderInitialization;
- (int)locationOfTouch:(id)arg0;
- (void)_setMinimumAutozooming:(char)arg0;
- (void)_setMaximumAutozooming:(char)arg0;
- (char)_isMinimumOrMaximumAutozooming;
- (char)isMaximumAutozooming;
- (void)_updateAutozooming;
- (void)_beginAutozooming;
- (void)_endAutozooming;
- (void)_hideZoomSlider:(id)arg0;
- (void)_postHideZoomSliderAnimation;
- (NSTimer *)_visibilityTimer;
- (char)_isAutozooming;
- (void)_setAutozooming:(char)arg0;
- (UIImageView *)_thumbImageView;

@end
