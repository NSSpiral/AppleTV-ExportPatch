/* Runtime dump - UISelectionGrabberDot
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISelectionGrabberDot : UIView
{
    UISelectionGrabber * m_grabber;
}

@property (nonatomic) UISelectionGrabber * grabber;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (UISelectionGrabber *)grabber;
- (UISelectionGrabberDot *)initWithFrame:(struct CGRect)arg0 container:(struct CGSize)arg1;
- (void)setGrabber:(UISelectionGrabber *)arg0;

@end
