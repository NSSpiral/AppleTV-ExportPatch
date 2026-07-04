/* Runtime dump - ABStarkContactViewController
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkContactViewController : ABContactViewController <ABPropertyBestIDSValueQueryDelegate>
{
    ABPropertyBestIDSValueQuery * _bestiMessageQuery;
    ABCardiMessageEmailGroup * _iMessageEmailGroup;
}

@property (retain, nonatomic) ABPropertyBestIDSValueQuery * bestiMessageQuery;
@property (retain, nonatomic) ABCardiMessageEmailGroup * iMessageEmailGroup;

- (ABStarkContactViewController *)initWithContact:(CNContact *)arg0;
- (void)queryComplete;
- (void)_initiateBestiMessagePropertyQuery;
- (ABPropertyBestIDSValueQuery *)bestiMessageQuery;
- (void)setBestiMessageQuery:(ABPropertyBestIDSValueQuery *)arg0;
- (ABCardiMessageEmailGroup *)iMessageEmailGroup;
- (void)setIMessageEmailGroup:(ABCardiMessageEmailGroup *)arg0;
- (void)dealloc;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (char)tableView:(UITableView *)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(NSObject *)arg3;
- (NSString *)title;
- (void)viewWillLayoutSubviews;
- (NSObject *)viewForHeaderInTableView:(NSObject *)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;

@end
