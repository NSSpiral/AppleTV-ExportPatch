/* Runtime dump - ABPersonTableViewLinkingDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate>
{
    NSMutableArray * _linkedInfos;
    int _currentIndexInLinkedInfos;
    char _ignoresReloadLinkedInfos;
    char _shouldAllowLinkingAnotherContact;
    char _hasLinkChanges;
    char _shouldShowLinkingUIOnCard;
    char _showsLinkedPeople;
    char _appearsInLinkingPeoplePicker;
    char _updateShouldAllowLinkingAnotherContact;
    ABPersonTableViewDataSource * _dataSource;
    ABPersonViewControllerHelper * _helper;
}

@property (readonly, nonatomic) NSArray * linkedInfos;
@property (nonatomic) char shouldShowLinkedPeople;
@property (nonatomic) char shouldShowLinkingUIOnCard;
@property (nonatomic) char appearsInLinkingPeoplePicker;
@property (nonatomic) char updateShouldAllowLinkingAnotherContact;
@property (readonly, nonatomic) char hasLinkChanges;
@property (nonatomic) ABPersonTableViewDataSource * dataSource;
@property (readonly, nonatomic) ABPersonViewControllerHelper * helper;

- (ABPersonViewControllerHelper *)helper;
- (void)setShouldShowLinkedPeople:(char)arg0;
- (void)setShouldShowLinkingUIOnCard:(char)arg0;
- (void)setAppearsInLinkingPeoplePicker:(char)arg0;
- (char)shouldShowLinkedPeople;
- (void)setUpdateShouldAllowLinkingAnotherContact:(char)arg0;
- (ABPersonTableViewLinkingDelegate *)initWithHelper:(ABPersonViewControllerHelper *)arg0;
- (char)shouldAllowLinkingAnotherContact;
- (int)numberOfLinkedCardRows;
- (char)shouldIncludeLinkingUISectionWhenEditing:(char)arg0;
- (id)sourceNameForCardAtRow:(int)arg0;
- (id)personNameForCardAtRow:(int)arg0;
- (char)manuallyUnlinkCardAtRow:(int)arg0;
- (char)canUnlinkCardAtRow:(int)arg0;
- (char)shouldShowLinkingUIOnCard;
- (int)indexOfLinkedInfoAtRow:(int)arg0;
- (NSObject *)newLinkedInfoForPerson:(NSObject *)arg0;
- (char)reloadLinkedInfos;
- (char)isLinkedCard;
- (void)_finalizeLinkChanges;
- (id)linkedInfoAtRow:(int)arg0;
- (char)appearsInLinkingPeoplePicker;
- (void)forceUseLinkedInfos:(id)arg0 currentIndexInLinkedInfos:(int)arg1;
- (char)manuallyLinkPerson:(NSObject *)arg0;
- (char)shouldAllowLinkingPersonWithRecordID:(int)arg0;
- (id)newPersonViewControllerForLinkedCardAtRow:(int)arg0;
- (id)newPeoplePickerForLinking;
- (id)sourceNameForCurrentCard;
- (void)reloadLinkingUI;
- (id)allNonUnifiedPeople;
- (char)hasLinkChanges;
- (NSArray *)linkedInfos;
- (char)updateShouldAllowLinkingAnotherContact;
- (void)dealloc;
- (void)setDataSource:(ABPersonTableViewDataSource *)arg0;
- (ABPersonTableViewDataSource *)dataSource;

@end
