/* Runtime dump - UIPanGestureVelocitySample
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPanGestureVelocitySample : NSObject
{
    struct CGPoint start;
    struct CGPoint end;
    double dt;
}

@property struct CGPoint start;
@property struct CGPoint end;
@property double dt;

- (struct CGPoint)start;
- (struct CGPoint)end;
- (void)setStart:(struct CGPoint)arg0;
- (void)setEnd:(struct CGPoint)arg0;
- (double)dt;
- (void)setDt:(double)arg0;

@end
