/* Runtime dump - PLUIEditVideoViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSDictionary * _options;
    UIImagePickerController * _imagePicker;
    UINavigationItem * _navItem;
    id _delegate;
    Class _viewClass;
    unsigned int _canCreateMetadata;
    char _parentInPopoverException;
}

@property (nonatomic) char parentInPopoverException;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (UINavigationItem *)navigationItem;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (char)_displaysFullScreen;
- (PLUIEditVideoViewController *)initWithProperties:(NSDictionary *)arg0;
- (float)videoViewScrubberYOrigin:(PLVideoView *)arg0 forOrientation:(int)arg1;
- (void)videoViewPlaybackDidFail:(PLVideoView *)arg0;
- (char)videoViewCanCreateMetadata:(PLVideoView *)arg0;
- (void)videoRemakerDidEndRemaking:(id)arg0 temporaryPath:(NSString *)arg1;
- (int)cropOverlayMode;
- (struct CGRect)previewFrame;
- (Class)_viewClass;
- (NSObject *)uiipc_imagePickerController;
- (NSDictionary *)uiipc_imagePickerOptions;
- (void)didChooseVideoAtURL:(NSURL *)arg0 options:(NSDictionary *)arg1;
- (NSString *)_trimMessage;
- (void)setImagePickerOptions:(NSDictionary *)arg0;
- (char)_editingForThirdParty;
- (void)_cancelTrim:(id)arg0;
- (void)_trimVideo:(id)arg0;
- (void)_setupNavigationItemAndTrimTitle:(NSString *)arg0;
- (void)setParentInPopoverException:(char)arg0;
- (char)parentInPopoverException;
- (PLUIEditVideoViewController *)initWithPhoto:(UIImage *)arg0 trimTitle:(NSString *)arg1;
- (PLUIEditVideoViewController *)initWithVideoURL:(NSURL *)arg0 trimTitle:(NSString *)arg1;
- (void)setViewClass:(Class)arg0;

@end
