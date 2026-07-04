/* Runtime dump - MPMediaPickerController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPickerController : UIViewController
{
    _UIAsyncInvocation * _cancelRequest;
    id _modalContext;
    MPRemoteMediaPickerController * _remoteViewController;
    char _allowsPickingMultipleItems;
    char _showsCloudItems;
    unsigned int _mediaTypes;
    <MPMediaPickerControllerDelegate> * _delegate;
    NSString * _prompt;
}

@property (readonly, nonatomic) unsigned int mediaTypes;
@property (weak, nonatomic) <MPMediaPickerControllerDelegate> * delegate;
@property (nonatomic) char allowsPickingMultipleItems;
@property (nonatomic) char showsCloudItems;
@property (copy, nonatomic) NSString * prompt;

+ (void)preheatMediaPicker;

- (MPMediaPickerController *)initWithMediaTypes:(unsigned int)arg0;
- (void)_requestRemoteViewController;
- (void)_sendSettingsToService;
- (void)_pickerDidPickItems:(NSArray *)arg0;
- (void)_pickerDidCancel;
- (char)_hasAddedRemoteView;
- (NSObject *)_serviceViewControllerProxy;
- (void)_forceDismissal;
- (void)remoteMediaPickerDidPickMediaItems:(NSArray *)arg0;
- (void)remoteMediaPickerDidCancel;
- (char)allowsPickingMultipleItems;
- (void)setAllowsPickingMultipleItems:(char)arg0;
- (char)showsCloudItems;
- (void)setShowsCloudItems:(char)arg0;
- (void)_resetRemoteViewController;
- (void)dealloc;
- (void)setDelegate:(<MPMediaPickerControllerDelegate> *)arg0;
- (MPMediaPickerController *)init;
- (<MPMediaPickerControllerDelegate> *)delegate;
- (NSString *)prompt;
- (void)setPrompt:(NSString *)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(BRController *)arg0;
- (void)viewDidAppear:(char)arg0;
- (unsigned int)mediaTypes;
- (void).cxx_destruct;
- (void)_addRemoteView;

@end
