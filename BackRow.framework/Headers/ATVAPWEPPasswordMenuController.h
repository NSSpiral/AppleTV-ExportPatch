/* Runtime dump - ATVAPWEPPasswordMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol ATVAPPasswordEntryDelegate;
@protocol BRMenuListItemProvider;

@class BRAirportNetwork, BRControl;
@interface ATVAPWEPPasswordMenuController : BRMenuController <BRMenuListItemProvider, ATVAPPasswordEntryDelegate>
{
    BRAirportNetwork * _network;
    long _passwordType;
    <ATVAPPasswordEntryDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)itemSelected:(long)arg0;
- (ATVAPWEPPasswordMenuController *)initForNetwork:(TSTTableStyleNetwork *)arg0 notifying:(id)arg1;
- (void)passwordEntered:(NSString *)arg0 forNetwork:(BRAirportNetwork *)arg1;
- (void)dealloc;
- (NSString *)titleForRow:(long)arg0;
- (long)itemCount;

@end
