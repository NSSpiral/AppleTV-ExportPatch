/* Runtime dump - UIKeyboardWipeGestureRecognizer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer
{
    NSMutableArray * _endPoints;
    UITouch * candidateEndpoint;
}

@property (retain, nonatomic) UITouch * candidateEndpoint;

- (void)dealloc;
- (UIKeyboardWipeGestureRecognizer *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)reset;
- (void)setCandidateEndpoint:(UITouch *)arg0;
- (UITouch *)candidateEndpoint;
- (char)segmentsLookLikeAWipe:(id)arg0;

@end
