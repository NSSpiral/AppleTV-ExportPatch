/* Runtime dump - SettingsDeviceNameController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRTextFieldDelegate;

@class BRListControl, BRMenuItem, BRTextEntryController;
@interface SettingsDeviceNameController : BRViewController <BRTextFieldDelegate>
{
    NSArray * _names;
    BRTextEntryController * _customNameController;
}

- (void)wasPushed;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (NSArray *)_collectNames;
- (unsigned int)_indexOfCurrentName;
- (SettingsDeviceNameController *)init;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void).cxx_destruct;

@end
