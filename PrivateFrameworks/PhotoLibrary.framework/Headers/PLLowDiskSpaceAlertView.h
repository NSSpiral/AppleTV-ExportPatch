/* Runtime dump - PLLowDiskSpaceAlertView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLLowDiskSpaceAlertView : UIAlertView

+ (void)showUsageSettings;

- (PLLowDiskSpaceAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 delegate:(NSObject *)arg2 cancelButtonTitle:(NSString *)arg3 otherButtonTitles:(id)arg4;
- (PLLowDiskSpaceAlertView *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 showSettingsButton:(char)arg2 delegate:(NSObject *)arg3;

@end
