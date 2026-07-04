/* Runtime dump - PLSlalomRegionEditor
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlalomRegionEditor : UIControl
{
    UIImageView * _startHandleView;
    UIImageView * _endHandleView;
    UIImageView * _trackImageView;
    UIImageView * _trackSnapshotView;
    char _draggingStart;
    char _draggingEnd;
    float _touchOffset;
    char _zoomed;
    char _trackingZoom;
    struct CGPoint _touchLocationWhenTrackingZoomBegan;
    char _forceLayout;
    double _zoomMinValue;
    double _zoomMaxValue;
    char _zoomAnimating;
    <PLSlalomRegionEditorDelegate> * _delegate;
    float _trimHandleWidth;
    float _minValue;
    float _maxValue;
    float _startValue;
    float _endValue;
    double _zoomDelay;
    struct UIEdgeInsets _trackInsets;
}

@property (nonatomic) <PLSlalomRegionEditorDelegate> * delegate;
@property (nonatomic) struct UIEdgeInsets trackInsets;
@property (nonatomic) float trimHandleWidth;
@property (nonatomic) float minValue;
@property (nonatomic) float maxValue;
@property (nonatomic) float startValue;
@property (nonatomic) float endValue;
@property (nonatomic) double zoomDelay;
@property (nonatomic) char zoomAnimating;

- (PLSlalomRegionEditor *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<PLSlalomRegionEditorDelegate> *)arg0;
- (void)layoutSubviews;
- (<PLSlalomRegionEditorDelegate> *)delegate;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (void)setEnabled:(char)arg0;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (float)minValue;
- (void)setMaxValue:(float)arg0;
- (void)setMinValue:(float)arg0;
- (void)setStartValue:(float)arg0;
- (void)setEndValue:(float)arg0;
- (char)isZoomAnimating;
- (double)zoomDelay;
- (void)setZoomDelay:(double)arg0;
- (struct CGRect)_trackFrame;
- (float)startValue;
- (float)maxValue;
- (void)setZoomAnimating:(char)arg0;
- (void)setZoomMinValue:(double)arg0 maxValue:(double)arg1;
- (float)endValue;
- (UIImage *)_handleImage;
- (void)_updateTrack;
- (struct CGRect)_startHandleFrame;
- (struct CGRect)_endHandleFrame;
- (void)setStartValue:(float)arg0 notify:(char)arg1;
- (void)setEndValue:(float)arg0 notify:(char)arg1;
- (double)_zoomMinValue;
- (double)_zoomMaxValue;
- (struct CGRect)_handleFrameForValue:(id)arg0 isStart:(SEL)arg1;
- (float)_valueFromHandleFrame:(struct CGRect)arg0 isStart:(struct CGSize)arg1;
- (struct CGRect)_trackFrameNoZoom;
- (char)_isZoomed;
- (float)_trackScale;
- (float)_trimHandleWidth;
- (char)_isTouch:(UITouch *)arg0 inHandleIsStart:(char)arg1 outTouchOffset:(float *)arg2;
- (void)_beginTrackingZoomWithTouch:(UITouch *)arg0;
- (void)_updateSlidersWithTouch:(UITouch *)arg0;
- (void)_cancelZoomTrackingIfNeccessaryWithTouch:(UITouch *)arg0;
- (void)_stopTrackingAndSendControlEvents:(unsigned int)arg0;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (float)_valueFromStartHandleFrame:(struct CGRect)arg0;
- (float)_valueFromEndHandleFrame:(struct CGRect)arg0;
- (void)_zoomPressWasHeld;
- (id)_trackImageForZoom:(char)arg0;
- (void)setTrackInsets:(struct UIEdgeInsets)arg0;
- (void)_drawCurveWithFlatEndsFromX:(float)arg0 fromY:(float)arg1 toX:(float)arg2 toY:(float)arg3;
- (struct UIEdgeInsets)trackInsets;
- (float)trimHandleWidth;
- (void)setTrimHandleWidth:(float)arg0;

@end
