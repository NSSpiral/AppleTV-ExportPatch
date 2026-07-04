/* Runtime dump - LTLocaleSetupController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRTextWithSpinnerController;
@interface LTLocaleSetupController : NSObject
{
    BRTextWithSpinnerController * _spinner;
    char _tryingToAutoset;
}

- (void)_storeLocationChanged:(NSNotification *)arg0;
- (void)autosetLocale;
- (id)autoPoppingSpinner;
- (void)_removeSpinner;
- (void)_setCountry:(ABCountry *)arg0;
- (void)_storeChangedTimeout:(id)arg0;
- (void)_checkStoreFrontAndRemoveSpinner;
- (void)dealloc;
- (LTLocaleSetupController *)init;
- (void).cxx_destruct;

@end
