/* Runtime dump - UIAssignToContactActivity
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImage * _image;
    ABPeoplePickerNavigationController * _peoplePicker;
    void * _person;
    UIImagePickerController * _imagePickerController;
}

@property (retain, nonatomic) UIImage * image;
@property (retain, nonatomic) ABPeoplePickerNavigationController * peoplePicker;
@property (nonatomic) void * person;
@property (retain, nonatomic) UIImagePickerController * imagePickerController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (void)_cleanup;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (NSString *)activityType;
- (UIImage *)_activityImage;
- (NSString *)activityTitle;
- (char)canPerformWithActivityItems:(NSArray *)arg0;
- (UIViewController *)activityViewController;
- (void)prepareWithActivityItems:(NSArray *)arg0;
- (NSObject *)_embeddedActivityViewController;
- (void)_willPresentAsFormSheet;
- (ABPeoplePickerNavigationController *)peoplePicker;
- (void)setPeoplePicker:(ABPeoplePickerNavigationController *)arg0;
- (UIImagePickerController *)imagePickerController;
- (void)setImagePickerController:(UIImagePickerController *)arg0;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg0;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void *)person;
- (void)setPerson:(void *)arg0;

@end
