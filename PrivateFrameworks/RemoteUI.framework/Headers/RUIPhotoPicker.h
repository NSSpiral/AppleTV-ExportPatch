/* Runtime dump - RUIPhotoPicker
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImagePickerController * _imagePickerController;
    UIImage * _pickedImage;
    id _pickerCompletion;
}

@property (retain, nonatomic) UIImage * pickedImage;
@property (copy, nonatomic) id pickerCompletion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (void).cxx_destruct;
- (void)setPickerCompletion:(id /* block */)arg0;
- (void)setPickedImage:(UIImage *)arg0;
- (void)_dismissWithImage:(UIImage *)arg0;
- (void)pickImageWithParentController:(BRController *)arg0 completion:(id /* block */)arg1;
- (UIImage *)pickedImage;
- (id /* block */)pickerCompletion;

@end
