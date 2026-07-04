/* Runtime dump - PLDeletePhotosActionController
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDeletePhotosActionController : NSObject
{
    UIAlertController * _actionSheetController;
    UIAlertController * _overQuotaConfirmation;
    UIAlertController * _oneTimeConfirmation;
    UIViewController * _referenceViewController;
    NSArray * _additionalAssetsToDelete;
    id _completionHandler;
    id _willDeleteHandler;
    int _action;
    char _handlesDuplicates;
    PLPhotoLibrary * _photoLibrary;
    NSArray * _assets;
    UIBarButtonItem * __referenceBarButtonItem;
}

@property (readonly, nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, nonatomic) NSArray * assets;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) char handlesDuplicates;
@property (retain, nonatomic) UIBarButtonItem * _referenceBarButtonItem;

- (void)dealloc;
- (int)action;
- (void)dismissAnimated:(char)arg0;
- (NSArray *)assets;
- (PLPhotoLibrary *)photoLibrary;
- (void)_getDeleteActionSheetTitle:(id *)arg0 destructiveButtonTitle:(id *)arg1 cancelButtonTitle:(id *)arg2 forAssets:(NSArray *)arg3 additionalPhotoStreamAssets:(NSArray *)arg4;
- (void)_actionSheetDeletePressed:(char)arg0;
- (void)_overQuotaAlertConfirmed:(char)arg0;
- (void)_oneTimeAlertConfirmed;
- (void)_setReferenceBarButtonItem:(NSObject *)arg0;
- (void)_setupActionSheet;
- (void)_setupOverQuotaConfirmationSheet;
- (UIBarButtonItem *)_referenceBarButtonItem;
- (void)_setupOnetimeConfirmationSheet;
- (void)runDestructiveActionWithCompletion:(id /* block */)arg0;
- (void)_showOverQuotaConfirmationSheet;
- (void)_showOnetimeConfirmation;
- (void)_didCompleteWithDestructiveAction:(char)arg0;
- (PLDeletePhotosActionController *)initWithPhotoLibrary:(PLPhotoLibrary *)arg0 assets:(NSArray *)arg1 action:(int)arg2 handleDuplicates:(char)arg3;
- (NSObject *)presentInViewController:(BRController *)arg0 fromBarButtonItem:(NSObject *)arg1 willDeleteHAndler:(id)arg2 completionHandler:(/* block */ id)arg3;
- (void)redisplayInViewController:(BRController *)arg0 fromBarButtonItem:(NSObject *)arg1;
- (char)handlesDuplicates;

@end
