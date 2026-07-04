/* Runtime dump - UIKeyboardSyntheticTouch
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSyntheticTouch : NSObject
{
    double timestamp;
    int phase;
    unsigned int tapCount;
    UIWindow * window;
    struct CGPoint locationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
}

@property (nonatomic) double timestamp;
@property (nonatomic) int phase;
@property (nonatomic) unsigned int tapCount;
@property (retain, nonatomic) UIWindow * window;
@property (nonatomic) struct CGPoint locationInWindow;
@property (readonly, nonatomic) unsigned char _pathIndex;
@property (readonly, nonatomic) unsigned char _pathIdentity;
@property (nonatomic) float _pathMajorRadius;

+ (NSObject *)syntheticTouchWithPoint:(struct CGPoint)arg0 timestamp:(double)arg1 window:(UIWindow *)arg2;

- (UIWindow *)window;
- (double)timestamp;
- (struct CGPoint)locationInView:(struct CGPoint)arg0;
- (void)setWindow:(UIWindow *)arg0;
- (int)phase;
- (void)setTapCount:(unsigned int)arg0;
- (void)setPhase:(int)arg0;
- (void)setTimestamp:(double)arg0;
- (unsigned char)_pathIndex;
- (void)_setLocationInWindow:(struct CGPoint)arg0 resetPrevious:(char)arg1;
- (struct CGPoint)previousLocationInView:(struct CGPoint)arg0;
- (unsigned int)tapCount;
- (float)_pathMajorRadius;
- (unsigned char)_pathIdentity;
- (struct CGPoint)locationInWindow;
- (UIKeyboardSyntheticTouch *)initWithPoint:(struct CGPoint)arg0 timestamp:(double)arg1 window:(UIWindow *)arg2;
- (void)setLocationInWindow:(struct CGPoint)arg0;
- (struct CGPoint)getLocationInWindow;
- (void)set_pathMajorRadius:(float)arg0;

@end
