/* Runtime dump - UIScrubberControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrubberControl : UIOldSliderControl
{
    id _sliderAvailableFill;
    double _duration;
    float _lastDisplayedWidth;
    float _maxTrackWidth;
    UIView * _elapsedTimeView;
    UIView * _remainingTimeView;
    id _delegate;
    double _trackingStartTime;
    struct CGPoint _lastUpdatedPoint;
    float _valueAvailable;
    id _didDrag;
    id _sentScrubbingStart;
    id _autoSizesToFitDuration;
    id _layoutTimeParts;
    id _remainingIsDuration;
    id _delegateDidEnterScrubbingState;
    id _delegateDidChangeScrubValue;
    id _delegateShouldBeginScrubbing;
    id _endingTracking;
    id _showKnob;
    id _largeKnob;
    id _rightCapIsDownloadCap;
    id _requireMomentaryDelay;
    id _showFullWidthComponents;
    id _alwaysShowAllComponentsForDuration;
    id _timeLayoutDisabledCount;
    id _timeLayoutSkippedLayout;
    id _timeLayoutSkippedForcedLayout;
    id _showTimeCentered;
    id _leftCapIsDownloadCap;
    id _allowsAnyValue;
    id _unused;
}

+ (char)allowLayeredFillForKnob;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (double)duration;
- (char)pointInside:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setDuration:(double)arg0;
- (struct CGRect)hitRect;
- (void)sizeToFit;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)_setValue:(float)arg0 andSendAction:(char)arg1;
- (void)setTimeColor:(UIColor *)arg0;
- (void)setTimeShadowColor:(UIColor *)arg0;
- (UIScrubberControl *)initWithFrame:(struct CGRect)arg0 maxTrackWidth:(struct CGSize)arg1 showTimes:(SAMovieMovieTheaterShowtimes *)arg2 knobStyle:(float)arg3;
- (NSObject *)createSliderKnobView;
- (void)_resetTimeFrames;
- (struct CGRect)_rectOfTrack;
- (UIImage *)imageForSliderPiece:(int)arg0;
- (struct ? *)metrics;
- (void)_updateTimes:(char)arg0;
- (struct CGRect)fillBounds;
- (void)drawSliderPiece:(int)arg0 inRect:(struct CGRect)arg1;
- (char)_notAllValueAvailable;
- (struct CGRect)sliderBounds;
- (void)_updateAvailableFill;
- (void)setValue:(float)arg0 animated:(char)arg1 animationCurve:(int)arg2;
- (char)pointInsideKnob:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)_sendDelegateDidEnterScrubbingState:(char)arg0;
- (float)scrubValue;
- (UIScrubberControl *)initWithFrame:(struct CGRect)arg0 maxTrackWidth:(struct CGSize)arg1 showTimes:(SAMovieMovieTheaterShowtimes *)arg2 showKnob:(float)arg3;
- (void)setPinTimeToOutsideEdges:(char)arg0;
- (void)setShowTimeCenteredInAvailableArea:(char)arg0;
- (double)requiredAutoUpdateDurationForDuration:(double)arg0;
- (char)pointInsideKnob:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setAllowsAnyValue:(char)arg0;
- (void)disableTimesLayout;
- (void)enableTimesLayout;
- (void)setShowFullWidthComponents:(char)arg0;
- (void)setShowDuration:(char)arg0;
- (void)setScrubbingRequiresMomentaryDelay:(char)arg0;
- (void)setValueAvailable:(float)arg0;

@end
