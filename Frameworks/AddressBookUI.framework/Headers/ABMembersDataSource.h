/* Runtime dump - ABMembersDataSource
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMembersDataSource : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    <ABMembersDataSourceDelegate> * _delegate;
    <ABStyleProvider> * _styleProvider;
    void * _addressBook;
    ABModel * _model;
    NSMutableArray * _sectionIndexTitles;
    struct __CFDictionary * _sectionHeaderToSortingIndex;
    struct __CFDictionary * _displayableSectionHeaderToSectionHeader;
    struct __CFDictionary * _sectionHeaderToDisplayableSectionHeader;
    struct __CFDictionary * _displayableSectionIndexToSectionIndex;
    struct __CFDictionary * _sectionIndexToDisplayableSectionIndex;
    ABBannerView * _bannerView;
    ABUIPerson * _meCard;
}

@property (nonatomic) <ABMembersDataSourceDelegate> * delegate;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (retain, nonatomic) ABModel * model;
@property (nonatomic) void * addressBook;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (int)globalRowForDisplayedMemberIndex:(unsigned int)arg0;
- (char)shouldShowGroups;
- (ABBannerView *)bannerView;
- (void)setBannerView:(ABBannerView *)arg0 inTableView:(NSObject *)arg1;
- (void)_invalidateMeCard;
- (void)createAllDisplayableSectionIndexAndHeaderCaches;
- (NSString *)displayableSectionHeaderFromSectionHeader:(NSString *)arg0;
- (id)titleForHeaderInSection:(int)arg0;
- (NSObject *)displayableSectionIndexFromSectionIndex:(NSObject *)arg0;
- (NSObject *)sectionIndexFromDisplayableSectionIndex:(NSObject *)arg0;
- (struct __CFDictionary *)sectionHeaderSortingIndices;
- (int)globalRowForBanner;
- (unsigned int)displayedMemberIndexForIndexPath:(NSIndexPath *)arg0 inTableView:(NSObject *)arg1;
- (NSObject *)indexPathForDisplayedMemberIndex:(unsigned int)arg0 inTableView:(NSObject *)arg1;
- (void)setAddressBook:(void *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABMembersDataSourceDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 willDisplayHeaderView:(NSObject *)arg1 forSection:(int)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSObject *)sectionIndexTitlesForTableView:(NSArray *)arg0;
- (int)tableView:(UITableView *)arg0 sectionForSectionIndexTitle:(NSString *)arg1 atIndex:(int)arg2;
- (<ABMembersDataSourceDelegate> *)delegate;
- (struct CGRect)tableView:(UITableView *)arg0 frameForSectionIndexGivenProposedFrame:(SEL)arg1;
- (NSObject *)tableView:(UITableView *)arg0 indexPathForSectionIndexTitle:(NSString *)arg1 atIndex:(int)arg2;
- (ABModel *)model;
- (void)setModel:(ABModel *)arg0;
- (void *)addressBook;

@end
