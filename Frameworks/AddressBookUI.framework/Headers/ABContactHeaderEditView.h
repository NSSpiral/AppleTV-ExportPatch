/* Runtime dump - ABContactHeaderEditView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactHeaderEditView : ABContactHeaderView <UITableViewDelegate, UITableViewDataSource, ABPropertyGroupItemDelegate, ABContactPhotoViewDelegate>
{
    UITableView * _editingTable;
    NSArray * _editingGroups;
    <ABPropertyCellDelegate> * _namePropertyDelegate;
}

@property (retain, nonatomic) NSArray * editingGroups;
@property (nonatomic) <ABPropertyCellDelegate> * namePropertyDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ABContactHeaderEditView *)contactHeaderViewWithContact:(id)arg0 editingGroups:(NSArray *)arg1;

- (void)reloadDataPreservingChanges:(char)arg0;
- (void)updateFontSizes;
- (ABContactHeaderEditView *)initWithContact:(CNContact *)arg0 editingGroups:(NSArray *)arg1 frame:(struct CGRect)arg2;
- (void)setEditingGroups:(NSArray *)arg0;
- (<ABPropertyCellDelegate> *)namePropertyDelegate;
- (id)_phoneticNameForValue:(id)arg0 isFamilyName:(char)arg1;
- (void)propertyItem:(ABPropertyGroupItem *)arg0 willChangeValue:(id)arg1;
- (void)didUpdatePhoto;
- (void)setEditingGroups:(NSArray *)arg0 withUpdate:(char)arg1;
- (char)photoIsModified;
- (NSObject *)selectEditingGroupAtIndex:(unsigned int)arg0;
- (NSArray *)editingGroups;
- (void)setNamePropertyDelegate:(<ABPropertyCellDelegate> *)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)updateConstraints;
- (char)hasPhoto;

@end
