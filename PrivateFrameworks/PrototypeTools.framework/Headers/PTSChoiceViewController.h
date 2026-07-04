/* Runtime dump - PTSChoiceViewController
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver>
{
    NSIndexPath * _valueIndexPath;
    PTSChoiceRow * _row;
}

@property (retain, nonatomic) PTSChoiceRow * row;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PTSChoiceRow *)row;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void).cxx_destruct;
- (void)setRow:(PTSChoiceRow *)arg0;
- (NSIndexPath *)_indexPathForValue:(id)arg0;
- (void)_checkAppropriateCell;
- (PTSChoiceViewController *)initWithPresentingRow:(char)arg0;
- (void)row:(PTSChoiceRow *)arg0 didChangeValue:(id)arg1;

@end
