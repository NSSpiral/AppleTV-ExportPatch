/* Runtime dump - WKFileUploadPanel
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    WKContentView * _view;
    struct WebOpenPanelResultListenerProxy * _listener;
    struct RetainPtr<NSArray> _mimeTypes;
    struct CGPoint _interactionPoint;
    char _allowMultipleFiles;
    char _usingCamera;
    struct RetainPtr<UIImagePickerController> _imagePicker;
    struct RetainPtr<UIAlertController> _actionSheetController;
    struct RetainPtr<UIViewController> _presentationViewController;
    struct RetainPtr<UIPopoverController> _presentationPopover;
    <WKFileUploadPanelDelegate> * _delegate;
}

@property (nonatomic) <WKFileUploadPanelDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<WKFileUploadPanelDelegate> *)arg0;
- (<WKFileUploadPanelDelegate> *)delegate;
- (WKFileUploadPanel *)initWithView:(WKContentView *)arg0;
- (void)dismiss;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void).cxx_construct;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMultipleMediaWithInfo:(NSDictionary *)arg1;
- (void).cxx_destruct;
- (void)_dispatchDidDismiss;
- (NSObject *)_mediaTypesForPickerSourceType:(int)arg0;
- (void)_presentPopoverWithContentViewController:(BRController *)arg0 animated:(char)arg1;
- (void)_presentFullscreenViewController:(BRController *)arg0 animated:(char)arg1;
- (void)_cancel;
- (void)_showPhotoPickerWithSourceType:(int)arg0;
- (void)_dismissDisplayAnimated:(char)arg0;
- (void)_showMediaSourceSelectionSheet;
- (void)_processMediaInfoDictionaries:(id)arg0 atIndex:(unsigned int)arg1 processedResults:(NSArray *)arg2 processedImageCount:(unsigned int)arg3 processedVideoCount:(unsigned int)arg4 successBlock:(id /* block */)arg5 failureBlock:(/* block */ id)arg6;
- (NSArray *)_displayStringForPhotos:(unsigned int)arg0 videos:(unsigned int)arg1;
- (char)_willMultipleSelectionDelegateBeCalled;
- (void)_processMediaInfoDictionaries:(id)arg0 successBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)_chooseFiles:(id)arg0 displayString:(NSString *)arg1 iconImage:(UIImage *)arg2;
- (void)_uploadItemFromMediaInfo:(NSDictionary *)arg0 successBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)presentWithParameters:(struct WebOpenPanelParameters *)arg0 resultListener:(unsigned int)arg1;

@end
