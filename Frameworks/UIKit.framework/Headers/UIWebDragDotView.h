/* Runtime dump - UIWebDragDotView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebDragDotView : UIView
{
    UIColor * m_insertionPointColor;
    UIColor * m_selectionBarColor;
    UIImageView * m_dot;
    int m_orientation;
    struct CGRect m_stickFrame;
    struct CGRect m_dotFrame;
}

@property (nonatomic) char showsBall;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)isPointedDown;
- (char)isPointedUp;
- (char)isPointedRight;
- (char)isPointedLeft;
- (char)isVertical;
- (UIWebDragDotView *)initWithEdge:(struct CGRect)arg0 container:(struct CGSize)arg1 orientation:(CMDeviceOrientation *)arg2;
- (void)setEdge:(struct CGRect)arg0;
- (void)setShowsBall:(char)arg0;
- (struct CGRect)stickFrameForEdge:(id)arg0 withOverlap:(SEL)arg1;
- (char)showsBall;

@end
