/* Runtime dump - UISnapshotModalViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISnapshotModalViewController : UIViewController
{
    int _interfaceOrientation;
    UIViewController * _disappearingViewController;
    UINavigationController * _parentController;
}

@property (retain, nonatomic) UIViewController * disappearingViewController;

- (void)dealloc;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (UIViewController *)disappearingViewController;
- (UISnapshotModalViewController *)initWithInterfaceOrientation:(int)arg0;
- (void)setDisappearingViewController:(UIViewController *)arg0;

@end
