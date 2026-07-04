/* Runtime dump - MPDetailScrubController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPDetailScrubController : NSObject
{
    char _didBeginTracking;
    char _needsCommit;
    float _accumulatedDelta;
    struct CGPoint _previousLocationInView;
    struct CGPoint _beginLocationInView;
    struct CGPoint _lastCommittedLocationInView;
    float _currentValue;
    char _detailedScrubbingEnabled;
    char _isTracking;
    UIControl<MPDetailedScrubbing> * _scrubbingControl;
    <MPDetailScrubControllerDelegate> * _delegate;
    float _scrubbingVerticalRange;
    int _currentScrubSpeed;
    double _duration;
}

@property (weak, nonatomic) UIControl<MPDetailedScrubbing> * scrubbingControl;
@property (weak, nonatomic) <MPDetailScrubControllerDelegate> * delegate;
@property (nonatomic) double duration;
@property (nonatomic) float scrubbingVerticalRange;
@property (nonatomic) char detailedScrubbingEnabled;
@property (readonly, nonatomic) char durationAllowsForDetailedScrubbing;
@property (readonly, nonatomic) char isTracking;
@property (readonly, nonatomic) int currentScrubSpeed;

- (MPDetailScrubController *)initWithScrubbingControl:(UIControl<MPDetailedScrubbing> *)arg0;
- (void)setDetailedScrubbingEnabled:(char)arg0;
- (char)detailedScrubbingEnabled;
- (char)durationAllowsForDetailedScrubbing;
- (float)scaleForVerticalPosition:(float)arg0;
- (int)currentScrubSpeed;
- (void)_beginScrubbing;
- (float)_minimumScale;
- (float)_scaleForIdealValueForVerticalPosition:(float)arg0;
- (void)_commitValue:(float)arg0;
- (void)_endScrubbing;
- (UIControl<MPDetailedScrubbing> *)scrubbingControl;
- (void)setScrubbingControl:(UIControl<MPDetailedScrubbing> *)arg0;
- (float)scrubbingVerticalRange;
- (void)setScrubbingVerticalRange:(float)arg0;
- (void)setDelegate:(<MPDetailScrubControllerDelegate> *)arg0;
- (MPDetailScrubController *)init;
- (<MPDetailScrubControllerDelegate> *)delegate;
- (double)duration;
- (void)setDuration:(double)arg0;
- (char)isTracking;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void).cxx_destruct;

@end
