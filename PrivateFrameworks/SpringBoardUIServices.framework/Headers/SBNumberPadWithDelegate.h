/* Runtime dump - SBNumberPadWithDelegate
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBNumberPadWithDelegate : TPNumberPad
{
    <SBNumberPadDelegate> * _delegate;
}

@property (nonatomic) <SBNumberPadDelegate> * delegate;

- (void)buttonDown:(id)arg0;
- (void)buttonUp:(id)arg0;
- (void)setDelegate:(<SBNumberPadDelegate> *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (<SBNumberPadDelegate> *)delegate;
- (NSObject *)buttonForPoint:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)buttonCancelled:(id)arg0;

@end
