/* Runtime dump - UIDocumentPickerExtensionViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController>
{
    unsigned int _documentPickerMode;
    NSURL * _originalURL;
    NSArray * _validTypes;
    NSString * _providerIdentifier;
    NSURL * _documentStorageURL;
}

@property (nonatomic) unsigned int documentPickerMode;
@property (copy, nonatomic) NSURL * originalURL;
@property (copy, nonatomic) NSArray * validTypes;
@property (copy, nonatomic) NSString * providerIdentifier;
@property (copy, nonatomic) NSURL * documentStorageURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSXPCInterface *)_exportedInterface;
+ (UIDocumentPickerExtensionViewController *)_remoteViewControllerInterface;

- (void)dealloc;
- (void)_setTintColor:(UIColor *)arg0;
- (void)_setPickableTypes:(NSArray *)arg0;
- (void)_setPickerMode:(unsigned int)arg0;
- (void)_setUploadURLWrapper:(NSObject *)arg0;
- (unsigned int)documentPickerMode;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
- (NSURL *)documentStorageURL;
- (void)_setUploadURL:(NSURL *)arg0;
- (void)_setDocumentStorageURL:(NSURL *)arg0;
- (void)_setProviderIdentifier:(NSString *)arg0;
- (void)prepareForPresentationInMode:(unsigned int)arg0;
- (void)dismissGrantingAccessToURL:(NSURL *)arg0;
- (void)prepareForDocumentSelectionInMode:(unsigned int)arg0;
- (NSURL *)originalURL;
- (NSArray *)validTypes;
- (NSString *)providerIdentifier;

@end
