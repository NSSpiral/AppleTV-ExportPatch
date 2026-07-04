/* Runtime dump - SettingsRestoreController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSWUDownloadController.h>
@interface SettingsRestoreController : ATVSWUDownloadController

- (void)startOperation;
- (void)stopOperation;
- (SettingsRestoreController *)init;
- (void)cancelOperation;

@end
