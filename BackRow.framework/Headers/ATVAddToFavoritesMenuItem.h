/* Runtime dump - ATVAddToFavoritesMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuItem.h>

@class ATVFavorite, ATVMerchant, BREvent;
@interface ATVAddToFavoritesMenuItem : BRMenuItem
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
- (void)_update;
- (ATVFavorite *)favorite;
- (void)setFavorite:(ATVFavorite *)arg0;

@end
