/* Runtime dump - UIWebTextRangeView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebTextRangeView : UIView
{
    UIView<UITextInput> * m_container;
    NSArray * _rects;
    NSMutableArray * _rectViews;
    UIWebDragDotView * _startDot;
    UIWebDragDotView * _endDot;
    char _magnifying;
}

@property (readonly, nonatomic) UIView<UITextInput> * container;
@property (copy, nonatomic) NSArray * rects;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)removeFromSuperview;
- (UIView<UITextInput> *)container;
- (void)setRects:(NSArray *)arg0;
- (NSArray *)rects;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (struct CGRect)startEdge;
- (struct CGRect)endEdge;
- (void)updateRectViews;
- (struct CGRect)boundingRect;
- (void)geometryChanged;
- (char)startIsHorizontal;
- (char)endIsHorizontal;
- (UIWebTextRangeView *)initWithFrame:(struct CGRect)arg0 textContainer:(struct CGSize)arg1;
- (struct CGRect)rectAtIndex:(NSObject *)arg0;
- (struct CGPoint)endCorner;
- (struct CGPoint)startCorner;
- (void)updateDragDots;
- (NSObject *)rectViewAtIndex:(int)arg0;

@end
