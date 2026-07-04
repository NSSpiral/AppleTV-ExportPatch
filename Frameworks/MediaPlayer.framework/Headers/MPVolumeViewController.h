/* Runtime dump - MPVolumeViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeViewController : UIViewController
{
    MPVolumeView * _volumeView;
}

@property (readonly, nonatomic) MPVolumeView * volumeView;

- (MPVolumeView *)volumeView;
- (MPVolumeViewController *)init;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
