/* Runtime dump - MFMailComposeCorecipientViewController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView * _tableView;
    NSMutableIndexSet * _selectedIndexes;
    NSMutableArray * _recipients;
    MFMailComposeRecipientView * _recipientView;
}

@property (readonly, nonatomic) NSArray * recipients;
@property (retain, nonatomic) MFMailComposeRecipientView * recipientView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MFMailComposeCorecipientViewController *)initWithRecentComposeRecipients:(id)arg0;
- (void)setRecipientView:(MFMailComposeRecipientView *)arg0;
- (void)_didTapDoneButton:(id)arg0;
- (void)_dismissAndAddSelectedContacts;
- (void)dealloc;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (NSArray *)recipients;
- (MFMailComposeRecipientView *)recipientView;

@end
