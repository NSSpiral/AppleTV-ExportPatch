/* Runtime dump - SettingsAirPlaySecurityController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRTextFieldDelegate;

@class BRControl, BRListControl, BRMenuItem, BRTextEntryController;
@interface SettingsAirPlaySecurityController : BRViewController <BRTextFieldDelegate>
{
    BRTextEntryController * _localPasswordEntryController;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (id)_securityItemForRow:(long)arg0;
- (id)_verifyDevicesItemForRow:(long)arg0;
- (void)_handleSecurityItemSelectedForRow:(long)arg0;
- (void)_handleVerifyDevicesItemSelectedForRow:(long)arg0;
- (NSString *)_localPasswordEntryControllerWithIdentifier:(NSString *)arg0;
- (void)dealloc;
- (SettingsAirPlaySecurityController *)init;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void).cxx_destruct;

@end
