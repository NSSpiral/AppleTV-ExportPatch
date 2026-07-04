/* Runtime dump - ATVAddToFavoritesButtonControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRButtonControl.h>

@class ATVFavorite, ATVMerchant, BREvent;
@interface ATVAddToFavoritesButtonControl : BRButtonControl
{
    ATVMerchant * _merchant;
    ATVFavorite * _favorite;
}

@property (retain, nonatomic) ATVMerchant * merchant;
@property (retain, nonatomic) ATVFavorite * favorite;

- (char)brEventAction:(BREvent *)arg0;
- (ATVMerchant *)merchant;
- (void)controlWasActivated;
- (void)setMerchant:(ATVMerchant *)arg0;
- (void)_toggle;
- (void)dealloc;
- (ATVAddToFavoritesButtonControl *)init;
- (void)_update;
- (ATVFavorite *)favorite;
- (void)setFavorite:(ATVFavorite *)arg0;

@end
