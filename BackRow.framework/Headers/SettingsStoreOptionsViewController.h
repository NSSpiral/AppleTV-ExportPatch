/* Runtime dump - SettingsStoreOptionsViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsStoreOptionsViewController : BRViewController
{
    char _requireReloadOnActivation;
    ATVDataQuery * _rentalQuery;
    char _rentalQueryComplete;
    NSArray * _rentals;
    char _checkingForRentals;
    AAFamilyDetailsResponse * _familyDetailsResponse;
    ATViCloudAccountManager * _iCloudAccountManager;
    NSArray * _generalSectionRowIndexes;
}

@property (retain, nonatomic) AAFamilyDetailsResponse * familyDetailsResponse;
@property (retain, nonatomic) ATViCloudAccountManager * iCloudAccountManager;
@property (retain, nonatomic) NSArray * generalSectionRowIndexes;

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (ATViCloudAccountManager *)iCloudAccountManager;
- (void)setICloudAccountManager:(ATViCloudAccountManager *)arg0;
- (NSString *)_currentAccountName;
- (id)MusicSyncStatusBinding;
- (void)bindMusicSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (id)PurchaseSyncStatusBinding;
- (char)_shouldDisableMenus;
- (void)bindPurchaseSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (id)StoreFrontChangingBinding;
- (void)updateBoundStoreFrontChanging;
- (id)CurrentStoreFrontBinding;
- (void)updateBoundCurrentStoreFront;
- (void)_updateBoundSyncStatus;
- (void)setGeneralSectionRowIndexes:(NSArray *)arg0;
- (NSArray *)generalSectionRowIndexes;
- (NSString *)_currentStoreFrontTitle;
- (void)_updateLoadingMenuItem:(NSObject *)arg0;
- (void)_rentalRefreshCheckComplete:(id)arg0;
- (void)bindStoreFrontChangingBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)bindCurrentStoreFrontBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_loadRentals;
- (void)_rentalQueryComplete:(id)arg0;
- (AAFamilyDetailsResponse *)familyDetailsResponse;
- (void)setFamilyDetailsResponse:(AAFamilyDetailsResponse *)arg0;
- (void)dealloc;
- (SettingsStoreOptionsViewController *)init;
- (void).cxx_destruct;
- (void)_logout;

@end
