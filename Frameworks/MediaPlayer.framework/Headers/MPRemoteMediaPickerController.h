/* Runtime dump - MPRemoteMediaPickerController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteMediaPickerController : _UIRemoteViewController
{
    MPMediaPickerController * _mediaPickerController;
}

@property (weak, nonatomic) MPMediaPickerController * mediaPickerController;

+ (MPRemoteMediaPickerController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)setMediaPickerController:(MPMediaPickerController *)arg0;
- (void)remoteMediaPickerDidPickMediaItems:(NSArray *)arg0;
- (void)remoteMediaPickerDidCancel;
- (MPMediaPickerController *)mediaPickerController;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;
- (void).cxx_destruct;

@end
