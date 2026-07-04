/* Runtime dump - ABImagePickerController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABImagePickerController : ABContentController <UIModalViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, ABMultipleSourceImagePickerDelegate>
{
    char _hasExistingPhoto;
    char _allowsEditingExistingPhoto;
    char _canChoosePhoto;
    char _canChooseFromMultiplePhotos;
    char _confirmingDelete;
    char _applyImageChangesToAllPeople;
    UIImagePickerController * _imagePicker;
    NSArray * _people;
    NSArray * _writablePeople;
    NSDictionary * _animationContextDictionary;
    CAKeyframeAnimation * _bounceAnimation;
    UIPopoverController * _popoverPresenter;
    char _editingImage;
    <ABPersonImageDataDelegate> * _imageDataDelegate;
}

@property (nonatomic) <ABPersonImageDataDelegate> * imageDataDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (id)_createImagePicker;
- (ABImagePickerController *)initWithContentControllerDelegate:(QLServicePreviewContentController *)arg0 addressBook:(void *)arg1;
- (void)back:(char)arg0 save:(char)arg1;
- (char)canTakePhoto;
- (void)_tearDownImagePickerController;
- (void)releaseImagePicker;
- (NSObject *)popoverPresenterForViewController:(BRController *)arg0;
- (char)_hasMultipleWritablePeople;
- (void)_showImagePickerWithPriorConfirmation:(char)arg0;
- (NSObject *)_formatStringForSource:(void *)arg0 withSuffix:(char)arg1 useAbbreviatedStrings:(char)arg2;
- (void)addButtonForSource:(char)arg0 suffix:(int)arg1 name:(NSString *)arg2 indexInAllPeople:(int)arg3 toArray:(NSArray *)arg4;
- (NSObject *)_removePreviousSheet;
- (UIImage *)buttonTitlesAndIndicesForPickingPreferredPhoto;
- (void)_showActionSheet:(NSObject *)arg0 previousOwner:(NSObject *)arg1;
- (void)doEditPhoto;
- (NSData *)_createImagePickerForEditingImageData:(NSData *)arg0 shouldSaveFullSize:(char)arg1 cropRect:(struct CGRect)arg2;
- (void)animationDidStopAfterDelay:(id)arg0;
- (NSObject *)ab_windowContentViewForView:(NSObject *)arg0;
- (void)cancelPicker;
- (void)deletePhoto:(char)arg0;
- (void)takePhoto;
- (void)delayedPerform:(SEL)arg0;
- (void)choosePhoto;
- (void)chooseExisting;
- (void)usePhotoFromPerson:(NSObject *)arg0;
- (void)delayedPerform:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)editPhoto;
- (void)deletePhotoNoConfirm;
- (void)multipleSourcePicker:(id)arg0 didSelectPerson:(NSObject *)arg1;
- (void)multipleSourcePickerDidSelectPhotoPicker:(id)arg0;
- (void)setImageDataDelegate:(<ABPersonImageDataDelegate> *)arg0;
- (char)hasMultipleActions;
- (<ABPersonImageDataDelegate> *)imageDataDelegate;
- (void)dealloc;
- (void)reload;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)suspend;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (UIView *)contentView;
- (void)orderOut:(char)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)resume;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;

@end
