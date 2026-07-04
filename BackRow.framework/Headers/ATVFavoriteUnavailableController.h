/* Runtime dump - ATVFavoriteUnavailableController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BROptionDialog.h>

@class ATVFavorite;
@interface ATVFavoriteUnavailableController : BROptionDialog
{
    ATVFavorite * _favorite;
}

- (void)_optionSelected:(id)arg0;
- (NSObject *)_textForFavoriteType:(int)arg0;
- (ATVFavoriteUnavailableController *)initWithFavorite:(ATVFavorite *)arg0;
- (void)dealloc;

@end
