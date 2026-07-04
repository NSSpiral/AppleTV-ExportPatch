/* Runtime dump - PTSImagePickerViewController
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImagePickerViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PTSImageLoaderDelegate, UIPopoverControllerDelegate>
{
    UIImagePickerController * _photoLibraryPicker;
    NSMutableArray * _images;
    NSMutableArray * _filenames;
    PTSImageLoader * _imageLoader;
    char _doneLoading;
    id _completion;
    UIPopoverController * _popoverController;
    char _includePhotoLibrary;
}

@property (nonatomic) char includePhotoLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)dismissAnimated:(char)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (void).cxx_destruct;
- (PTSImagePickerViewController *)initWithResourcePath:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)setIncludePhotoLibrary:(char)arg0;
- (void)imageLoader:(PTSImageLoader *)arg0 didLoadImage:(UIImage *)arg1 forFilename:(NSString *)arg2;
- (void)imageLoaderDidFinishLoadingImages:(id)arg0;
- (char)includePhotoLibrary;

@end
