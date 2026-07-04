/* Runtime dump - CAMTorchPatternController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTorchPatternController : NSObject
{
    char __performing;
    AVCaptureDevice * _captureDevice;
    CAMTorchPattern * __currentPattern;
    CADisplayLink * __displayLink;
    double _stepInterval;
    double __startTime;
}

@property (nonatomic) double stepInterval;
@property (retain, nonatomic) AVCaptureDevice * captureDevice;
@property (nonatomic) char _performing;
@property (readonly, nonatomic) CAMTorchPattern * _currentPattern;
@property (readonly, nonatomic) double _startTime;
@property (readonly, nonatomic) CADisplayLink * _displayLink;

- (CADisplayLink *)_displayLink;
- (CAMTorchPatternController *)init;
- (void).cxx_destruct;
- (double)_startTime;
- (AVCaptureDevice *)captureDevice;
- (void)setCaptureDevice:(AVCaptureDevice *)arg0;
- (void)doubleBlink;
- (void)blink;
- (void)stopPerformingPattern;
- (char)_performing;
- (void)_setPerforming:(char)arg0;
- (void)_resetTorchLevel;
- (void)displayLinkFired:(id)arg0;
- (void)_applyTorchLevel:(float)arg0;
- (void)startPerformingPattern:(NSObject *)arg0;
- (double)stepInterval;
- (void)setStepInterval:(double)arg0;
- (CAMTorchPattern *)_currentPattern;

@end
