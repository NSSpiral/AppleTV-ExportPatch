/* Runtime dump - UISelectionGrabber
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISelectionGrabber : UIView
{
    UISelectionGrabberDot * m_dotView;
    char m_isDotted;
    char m_activeFlattened;
    char m_alertFlattened;
    char m_navigationTransitionFlattened;
    char m_animating;
    int m_orientation;
    int _applicationDeactivationReason;
}

@property (nonatomic) char isDotted;
@property (nonatomic) char activeFlattened;
@property (nonatomic) char alertFlattened;
@property (nonatomic) char navigationTransitionFlattened;
@property (nonatomic) char animating;
@property (nonatomic) int orientation;
@property (readonly, nonatomic) UITextRangeView * hostView;

+ (UISelectionGrabber *)_grabberDot;

- (UISelectionGrabber *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setHidden:(char)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)removeFromSuperview;
- (int)orientation;
- (char)isRotating;
- (void)didMoveToSuperview;
- (void)setAnimating:(char)arg0;
- (void)setOrientation:(int)arg0;
- (char)animating;
- (NSObject *)_dotView;
- (char)autoscrolled;
- (void)updateDot;
- (void)setIsDotted:(char)arg0;
- (char)isScrolling;
- (char)inputViewIsChanging;
- (UITextRangeView *)hostView;
- (char)isPointedDown;
- (char)isPointedUp;
- (char)isPointedRight;
- (char)isPointedLeft;
- (char)isVertical;
- (void)mustFlattenForAlert:(id)arg0;
- (void)canExpandAfterAlert:(id)arg0;
- (void)saveDeactivationReason:(NSString *)arg0;
- (void)mustFlattenForResignActive:(id)arg0;
- (void)canExpandAfterBecomeActive:(id)arg0;
- (void)mustFlattenForNavigationTransition:(NSObject *)arg0;
- (void)canExpandAfterNavigationTransition:(NSObject *)arg0;
- (void)setAlertFlattened:(char)arg0;
- (void)setActiveFlattened:(char)arg0;
- (void)setNavigationTransitionFlattened:(char)arg0;
- (char)isDotted;
- (char)alertFlattened;
- (char)activeFlattened;
- (char)navigationTransitionFlattened;
- (char)dotIsVisbleInDocument:(struct CGRect)arg0;
- (char)clipDot:(struct CGRect)arg0;
- (char)isScaling;
- (char)scroller:(UIScrollView *)arg0 fullyContainSelectionRect:(struct CGRect)arg1;

@end
