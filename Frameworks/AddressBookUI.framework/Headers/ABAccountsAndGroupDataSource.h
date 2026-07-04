/* Runtime dump - ABAccountsAndGroupDataSource
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource>
{
    NSArray * _accountIdentifiers;
    NSArray * _accountDisplayNames;
    NSDictionary * _groupsByAccountIdentifier;
    ACAccountStore * _accountStore;
    char _hidesSearchableSources;
    char _hidesGlobalGroupWrapper;
    char _dirty;
    ABModel * _model;
}

@property (retain, nonatomic) ABModel * model;
@property (nonatomic) char hidesSearchableSources;
@property (nonatomic) char hidesGlobalGroupWrapper;
@property (nonatomic) char dirty;
@property (retain, nonatomic) ACAccountStore * accountStore;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)groupWrapperForIndexPath:(NSIndexPath *)arg0;
- (id)newContactsFilterFromSelectedGroupWrappers;
- (char)hidesSearchableSources;
- (char)hidesGlobalGroupWrapper;
- (void)reloadDataIncludingAccountStore:(char)arg0 usingArchivedState:(char)arg1;
- (int)numberOfGroupsInAccountAtIndex:(int)arg0;
- (NSObject *)accountDisplayNameAtIndex:(int)arg0;
- (NSObject *)defaultGroupWrapper;
- (NSObject *)indexPathForGroupWrapper:(NSObject *)arg0;
- (int)numberOfGroupsForAccountIdentifier:(NSString *)arg0;
- (void)scheduleRefresh;
- (void)cancelScheduledRefresh;
- (void)setHidesSearchableSources:(char)arg0;
- (void)setHidesGlobalGroupWrapper:(char)arg0;
- (void)setDirty:(char)arg0;
- (void)dealloc;
- (void)reloadData;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (ABModel *)model;
- (void)setModel:(ABModel *)arg0;
- (ACAccountStore *)accountStore;
- (void)setAccountStore:(ACAccountStore *)arg0;
- (char)isDirty;

@end
