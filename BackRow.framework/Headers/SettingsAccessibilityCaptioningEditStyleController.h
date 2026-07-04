/* Runtime dump - SettingsAccessibilityCaptioningEditStyleController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/SettingsAccessibilityCaptioningStyleBaseController.h>

@protocol BRTextFieldDelegate;

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsAccessibilityCaptioningEditStyleController : SettingsAccessibilityCaptioningStyleBaseController <BRTextFieldDelegate>

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)textDidChange:(id /* <BRTextField> */)arg0;

@end
