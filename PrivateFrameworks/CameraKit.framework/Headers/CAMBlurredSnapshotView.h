/* Runtime dump - CAMBlurredSnapshotView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMBlurredSnapshotView : UIView
{
    char _blurred;
    char _dimmed;
    char __supportsBlur;
    int _style;
    UIView * _snapshotView;
    UIView * __lowQualityBlurView;
    UIView * __dimmingView;
    struct CGRect _targetFrame;
}

@property (nonatomic) int style;
@property (readonly, nonatomic) UIView * snapshotView;
@property (nonatomic) char blurred;
@property (nonatomic) char dimmed;
@property (nonatomic) struct CGRect targetFrame;
@property (readonly, nonatomic) char _supportsBlur;
@property (readonly, nonatomic) UIView * _lowQualityBlurView;
@property (readonly, nonatomic) UIView * _dimmingView;

- (UIView *)snapshotView;
- (int)style;
- (void)setStyle:(int)arg0;
- (UIView *)_dimmingView;
- (CAMBlurredSnapshotView *)initWithView:(WKContentView *)arg0;
- (void).cxx_destruct;
- (void)setTargetFrame:(struct CGRect)arg0;
- (struct CGRect)targetFrame;
- (void)setBlurred:(char)arg0 animated:(char)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setDimmed:(char)arg0 animated:(char)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_applySnapshotBlurAnimated:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_removeSnapshotBlurAnimated:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_applyLowQualityBlurAnimated:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_removeLowQualityBlurAnimated:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_applySnapshotDimAnimated:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_removeSnapshotDimAnimated:(char)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)_setupBlurOnSnapshot;
- (void)_prepareForApplyingBlurAnimation:(char)arg0 inputRadiusAmount:(float *)arg1 inputRadiusDuration:(double *)arg2 inputRadiusDelay:(double *)arg3 inputRadiusTimingFunction:(id *)arg4 opacityAmount:(float *)arg5 opacityDuration:(double *)arg6 opacityDelay:(double *)arg7 opacityTimingFunction:(id *)arg8;
- (UIView *)_lowQualityBlurView;
- (void)_setupLowQualityBlurOnSnapshot;
- (void)_prepareForApplyingLowQualityBlurAnimation:(char)arg0 opacityAmount:(float *)arg1 opacityDuration:(double *)arg2 opacityDelay:(double *)arg3 opacityTimingFunction:(id *)arg4 targetView:(id *)arg5;
- (void)_setupDimOnSnapshot;
- (void)setBlurred:(char)arg0;
- (void)setDimmed:(char)arg0;
- (char)blurred;
- (char)dimmed;
- (char)_supportsBlur;

@end
