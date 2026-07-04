/* Runtime dump - SettingsStoreAccountManagementController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class BRControl, BRListControl, BRMenuItem;
@interface SettingsStoreAccountManagementController : BRViewController
{
    char _iCloudReauthAttempted;
    NSArray * _accounts;
    NSArray * _familyAccounts;
    NSArray * _distinctiTunesFamilyAccounts;
    SSAccount * _preferredAccount;
    ATViCloudAccountManager * _iCloudAccountManager;
    int _familyCheckState;
}

@property (retain, nonatomic) NSArray * accounts;
@property (retain, nonatomic) NSArray * familyAccounts;
@property (retain, nonatomic) NSArray * distinctiTunesFamilyAccounts;
@property (retain, nonatomic) SSAccount * preferredAccount;
@property (retain, nonatomic) ATViCloudAccountManager * iCloudAccountManager;
@property (nonatomic) int familyCheckState;
@property (nonatomic) char iCloudReauthAttempted;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (ATViCloudAccountManager *)iCloudAccountManager;
- (void)setICloudAccountManager:(ATViCloudAccountManager *)arg0;
- (void)_refresh;
- (id)MusicSyncStatusBinding;
- (void)bindMusicSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (SettingsStoreAccountManagementController *)initWithFamilyDetailsResponse:(AAFamilyDetailsResponse *)arg0;
- (void)_processFamilyDetailsResponse:(NSURLResponse *)arg0;
- (void)_fetchFamilyDetails;
- (id)PurchaseSyncStatusBinding;
- (void)updateBoundSyncStatus;
- (SSAccount *)preferredAccount;
- (char)_shouldDisableMenus;
- (NSArray *)distinctiTunesFamilyAccounts;
- (id)_menuItemForFamilyMember:(id)arg0;
- (NSNumber *)_authControllerWithAccount:(NSObject *)arg0;
- (NSString *)_authControllerWithUsername:(NSString *)arg0;
- (void)setPreferredAccount:(SSAccount *)arg0;
- (id)_filterFamilyMembersFromAccounts:(id)arg0;
- (NSArray *)familyAccounts;
- (void)setFamilyAccounts:(NSArray *)arg0;
- (id)_distinctiTunesFamilyAccountsFromFamilyMembers:(id)arg0;
- (void)setDistinctiTunesFamilyAccounts:(NSArray *)arg0;
- (void)bindPurchaseSyncStatusBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (int)familyCheckState;
- (void)setFamilyCheckState:(int)arg0;
- (char)iCloudReauthAttempted;
- (void)setICloudReauthAttempted:(char)arg0;
- (SettingsStoreAccountManagementController *)init;
- (void).cxx_destruct;
- (id)ActiveStoreAccountBinding;
- (void)bindActiveStoreAccountBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)updateBoundActiveStoreAccount;
- (NSArray *)accounts;
- (void)setAccounts:(NSArray *)arg0;

@end
