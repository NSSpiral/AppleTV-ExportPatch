/* Runtime dump - SettingsNetworkAutoModeViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol BRMenuListItemProvider;

@class BRControl;
@interface SettingsNetworkAutoModeViewController : BRMenuController <BRMenuListItemProvider>
{
    id _forWireless;
    id _useAuto;
    char _forDNS;
    <SettingsNetworkAutoModeSelectionDelegate> * _delegate;
    char _shouldDisableAuto;
}

@property (nonatomic) char shouldDisableAuto;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)itemSelected:(long)arg0;
- (SettingsNetworkAutoModeViewController *)initForAutomaticConfig:(char)arg0 wireless:(char)arg1 dns:(char)arg2 notifying:(id)arg3;
- (void)setShouldDisableAuto:(char)arg0;
- (char)shouldDisableAuto;
- (NSString *)titleForRow:(long)arg0;
- (void).cxx_destruct;
- (long)itemCount;

@end
