/* Runtime dump - ATVRCCapture
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVRCButtonPatternSet;
@interface ATVRCCapture : NSObject
{
    int _captureState;
    NSMutableArray * _capturedEvents;
    ATVRCButtonPatternSet * _workingPatternSet;
    NSTimer * _discontinuityTrigger;
    NSDate * _captureStartTime;
}

- (void)_setCaptureState:(int)arg0;
- (void)_firstCommandEventReceived;
- (void)_resetDiscontinuityTrigger;
- (void)_clearDiscontinuityTrigger;
- (void)startCapture;
- (void)addEvent:(NSObject *)arg0;
- (int)captureState;
- (ATVRCButtonPatternSet *)workingPatternSet;
- (double)captureProgress;
- (void)_mainCaptureDoneTrigger:(id)arg0;
- (char)_identifyCommandPattern;
- (void)_discontinuityTrigger:(id)arg0;
- (double)_maxIntervalBetweenEvents;
- (void)dealloc;
- (ATVRCCapture *)init;
- (void)reset;

@end
