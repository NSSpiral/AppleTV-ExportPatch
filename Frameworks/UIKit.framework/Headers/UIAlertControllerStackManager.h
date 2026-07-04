/* Runtime dump - UIAlertControllerStackManager
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray * _alertControllerStack;
    NSMutableArray * _hiddenAlertControllers;
}

+ (UIAlertControllerStackManager *)sharedStackManager;

- (UIAlertControllerStackManager *)retain;
- (void)release;
- (void)dealloc;
- (UIAlertControllerStackManager *)init;
- (UIAlertControllerStackManager *)autorelease;
- (void)_alertControllerWillAppear:(id)arg0;
- (void)_alertControllerDidAppear:(id)arg0;
- (void)_alertControllerWillDisappear:(id)arg0;
- (void)_alertControllerDidDisappear:(id)arg0;
- (void)_showHiddenStackedAlertControllers;
- (void)_hideStackedAlertControllers;
- (char)_alertControllerShouldBeTrackedInStack:(id)arg0;
- (void)_willShowAlertController:(BRController *)arg0;
- (void)_addAlertControllerToStack:(id)arg0;
- (void)_willHideAlertController:(BRController *)arg0;
- (void)_removeAlertControllerFromStack:(id)arg0;
- (void)_didHideAlertController:(BRController *)arg0;
- (void)_displayedAlertControllersChanged;
- (id)_topAlertControllerInStack;
- (int)_alertControllerStackCount;
- (void)_setHasAlertControllers:(char)arg0;

@end
