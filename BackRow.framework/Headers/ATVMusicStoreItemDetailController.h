/* Runtime dump - ATVMusicStoreItemDetailController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreCatalogItemController.h>

@class ATVMusicStoreUberConfig, BRCursorControl, BRDetailedMediaControl, BRScrollControl;
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController
{
    BRCursorControl * _cursorControl;
    BRScrollControl * _scrollControl;
    BRDetailedMediaControl * _detailedControl;
    ATVMusicStoreUberConfig * _uberConfig;
    ATVDataQuery * _rentalQuery;
    ATVDataItem * _rentalItem;
    NSTimer * _expiryInfoTimer;
    char _isPurchased;
}

@property (readonly, nonatomic) char shouldPerformUberLayout;

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_cacheManagerStateChanged:(NSNotification *)arg0;
- (BRDetailedMediaControl *)detailedControl;
- (void)_setupDetailedControl;
- (char)shouldPerformUberLayout;
- (void)relatedContentLoaded:(id)arg0;
- (void)setItemDictionary:(NSDictionary *)arg0;
- (void)_layoutControls;
- (char)_checkIfPurchased;
- (void)_checkIfAlreadyRented;
- (void)_nextItemSelected:(id)arg0;
- (void)_previousItemSelected:(id)arg0;
- (NSDictionary *)_filterPreferredItemsFromDictionary:(NSDictionary *)arg0;
- (void)_updateFocus;
- (void)_startExpiryInfoTimer;
- (void)_updatePurchasedLoadingText;
- (void)_stopExpiryInfoTimer;
- (id)_displayableItemAfter:(id)arg0;
- (id)_displayableItemBefore:(id)arg0;
- (void)_nextItemSelected;
- (void)_previousItemSelected;
- (void)_relatedContentControlCreated:(id)arg0;
- (id)_displayableItemAdjacentTo:(id)arg0 forward:(char)arg1;
- (void)_updateExpiryInfo;
- (void)_expiryInfoTimerFired:(id)arg0;
- (void)_rentalQueryComplete;
- (void)dealloc;
- (ATVMusicStoreItemDetailController *)init;
- (ATVMusicStoreItemDetailController *)initWithItemDictionary:(NSDictionary *)arg0;
- (NSDictionary *)itemDictionary;

@end
