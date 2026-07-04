/* Runtime dump - UIDocumentPickerViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining>
{
    <UIDocumentPickerDelegate> * _weak_delegate;
    unsigned int _documentPickerMode;
    _UIDocumentPickerRemoteViewController * _remoteViewController;
    _UIRemoteViewService * _remoteViewService;
    NSURL * _uploadURL;
    NSMutableArray * _stitchingTokens;
}

@property (weak, nonatomic) <UIDocumentPickerDelegate> * delegate;
@property (nonatomic) unsigned int documentPickerMode;
@property (retain, nonatomic) _UIDocumentPickerRemoteViewController * remoteViewController;
@property (retain, nonatomic) _UIRemoteViewService * remoteViewService;
@property (copy, nonatomic) NSURL * uploadURL;
@property (retain, nonatomic) NSMutableArray * stitchingTokens;

+ (UIImage *)image;
+ (NSString *)_extension;
+ (NSString *)_identifier;
+ (NSString *)localizedName;
+ (NSArray *)supportedContentTypes;
+ (unsigned int)supportedModes;

- (void)dealloc;
- (void)setDelegate:(<UIDocumentPickerDelegate> *)arg0;
- (<UIDocumentPickerDelegate> *)delegate;
- (void)setStitchingTokens:(NSMutableArray *)arg0;
- (void)_setRemoteViewController:(BRController *)arg0;
- (void)_dismissViewController;
- (_UIDocumentPickerRemoteViewController *)_remoteViewController;
- (NSMutableArray *)stitchingTokens;
- (void)_finishStitching;
- (void)_callDelegateWithSelectedURLAndDismiss:(id)arg0;
- (void)setDocumentPickerMode:(unsigned int)arg0;
- (void)_commonInitWithCompletion:(id /* block */)arg0;
- (void)setUploadURL:(NSURL *)arg0;
- (void)_prepareForDeletionIfNecessary;
- (unsigned int)documentPickerMode;
- (NSURL *)uploadURL;
- (UIDocumentPickerViewController *)initWithDocumentTypes:(NSArray *)arg0 inMode:(unsigned int)arg1;
- (UIDocumentPickerViewController *)initWithURL:(NSString *)arg0 inMode:(unsigned int)arg1;
- (void)_didSelectURL:(NSURL *)arg0;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(AVMediaSelectionOption *)arg0;
- (void)_stitchFileCreationAtURL:(NSURL *)arg0;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg0;
- (void)addAuxiliaryOptionWithTitle:(NSString *)arg0 image:(UIImage *)arg1 identifier:(NSString *)arg2;
- (NSObject *)_initWithRemoteViewController:(_UIDocumentPickerRemoteViewController *)arg0 inMode:(unsigned int)arg1 uploadURLOrNil:(id)arg2;
- (UIDocumentPickerViewController *)initForSelectingDocumentMatchingTypes:(NSArray *)arg0 inMode:(unsigned int)arg1;
- (UIDocumentPickerViewController *)initWithExistingDocumentAtURL:(NSURL *)arg0 inMode:(unsigned int)arg1;
- (_UIRemoteViewService *)remoteViewService;
- (void)setRemoteViewService:(_UIRemoteViewService *)arg0;

@end
