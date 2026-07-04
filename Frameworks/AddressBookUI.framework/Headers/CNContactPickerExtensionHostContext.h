/* Runtime dump - CNContactPickerExtensionHostContext
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>
{
    CNContactPickerHostViewController * _viewController;
}

@property (weak, nonatomic) CNContactPickerHostViewController * viewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)_extensionAuxiliaryVendorProtocol;
+ (NSObject *)_extensionAuxiliaryHostProtocol;

- (void)setupWithOptions:(NSDictionary *)arg0 readyBlock:(id /* block */)arg1;
- (void)pickerDidCancel;
- (void)pickerDidSelectContactWithRecordID:(int)arg0 vCardData:(NSData *)arg1 propertyKey:(NSString *)arg2 propertyIdentifier:(int)arg3;
- (void)setViewController:(CNContactPickerHostViewController *)arg0;
- (CNContactPickerHostViewController *)viewController;
- (void).cxx_destruct;

@end
