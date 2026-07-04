/* Runtime dump - UIFrameAnimation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFrameAnimation : UIAnimation
{
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    int _fieldsToChange;
}

- (void)setProgress:(float)arg0;
- (UIFrameAnimation *)initWithTarget:(NSObject *)arg0;
- (void)setStartFrame:(struct CGRect)arg0;
- (void)setEndFrame:(struct CGRect)arg0;
- (struct CGRect)endFrame;
- (void)setSignificantRectFields:(int)arg0;

@end
