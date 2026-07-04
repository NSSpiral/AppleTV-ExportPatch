/* Runtime dump - MPVolumeSettingsController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeSettingsController : UIViewController
{
    NSString * _audioCategory;
    UIAlertController * _alertController;
    UIWindow * _hostingWindow;
    UIWindow * _previousWindow;
}

@property (weak, nonatomic) UIWindow * hostingWindow;
@property (weak, nonatomic) UIWindow * previousWindow;

- (MPVolumeSettingsController *)initWithAudioCategory:(NSString *)arg0;
- (void)presentAlertControllerInWindow:(NSObject *)arg0;
- (void)dismissAlertController;
- (void)_keyWindowDidChange:(NSDictionary *)arg0;
- (void)_flip;
- (UIWindow *)hostingWindow;
- (void)setHostingWindow:(UIWindow *)arg0;
- (UIWindow *)previousWindow;
- (void)setPreviousWindow:(UIWindow *)arg0;
- (void)dealloc;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;

@end
