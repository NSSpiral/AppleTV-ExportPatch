/* Runtime dump - MPAudioVideoRoutingViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingViewController : UIViewController
{
    UINavigationController * _navigationController;
    MPAudioVideoRoutingTableViewController * _tableViewController;
    <MPAudioVideoRoutingViewControllerDelegate> * _delegate;
}

@property (weak, nonatomic) <MPAudioVideoRoutingViewControllerDelegate> * delegate;

+ (char)hasWirelessDisplayRoutes;

- (void)_doneAction:(NSObject *)arg0;
- (void)setDelegate:(<MPAudioVideoRoutingViewControllerDelegate> *)arg0;
- (MPAudioVideoRoutingViewController *)init;
- (<MPAudioVideoRoutingViewControllerDelegate> *)delegate;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
