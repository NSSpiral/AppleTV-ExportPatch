/* Runtime dump - ABCardPropertyPicker
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardPropertyPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABStyleProviding>
{
    UITableView * _tableView;
    NSArray * _allProperties;
    NSArray * _policies;
    id _delegate;
}

@property (readonly, nonatomic) UITableView * tableView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<ABStyleProvider> *)styleProvider;
- (char)propertyIsAllowed:(int)arg0;
- (ABCardPropertyPicker *)initWithFrame:(struct CGRect)arg0 policies:(struct CGSize)arg1;
- (void)deselectAllRowsWithAnimation:(char)arg0;
- (ABCardPropertyPicker *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (UITableView *)tableView;
- (void)setProperties:(struct __CFArray *)arg0;

@end
