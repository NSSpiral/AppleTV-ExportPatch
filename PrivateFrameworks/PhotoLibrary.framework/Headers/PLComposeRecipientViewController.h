/* Runtime dump - PLComposeRecipientViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLComposeRecipientViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, UIPopoverControllerDelegate>
{
    PLComposeRecipientView * _recipientView;
    UIScrollView * _recipientContainerView;
    struct CGRect _keyboardFrame;
    unsigned int _maxExpandRows;
    <PLComposeRecipientViewControllerDelegate> * _delegate;
    MFContactsSearchManager * _searchManager;
    MFContactsSearchResultsModel * _searchResultsModel;
    MFSearchShadowView * _shadowView;
    NSArray * _searchResults;
    NSNumber * _currentSearchTaskID;
    UITableView * _searchResultsTable;
    UIPopoverController * _searchResultsPopoverController;
    UIPopoverController * _peoplePickerPopoverController;
    struct ? _flags;
    NSArray * _properties;
}

@property (nonatomic) <PLComposeRecipientViewControllerDelegate> * delegate;
@property (readonly, nonatomic) PLComposeRecipientView * recipientView;
@property (nonatomic) unsigned int maxExpandRows;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)recordRecentInvitationRecipient:(id)arg0 displayName:(NSString *)arg1 date:(NSDate *)arg2;

- (void)dealloc;
- (void)setDelegate:(<PLComposeRecipientViewControllerDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (<PLComposeRecipientViewControllerDelegate> *)delegate;
- (void)didReceiveMemoryWarning;
- (PLComposeRecipientViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidUnload;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)peoplePickerNavigationControllerDidCancel:(ABPeoplePickerNavigationController *)arg0;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1;
- (char)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg0 shouldContinueAfterSelectingPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (NSArray *)recipients;
- (char)isRecipientViewFirstResponder;
- (void)_keyboardSizeDidChange:(NSDictionary *)arg0;
- (void)_searchForRecipientWithText:(NSString *)arg0;
- (void)_presentSearchResultsPopover;
- (void)_updateViewsLayoutAnimated:(char)arg0 completion:(id /* block */)arg1;
- (void)_forceDismissPeoplePickerPopover;
- (char)_searchResultsShowInPopover;
- (void)_updateSearchResultsTableVisibility;
- (id)_newSearchResultsTable;
- (NSObject *)_newShadowView;
- (MFContactsSearchManager *)_searchManager;
- (void)_setSearchResults:(NSArray *)arg0;
- (NSObject *)composeRecipientView:(NSObject *)arg0 composeRecipientForAddress:(NSString *)arg1;
- (void)_dismissPeoplePicker:(id)arg0;
- (char)shouldShowCardForPerson:(void *)arg0 peoplePicker:(ABPeoplePickerNavigationController *)arg1;
- (void)consumeSearchResults:(NSArray *)arg0 type:(unsigned int)arg1 taskID:(NSNumber *)arg2;
- (void)finishedSearchingForType:(unsigned int)arg0;
- (void)finishedTaskWithID:(NSNumber *)arg0;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;
- (void)setMaxExpandRows:(unsigned int)arg0;
- (void)composeRecipientView:(NSObject *)arg0 requestDeleteRecipientAtIndex:(int)arg1;
- (void)composeRecipientView:(NSObject *)arg0 didFinishEnteringAddress:(NSString *)arg1;
- (void)composeRecipientView:(NSObject *)arg0 didChangeSize:(struct CGSize)arg1;
- (void)composeRecipientView:(NSObject *)arg0 textDidChange:(char)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg0;
- (char)composeRecipientViewIsShowingPeoplePicker:(id)arg0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg0;
- (void)composeRecipientView:(NSObject *)arg0 showPersonCardForAtom:(id)arg1;
- (NSObject *)composeRecipientView:(NSObject *)arg0 composeRecipientForRecord:(void *)arg1 identifier:(int)arg2;
- (NSObject *)composeRecipientView:(NSObject *)arg0 composeRecipientForRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)composeRecipientViewReturnPressed:(id)arg0;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (PLComposeRecipientView *)recipientView;
- (unsigned int)maxExpandRows;
- (void *)_addressBook;

@end
