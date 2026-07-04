/* Runtime dump - ATVMusicStoreCatalogItemController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRMerchant;
@interface ATVMusicStoreCatalogItemController : BRController
{
    NSDictionary * _itemDictionary;
    BRMerchant * _merchant;
    char _isDirty;
    NSString * _refreshURL;
}

- (BRMerchant *)merchant;
- (void)wasExhumed;
- (void)markAsDirty;
- (void)_handleWindowMaxBoundsChanged;
- (void)_purchaseAcquired:(id)arg0;
- (void)_rentalAcquired:(id)arg0;
- (void)fetchRelatedContent;
- (void)fetchRelatedContentFromURL:(NSURL *)arg0;
- (void)relatedContentLoaded:(id)arg0;
- (void)_authenticationStatusChanged:(NSNotification *)arg0;
- (void)_refreshPage;
- (void)_markAsDirtyAndRefreshIfActive;
- (NSURL *)_fallbackRefreshURL;
- (void)setItemDictionary:(NSDictionary *)arg0;
- (void)augmentRelatedContentItemsFromPage:(id)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (NSString *)refreshURL;
- (void)setRefreshURL:(NSString *)arg0;
- (ATVMusicStoreCatalogItemController *)initWithItemDictionary:(NSDictionary *)arg0;
- (NSDictionary *)itemDictionary;

@end
