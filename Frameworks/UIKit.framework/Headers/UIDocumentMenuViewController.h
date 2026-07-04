/* Runtime dump - UIDocumentMenuViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIAlertControllerContaining>
{
    <UIDocumentMenuDelegate> * _weak_delegate;
    char _dismissDelegateCalled;
    NSMutableArray * _auxiliaryOptions;
    _UIDocumentPickerRemoteViewController * _remoteViewController;
    UIAlertController * _alertController;
    unsigned int _documentPickerMode;
    NSURL * _uploadURL;
}

@property (weak, nonatomic) <UIDocumentMenuDelegate> * delegate;
@property (retain, nonatomic) NSMutableArray * auxiliaryOptions;
@property (retain, nonatomic) _UIDocumentPickerRemoteViewController * remoteViewController;
@property (retain, nonatomic) UIAlertController * alertController;
@property (nonatomic) char dismissDelegateCalled;
@property (nonatomic) unsigned int documentPickerMode;
@property (copy, nonatomic) NSURL * uploadURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<UIDocumentMenuDelegate> *)arg0;
- (<UIDocumentMenuDelegate> *)delegate;
- (int)modalPresentationStyle;
- (void)loadView;
- (void)_setRemoteViewController:(BRController *)arg0;
- (void)_dismissViewController;
- (void)setModalPresentationStyle:(int)arg0;
- (_UIDocumentPickerRemoteViewController *)_remoteViewController;
- (void)setDocumentPickerMode:(unsigned int)arg0;
- (void)_commonInitWithCompletion:(id /* block */)arg0;
- (void)setUploadURL:(NSURL *)arg0;
- (unsigned int)documentPickerMode;
- (NSURL *)uploadURL;
- (UIDocumentMenuViewController *)initWithDocumentTypes:(NSArray *)arg0 inMode:(unsigned int)arg1;
- (UIDocumentMenuViewController *)initWithURL:(NSString *)arg0 inMode:(unsigned int)arg1;
- (void)_didSelectURL:(NSURL *)arg0;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(AVMediaSelectionOption *)arg0;
- (void)_stitchFileCreationAtURL:(NSURL *)arg0;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg0;
- (void)viewWillAppear:(char)arg0;
- (NSObject *)_presentationControllerForPresentedController:(BRController *)arg0 presentingController:(BRController *)arg1 sourceController:(BRController *)arg2;
- (char)_requiresCustomPresentationController;
- (NSObject *)_containedAlertController;
- (void)setAlertController:(UIAlertController *)arg0;
- (void)setAuxiliaryOptions:(NSMutableArray *)arg0;
- (NSMutableArray *)auxiliaryOptions;
- (UIAlertController *)alertController;
- (void)setDismissDelegateCalled:(char)arg0;
- (char)dismissDelegateCalled;
- (void)addOptionWithTitle:(NSString *)arg0 image:(UIImage *)arg1 order:(unsigned int)arg2 handler:(id /* block */)arg3;

@end
