/* Runtime dump - CNContactPickerHostViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol>
{
    void * _addressBook;
    <CNContactPickerContentDelegate> * _delegate;
    <NSCopying> * _currentRequestIdentifier;
    NSExtension * _extension;
}

@property (retain, nonatomic) <NSCopying> * currentRequestIdentifier;
@property (retain, nonatomic) NSExtension * extension;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak) <CNContactPickerContentDelegate> * delegate;
@property void * addressBook;

+ (char)getViewController:(BRController *)arg0;
+ (CNContactPickerHostViewController *)contactPickerExtension;
+ (NSString *)contextForIdentifier:(NSString *)arg0;

- (void)setupWithOptions:(NSDictionary *)arg0 readyBlock:(id /* block */)arg1;
- (void)pickerDidCancel;
- (void)pickerDidSelectContactWithRecordID:(int)arg0 vCardData:(NSData *)arg1 propertyKey:(NSString *)arg2 propertyIdentifier:(int)arg3;
- (void)setCurrentRequestIdentifier:(<NSCopying> *)arg0;
- (<NSCopying> *)currentRequestIdentifier;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (void)setDelegate:(<CNContactPickerContentDelegate> *)arg0;
- (<CNContactPickerContentDelegate> *)delegate;
- (void)invalidate;
- (void)setExtension:(NSExtension *)arg0;
- (NSExtension *)extension;
- (void).cxx_destruct;
- (void *)addressBook;

@end
