/* Runtime dump - BRParentalControlsPasscodeChangedController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol BRMenuListItemProvider;

@class BRControl, BRController;
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider>
{
    BRController * _guardedController;
    id * _menuItemNameKeys;
    char _passcodeMatched;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)itemSelected:(long)arg0;
- (BRParentalControlsPasscodeChangedController *)initWithMatch:(char)arg0 guarding:(id)arg1;
- (void)dealloc;
- (NSString *)titleForRow:(long)arg0;
- (long)itemCount;

@end
