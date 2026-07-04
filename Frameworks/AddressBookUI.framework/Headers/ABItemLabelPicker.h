/* Runtime dump - ABItemLabelPicker
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate>
{
    id _delegate;
    id _editedItem;
    NSString * _savedLabel;
    NSString * _selectedLabel;
    NSIndexPath * _selectedPath;
    UITableView * _tableView;
    NSMutableArray * _additionalLabels;
    struct __CFArray * _sortedCustomItemLabelInfos;
    struct __CFArray * _sortedDefaultItemLabelInfos;
    void * _sortedCustomItemLabelInfosMemory;
    void * _sortedDefaultItemLabelInfosMemory;
    ABPropertyGroup * _propertyGroup;
    int _property;
    int _itemIndex;
    void * _addressBook;
    char _addLabelDisabled;
    char _didCreateNewLabel;
    ABStyleProvider * _styleProvider;
}

@property (readonly, nonatomic) UITableView * tableView;
@property (nonatomic) char addLabelDisabled;
@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (nonatomic) void * addressBook;
@property (nonatomic) char didCreateNewLabel;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)builtInLabelsForProperty:(int)arg0;
+ (struct __CFDictionary *)copyLabelUsageForPropertyGroup:(NSObject *)arg0 person:(void *)arg1;
+ (struct __CFDictionary *)copyLabelUsageForProperty:(int)arg0 person:(void *)arg1;
+ (ABItemLabelPicker *)defaultLabelsForProperty:(int)arg0 policy:(void *)arg1;
+ (NSObject *)_defaultLabelsForProperty:(int)arg0 person:(void *)arg1 propertyGroup:(ABPropertyGroup *)arg2 index:(int)arg3 addressBook:(void *)arg4 outBestLabelIndex:(int *)arg5 forceIncludeLabels:(id)arg6;
+ (ABItemLabelPicker *)defaultLabelsForProperty:(int)arg0 person:(void *)arg1 addressBook:(void *)arg2 outBestLabelIndex:(int *)arg3 forceIncludeLabels:(id)arg4;
+ (ABItemLabelPicker *)defaultLabelsForPropertyGroup:(NSObject *)arg0 index:(int)arg1 addressBook:(void *)arg2 outBestLabelIndex:(int *)arg3 forceIncludeLabels:(id)arg4;
+ (ABItemLabelPicker *)defaultLabelForProperty:(int)arg0 person:(void *)arg1 addressBook:(void *)arg2;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (void)buildUI;
- (void)resetLabelCaches;
- (void)_setSelectedLabel:(NSString *)arg0;
- (void)_setSelectedPath:(NSString *)arg0;
- (void)_matchSelectedPathWithSelectedLabel;
- (char)allowsCustomLabels;
- (NSString *)selectedLabel;
- (void)setSelectedLabel:(NSString *)arg0;
- (void)reloadItemLabels;
- (void)setIsEditing:(char)arg0 animate:(char)arg1;
- (void)setDidCreateNewLabel:(char)arg0;
- (void)_didEndPickingAndConfirmed:(char)arg0 animate:(char)arg1;
- (void)createNewCustomLabel;
- (void)_setSelectedLabel:(NSString *)arg0 atPath:(NSString *)arg1;
- (void)simpleTextInputViewController:(BRController *)arg0 didCompleteWithValue:(id)arg1;
- (char)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg0;
- (void)setPropertyGroup:(ABPropertyGroup *)arg0 itemIndex:(int)arg1;
- (void)setAdditionalLabels:(NSMutableArray *)arg0;
- (void)setSavedLabel:(NSString *)arg0;
- (NSString *)savedLabel;
- (char)canEdit;
- (void)toggleEditing;
- (char)shouldPopItem;
- (char)isAddLabelDisabled;
- (void)setAddLabelDisabled:(char)arg0;
- (char)didCreateNewLabel;
- (void)setAddressBook:(void *)arg0;
- (ABItemLabelPicker *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)reloadData;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (char)isEditing;
- (void)displayScrollerIndicators;
- (UITableView *)tableView;
- (void *)addressBook;

@end
