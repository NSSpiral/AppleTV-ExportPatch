/* Runtime dump - LTNetworkFailureController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@protocol ATVTCPIPConfigDelegate;
@protocol BRMenuListItemProvider;

@class BRAirportNetwork, BRControl;
@interface LTNetworkFailureController : BRMenuController <BRMenuListItemProvider, ATVTCPIPConfigDelegate>
{
    BRAirportNetwork * _network;
    char _localNetworkUp;
    NSString * _popToLabel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)heightForRow:(long)arg0;
- (char)rowSelectable:(long)arg0;
- (BRControl *)itemForRow:(long)arg0;
- (void)itemSelected:(long)arg0;
- (void)configurationComplete:(char)arg0 forInterface:(int)arg1;
- (void)_setTitleAndPromptStrings;
- (LTNetworkFailureController *)initForNetwork:(TSTTableStyleNetwork *)arg0 withPopToLabel:(NSString *)arg1;
- (void)configurationPending:(id)arg0 forInterface:(int)arg1;
- (NSString *)titleForRow:(long)arg0;
- (void).cxx_destruct;
- (long)itemCount;

@end
