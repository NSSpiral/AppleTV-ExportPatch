/* Runtime dump - ABMultipleImagePickerViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultipleImagePickerViewController : UITableViewController
{
    NSMutableArray * _imageCellData;
    unsigned int _selectedImageIndex;
    <ABMultipleSourceImagePickerDelegate> * _delegate;
}

@property (nonatomic) <ABMultipleSourceImagePickerDelegate> * delegate;

- (void)addImageData:(NSData *)arg0 title:(NSString *)arg1 isSelectedImage:(char)arg2 person:(void *)arg3;
- (void)dealloc;
- (void)setDelegate:(<ABMultipleSourceImagePickerDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (<ABMultipleSourceImagePickerDelegate> *)delegate;
- (ABMultipleImagePickerViewController *)initWithStyle:(int)arg0;
- (void)viewDidLoad;

@end
