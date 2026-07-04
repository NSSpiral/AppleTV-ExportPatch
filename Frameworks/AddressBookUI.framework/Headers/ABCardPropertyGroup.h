/* Runtime dump - ABCardPropertyGroup
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardPropertyGroup : ABCardGroup
{
    NSArray * _propertyItems;
    NSArray * _displayItems;
    NSArray * _editingItems;
    NSArray * _originalEditingItems;
    char _showActionsWhenEmpty;
    char _isAdded;
    NSString * _property;
    NSArray * _contacts;
    NSArray * _deletedItems;
}

@property (readonly, nonatomic) NSString * property;
@property (readonly, nonatomic) NSArray * propertyItems;
@property (copy, nonatomic) NSArray * contacts;
@property (nonatomic) char showActionsWhenEmpty;
@property (readonly, nonatomic) char multiValue;
@property (readonly, nonatomic) char fixedValue;
@property (readonly, nonatomic) char multiLine;
@property (readonly, nonatomic) char allowsAdding;
@property (readonly, nonatomic) char modified;
@property (nonatomic) char isAdded;
@property (retain, nonatomic) NSArray * editingItems;
@property (retain, nonatomic) NSArray * deletedItems;

+ (NSObject *)groupForProperty:(NSString *)arg0 contact:(CNContact *)arg1 withLinkedContacts:(NSArray *)arg2;

- (NSArray *)displayItems;
- (NSArray *)editingItems;
- (NSArray *)_loadPropertyItems;
- (void)setShowActionsWhenEmpty:(char)arg0;
- (ABCardPropertyGroup *)initWithProperty:(NSString *)arg0 contact:(CNContact *)arg1 withLinkedContacts:(NSArray *)arg2;
- (char)isMultiValue;
- (char)isFixedValue;
- (NSArray *)deletedItems;
- (char)modified;
- (NSObject *)_nextAvailableSocialService;
- (NSObject *)_nextAvailableInstantMessageService;
- (NSString *)_nextAvailableLabel;
- (NSString *)nextAvailableLabel;
- (char)canAddEditingItem;
- (void)setIsAdded:(char)arg0;
- (void)reloadDataPreservingChanges:(char)arg0;
- (NSArray *)contacts;
- (id)emptyLabeledValue;
- (char)_arrayContainsMaxAllowedItems:(NSArray *)arg0;
- (void)setEditingItems:(NSArray *)arg0;
- (void)setDeletedItems:(NSArray *)arg0;
- (void)saveChangesForItems:(NSArray *)arg0;
- (NSArray *)_mergeItems:(NSArray *)arg0 forEditing:(BOOL)arg1;
- (char)showActionsWhenEmpty;
- (char)isRequired;
- (char)isAdded;
- (char)_shoulShowGroupWhenEditing:(char)arg0;
- (id)_itemToBeMergedWith:(id)arg0 fromItems:(NSArray *)arg1 forEditing:(char)arg2;
- (NSArray *)propertyItems;
- (void)_updateNameValuesForItems:(NSArray *)arg0;
- (char)labelsAreUnique;
- (id)_availableLabelsInLabels:(id)arg0 forItem:(NSObject *)arg1 withValueSelector:(SEL)arg2 usedLabelsCount:(int *)arg3;
- (NSObject *)supportedLabelsForItem:(NSObject *)arg0;
- (id)_nextAvailableLabelInLabels:(id)arg0 withValueSelector:(SEL)arg1;
- (char)allowsAdding;
- (char)isMultiLine;
- (char)addEditingItem;
- (void)removeEditingItem:(NSObject *)arg0;
- (void)setContacts:(NSArray *)arg0;
- (void)saveChanges;
- (void)dealloc;
- (NSString *)description;
- (NSString *)property;

@end
