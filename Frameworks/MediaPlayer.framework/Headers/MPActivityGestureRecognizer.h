/* Runtime dump - MPActivityGestureRecognizer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPActivityGestureRecognizer : UIGestureRecognizer

- (void)_stopReportingOngoingActivity;
- (void)_reportOngoingActivity;
- (void)_touchesTerminated:(id)arg0 withEvent:(Event *)arg1;
- (MPActivityGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;

@end
