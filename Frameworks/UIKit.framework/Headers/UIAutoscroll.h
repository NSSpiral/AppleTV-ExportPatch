/* Runtime dump - UIAutoscroll
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutoscroll : NSObject
{
    id m_target;
    struct CGPoint m_point;
    UIView<UIAutoscrollContainer> * m_scrollContainer;
    int m_directions;
    double m_repeatInterval;
    NSTimer * m_timer;
    unsigned int m_count;
    char m_active;
}

@property (retain, nonatomic) id target;
@property (retain, nonatomic) UIView<UIAutoscrollContainer> * scrollContainer;
@property (nonatomic) struct CGPoint point;
@property (nonatomic) int directions;
@property (nonatomic) double repeatInterval;
@property (nonatomic) unsigned int count;
@property (nonatomic) char active;

- (void)dealloc;
- (unsigned int)count;
- (void)invalidate;
- (void)setTarget:(NSObject *)arg0;
- (void)setRepeatInterval:(double)arg0;
- (NSObject *)target;
- (void)setCount:(unsigned int)arg0;
- (char)active;
- (char)startAutoscroll:(struct CGPoint)arg0 scrollContainer:(UIView<UIAutoscrollContainer> *)arg1 point:(struct CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4;
- (int)directions;
- (struct CGPoint)point;
- (void)timerFired:(id)arg0;
- (void)setActive:(char)arg0;
- (UIView<UIAutoscrollContainer> *)scrollContainer;
- (double)repeatInterval;
- (void)setPoint:(struct CGPoint)arg0;
- (void)setScrollContainer:(UIView<UIAutoscrollContainer> *)arg0;
- (void)setDirections:(int)arg0;

@end
