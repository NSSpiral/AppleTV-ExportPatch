/* Runtime dump - UIMovieScrubberTrackOverlayView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMovieScrubberTrackOverlayView : UIView
{
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView * _leftFillView;
    UIImageView * _rightFillView;
    unsigned int _editingHandle;
    id _editing;
    id _zoomed;
}

- (UIMovieScrubberTrackOverlayView *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setValue:(double)arg0;
- (void)setEditing:(char)arg0;
- (void)setMinimumValue:(double)arg0;
- (void)setMaximumValue:(double)arg0;
- (void)animateFillFramesAway;
- (void)setStartValue:(double)arg0;
- (void)setEditingHandle:(int)arg0;
- (void)setEndValue:(double)arg0;
- (void)setIsZoomed:(char)arg0;
- (void)_clampValueAndLayout;
- (void)_updateLeftFill;
- (void)_updateRightFill;

@end
