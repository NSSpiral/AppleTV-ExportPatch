/* Runtime dump - PLUIPrivacyViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIPrivacyViewController : UIViewController
{
    char _showingAccessDeniedView;
    _UIAccessDeniedView * _accessDeniedView;
}

- (void)dealloc;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)_setImagePickerMediaTypes:(NSArray *)arg0;
- (void)_updateAccessDeniedView;
- (void)_showCancelButton;
- (void)_cancelButtonClicked:(id)arg0;

@end
