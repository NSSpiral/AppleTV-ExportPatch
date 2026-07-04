/* Runtime dump - UITwoSidedAlertController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITwoSidedAlertController : NSObject
{
    UIAlertView * _front;
    UIAlertView * _back;
    UIAlertView * _currentAlert;
    id _delegate;
}

- (void)show;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)alertViewCancel:(UIAlertView *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)dismiss;
- (void)didPresentAlertView:(NSObject *)arg0;
- (id)createFrontAlert;
- (id)createBackAlert;
- (id)frontAlert;
- (id)backAlert;
- (void)flip;
- (void)frontAlertClickedButtonAtIndex:(int)arg0;
- (void)backAlertClickedButtonAtIndex:(int)arg0;
- (void)alertSheet:(UIAlertView *)arg0 buttonClicked:(int)arg1;

@end
