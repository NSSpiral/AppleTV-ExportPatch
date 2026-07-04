/* Runtime dump - ABMembersFilteredDataSource
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersFilteredDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    NSMapTable * _records;
    NSMapTable * _sectionTitles;
    void * _addressBook;
    <ABMembersDataSourceDelegate> * _delegate;
    <ABStyleProvider> * _styleProvider;
    char _isInPopover;
}

@property (nonatomic) <ABMembersDataSourceDelegate> * delegate;
@property (nonatomic) void * addressBook;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (readonly, nonatomic) NSArray * records;
@property (nonatomic) char isInPopover;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)removeAllRecords;
- (void)addRecords:(NSArray *)arg0 toSection:(int)arg1;
- (NSObject *)sectionArrayAtIndex:(int)arg0;
- (id)titleForSection:(int)arg0;
- (char)isInPopover;
- (void)setTitle:(NSString *)arg0 forSection:(int)arg1;
- (void)setIsInPopover:(char)arg0;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABMembersDataSourceDelegate> *)arg0;
- (unsigned int)count;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (<ABMembersDataSourceDelegate> *)delegate;
- (NSObject *)viewForHeaderInTableView:(NSObject *)arg0;
- (NSObject *)viewForFooterInTableView:(NSObject *)arg0;
- (NSArray *)records;
- (void *)addressBook;

@end
