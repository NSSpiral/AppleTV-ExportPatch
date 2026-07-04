/* Runtime dump - ABUnknownPersonViewDelegateForwarder
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUnknownPersonViewDelegateForwarder : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    ABUnknownPersonViewController * _viewController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABUnknownPersonViewDelegateForwarder *)initWithUnknownPersonViewController:(ABUnknownPersonViewController *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;

@end
