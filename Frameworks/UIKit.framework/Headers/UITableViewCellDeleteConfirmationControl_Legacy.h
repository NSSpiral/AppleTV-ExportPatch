/* Runtime dump - UITableViewCellDeleteConfirmationControl_Legacy
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl
{
    char _visible;
    UITableViewCellDeleteConfirmationGestureRecognizer * _deleteConfirmationGesture;
}

@property (nonatomic) char visible;

+ (struct CGSize)defaultSizeForTitle:(NSString *)arg0;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (struct CGSize)defaultSize;
- (void)layoutSubviews;
- (UITableViewCellDeleteConfirmationControl_Legacy *)initWithTitle:(NSString *)arg0;
- (void)cancelTrackingWithEvent:(NSObject *)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (char)continueTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)setVisible:(char)arg0;
- (void)_confirmationAnimationDidEnd;
- (char)isVisible;
- (void)touchUpInside:(id)arg0;
- (void)touchUpOutside:(id)arg0;
- (void)cancelDeleteConfirmationWithGesture:(NSObject *)arg0;
- (void)setVisible:(char)arg0 animated:(char)arg1;

@end
