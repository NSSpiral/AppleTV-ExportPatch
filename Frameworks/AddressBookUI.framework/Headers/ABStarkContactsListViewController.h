/* Runtime dump - ABStarkContactsListViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate>
{
    ABMembersDataSource * _dataSource;
    ABModel * _model;
    char _limitedUI;
    <ABStarkContactsListViewControllerDelegate> * _peoplePickerDelegate;
    ABStarkNoContentBannerView * _overlayView;
    AVExternalDevice * _externalDevice;
}

@property (nonatomic) <ABStarkContactsListViewControllerDelegate> * peoplePickerDelegate;
@property (retain, nonatomic) ABStarkNoContentBannerView * overlayView;
@property (retain, nonatomic) AVExternalDevice * externalDevice;
@property (nonatomic) char limitedUI;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)contactViewController:(ABContactViewController *)arg0 shouldPerformDefaultActionForContact:(id)arg1 property:(NSObject *)arg2 labeledValue:(CNLabeledValue *)arg3;
- (char)abDataSource:(NSObject *)arg0 selectedPerson:(void *)arg1 atIndexPath:(NSIndexPath *)arg2 withMemberCell:(struct objc_method *)arg3 animate:(char)arg4;
- (char)abDataSourceAllowsShowingPersonsCards:(id)arg0;
- (char)abDataSource:(NSObject *)arg0 shouldAllowSelectingPersonWithRecordID:(int)arg1;
- (<ABStarkContactsListViewControllerDelegate> *)peoplePickerDelegate;
- (void)limitedUINotification:(NSNotification *)arg0;
- (AVExternalDevice *)externalDevice;
- (void)setLimitedUI:(char)arg0;
- (void)postMessageOverlayIfNecessary;
- (void)setOverlayView:(ABStarkNoContentBannerView *)arg0;
- (void)setExternalDevice:(AVExternalDevice *)arg0;
- (char)limitedUI;
- (ABStarkNoContentBannerView *)overlayView;
- (void)dealloc;
- (ABStarkContactsListViewController *)init;
- (void)viewDidLayoutSubviews;
- (ABStarkContactsListViewController *)initWithStyle:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)setPeoplePickerDelegate:(<ABStarkContactsListViewControllerDelegate> *)arg0;

@end
