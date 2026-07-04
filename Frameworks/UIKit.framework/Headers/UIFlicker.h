/* Runtime dump - UIFlicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFlicker : NSObject
{
    UIView * _target;
    struct CGPoint _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    struct CGPoint _offset;
}

- (void)setDelegate:(NSObject *)arg0;
- (UIFlicker *)init;
- (void)setDelay:(float)arg0;
- (void)setTarget:(UIView *)arg0;
- (void)setIterations:(int)arg0;
- (void)setOffset:(struct CGPoint)arg0;
- (struct CGPoint)offset;
- (void)setStartLocation:(struct CGPoint)arg0;
- (void)run;

@end
