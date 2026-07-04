/* Runtime dump - AAUIConfirmIdentityViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate>
{
    ACAccount * _account;
    UIScrollView * _scrollView;
    UIView * _contentView;
    UILabel * _titleLabel;
    UILabel * _descriptionLabel;
    UIView * _profilePhotoView;
    UILabel * _nameLabel;
    UILabel * _emailLabel;
    UIButton * _continueButton;
    UIButton * _useDifferentIDButton;
    AAUIProfilePictureStore * _profilePictureStore;
    UIImage * _newProfilePicture;
    NSValue * _newProfilePictureCropRect;
    UIImagePickerController * _imagePicker;
    <AAUIConfirmIdentityViewControllerDelegate> * _delegate;
}

@property (weak, nonatomic) <AAUIConfirmIdentityViewControllerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<AAUIConfirmIdentityViewControllerDelegate> *)arg0;
- (<AAUIConfirmIdentityViewControllerDelegate> *)delegate;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (void).cxx_destruct;
- (NSString *)pageTitle;
- (void)_photoWasTapped:(id)arg0;
- (void)_addPhotoButtonWasTapped:(id)arg0;
- (id)titleForContinuebutton;
- (void)continueButtonWasTapped:(id)arg0;
- (void)_useDifferentIDButtonWasTapped:(id)arg0;
- (float)_heightForText:(NSString *)arg0 width:(float)arg1;
- (void)_showImagePickerForAvailableSources;
- (char)shouldShowInviteeInstructions;
- (void)_showImageSourcePicker;
- (void)_presentImagePickerWithSourceType:(int)arg0;
- (void)_updateViewsInPhotoArea:(id)arg0;
- (AAUIConfirmIdentityViewController *)initWithGrandSlamSigner:(AAGrandSlamSigner *)arg0;
- (NSString *)instructions;

@end
