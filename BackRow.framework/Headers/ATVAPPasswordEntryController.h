/* Runtime dump - ATVAPPasswordEntryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRTextEntryController.h>

@protocol BRTextFieldDelegate;

@class BRAirportNetwork;
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate>
{
    BRAirportNetwork * _network;
    <ATVAPPasswordEntryDelegate> * _delegate;
}

- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (ATVAPPasswordEntryController *)initForNetwork:(TSTTableStyleNetwork *)arg0 acceptOnlyHex:(char)arg1 notifying:(id)arg2;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void).cxx_destruct;
- (void)setInitialPassword:(NSString *)arg0;

@end
