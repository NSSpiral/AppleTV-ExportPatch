/* Runtime dump - UIWebFileUploadPanel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate>
{
    UIAlertController * _selectPickerTypeSheet;
    UIImagePickerController * _imagePicker;
    UIViewController * _presentationViewController;
    UIPopoverController * _presentationPopover;
    char _documentViewPresentedViewController;
    struct CGPoint _interactionPoint;
    DOMNode * _interactionElement;
    char _allowMultipleFiles;
    char _isUsingCamera;
    NSArray * _mimeTypes;
    UIWebDocumentView * _documentView;
    NSObject<WebOpenPanelResultListener> * _resultListener;
    <UIWebFileUploadPanelDelegate> * _delegate;
}

@property (nonatomic) <UIWebFileUploadPanelDelegate> * delegate;
@property (copy, nonatomic) NSArray * mimeTypes;
@property (nonatomic) UIWebDocumentView * documentView;
@property (retain, nonatomic) NSObject<WebOpenPanelResultListener> * resultListener;
@property (nonatomic) char allowMultipleFiles;
@property (nonatomic) char isUsingCamera;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<UIWebFileUploadPanelDelegate> *)arg0;
- (<UIWebFileUploadPanelDelegate> *)delegate;
- (UIWebDocumentView *)documentView;
- (void)dismiss;
- (UIWebFileUploadPanel *)initWithResultListener:(NSObject<WebOpenPanelResultListener> *)arg0 mimeTypes:(NSArray *)arg1 allowMultipleFiles:(char)arg2 documentView:(UIWebDocumentView *)arg3;
- (void)present;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMultipleMediaWithInfo:(NSDictionary *)arg1;
- (void)setMimeTypes:(NSArray *)arg0;
- (void)setDocumentView:(UIWebDocumentView *)arg0;
- (void)setResultListener:(NSObject<WebOpenPanelResultListener> *)arg0;
- (void)setAllowMultipleFiles:(char)arg0;
- (void)setIsUsingCamera:(char)arg0;
- (void)_dispatchDidDismiss;
- (NSArray *)mimeTypes;
- (char)_string:(NSString *)arg0 hasPrefixCaseInsensitive:(id)arg1;
- (NSObject *)_mediaTypesForPickerSourceType:(int)arg0;
- (NSObject *)_photoPickerWithSourceType:(int)arg0;
- (void)_presentPopoverWithContentViewController:(BRController *)arg0 animated:(char)arg1;
- (void)_presentFullscreenViewController:(BRController *)arg0 animated:(char)arg1;
- (void)_cancel;
- (void)_showPhotoPickerWithSourceType:(int)arg0;
- (void)_dismissDisplayAnimated:(char)arg0;
- (void)_showMediaSourceSelectionSheet;
- (NSURL *)_filePathForMediaURL:(NSURL *)arg0;
- (float)_compressionQuality;
- (void)_processMediaInfoDictionaries:(id)arg0 atIndex:(unsigned int)arg1 processedResults:(NSArray *)arg2 processedImageCount:(unsigned int)arg3 processedVideoCount:(unsigned int)arg4 successBlock:(id /* block */)arg5 failureBlock:(/* block */ id)arg6;
- (NSArray *)_displayStringForPhotos:(unsigned int)arg0 videos:(unsigned int)arg1;
- (void)_temporaryFilePathForOriginalImage:(UIImage *)arg0 successBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)_filePathFromMediaInfo:(NSDictionary *)arg0 successBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (char)_willMultipleSelectionDelegateBeCalled;
- (UIImage *)_thumbnailSizedImageForImage:(UIImage *)arg0;
- (void)_chooseFilename:(NSString *)arg0 displayString:(NSString *)arg1 iconImage:(UIImage *)arg2;
- (void)_processMediaInfoDictionaries:(id)arg0 successBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)_chooseFilenames:(id)arg0 displayString:(NSString *)arg1 iconImage:(UIImage *)arg2;
- (NSObject<WebOpenPanelResultListener> *)resultListener;
- (char)allowMultipleFiles;
- (char)isUsingCamera;

@end
