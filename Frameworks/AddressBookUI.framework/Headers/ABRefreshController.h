/* Runtime dump - ABRefreshController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRefreshController : NSObject
{
    ACAccountStore * _accountStore;
    double _refreshDelay;
    NSMutableDictionary * _accountGroupListsToRefreshByObserver;
    NSMutableDictionary * _contactsFiltersToRefreshByObserver;
    NSTimer * _refreshTimer;
}

+ (ABRefreshController *)sharedInstance;

- (void)scheduleRefreshForAccountGroupList:(NSArray *)arg0 withObserver:(void *)arg1;
- (void)cancelAllScheduledRefreshesWithObserver:(void *)arg0;
- (void)refreshEverythingNow;
- (char)canRefreshSources:(id)arg0;
- (void)scheduleRefreshForContactsFilter:(NSObject *)arg0 withObserver:(void *)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg0;
- (void)_setRefreshDelay:(double)arg0;
- (void)_invalidateTimer;
- (void)_proceedWithRefresh:(id)arg0;
- (void)_scheduleRefreshTimerIfNeeded;
- (void)refreshContactsFilter:(NSObject *)arg0;
- (void)refreshAccountGroupList:(NSArray *)arg0;
- (NSObject *)refreshableAccountIdentifiersForContactsFilter:(NSObject *)arg0;
- (char)canRefreshContactsFilter:(NSObject *)arg0;
- (void)_addObjectToRefresh:(id)arg0 withObserver:(void *)arg1 toDictionary:(id *)arg2;
- (char)canRefreshAccountIdentifier:(NSString *)arg0;
- (void)_refreshGroupListForACAccountWithIdentifier:(NSString *)arg0 isUserRequested:(char)arg1;
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void *)arg0;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void *)arg0 afterDelay:(char)arg1;
- (char)_acAccountExistsForIdentifier:(NSString *)arg0;
- (void)_refreshACAccountWithIdentifier:(NSString *)arg0 isUserRequested:(char)arg1;
- (void)_postponeAllRefreshes;
- (void)_resumeAllRefreshes;
- (void)dealloc;
- (ABRefreshController *)init;
- (ACAccountStore *)accountStore;

@end
