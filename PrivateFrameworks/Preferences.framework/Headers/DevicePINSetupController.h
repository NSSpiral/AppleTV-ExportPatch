/* Runtime dump - DevicePINSetupController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINSetupController : PSSetupController
{
    char _success;
}

- (char)success;
- (DevicePINSetupController *)init;
- (struct CGSize)preferredContentSize;
- (char)usePopupStyle;
- (char)popupStyleIsModal;
- (char)canBeShownFromSuspendedState;

@end
