/* Runtime dump - ABPersonTableViewActionsDelegate
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewActionsDelegate : NSObject <UIActionSheetDelegate, ABPersonTableActionDelegate, ABPersonTableTinyActionDelegate>
{
    int _highlightedValueIdentifier;
    char _highlightedValueIsImportant;
    int _actionSheetType;
    ABPersonTableTinyActionCell * _tinyActionCell;
    <ABFMFActionButtonsDelegate> * _FMFActionButtonsDelegate;
    char _actionShouldPickHighlightedValue;
    ABStyleProvider * _styleProvider;
    ABPersonTableViewDataSource * _dataSource;
    ABPersonTableActionDataSource * _actionDataSource;
    ABUIPerson * _highlightedValuePerson;
    int _highlightedValueProperty;
}

@property (nonatomic) <ABFMFActionButtonsDelegate> * FMFActionButtonsDelegate;
@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (nonatomic) ABPersonTableViewDataSource * dataSource;
@property (retain, nonatomic) ABUIPerson * highlightedValuePerson;
@property (nonatomic) int highlightedValueProperty;
@property (nonatomic) int highlightedValueIdentifier;
@property (readonly, nonatomic) ABPersonTableTinyActionCell * tinyActionCell;
@property (nonatomic) char actionShouldPickHighlightedValue;
@property (readonly, nonatomic) ABPersonTableActionDataSource * actionDataSource;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (void)setFMFActionButtonsDelegate:(NSObject *)arg0;
- (void)presentDifferentiationSheetForAction:(NSObject *)arg0;
- (void)action:(NSObject *)arg0 willShowButton:(id)arg1 forValueAtIndex:(int)arg2 inPropertyGroup:(NSObject *)arg3;
- (NSObject *)actionsForProperty:(int)arg0 withActionGrouping:(int)arg1;
- (NSString *)addActionWithTitle:(NSString *)arg0 shortTitle:(NSString *)arg1 detailText:(NSString *)arg2 style:(int)arg3 target:(NSObject *)arg4 selector:(SEL)arg5 property:(int)arg6 actionGrouping:(int)arg7 ordering:(int)arg8;
- (NSObject *)newActionsForProperty:(int)arg0;
- (int)groupingCountForProperty:(int)arg0;
- (NSObject *)actionsForProperty:(int)arg0 withActionGroupingAtIndex:(int)arg1;
- (ABPersonTableActionDataSource *)actionDataSource;
- (char)personTableTinyActionCell:(NSObject *)arg0 shouldShowAction:(NSObject *)arg1;
- (ABUIPerson *)highlightedValuePerson;
- (void)presentDifferentiationSheetIfNeededForAction:(NSObject *)arg0 withPropertyGroup:(ABAbstractPropertyGroup *)arg1;
- (char)hasActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(int)arg4 ordering:(int)arg5 outActions:(id *)arg6 outIndex:(int *)arg7;
- (void)removeActionWithSelector:(SEL)arg0 target:(NSObject *)arg1 property:(int)arg2 actionGrouping:(int)arg3 ordering:(int)arg4 animated:(char)arg5;
- (unsigned int)_sectionForAction:(NSObject *)arg0;
- (void)reloadBottomActionCellAnimated:(char)arg0;
- (int)actionCountForBottomGroupingExcludingProperty:(int)arg0 excludedPropertyGroupContext:(void *)arg1;
- (char)shouldShowActionForProperty:(int)arg0 propertyGroupContext:(void *)arg1 assumeThatPropertyHasSection:(char)arg2;
- (char)shouldShowActionForProperty:(int)arg0 propertyGroupContext:(void *)arg1;
- (char)shouldShowAction:(NSObject *)arg0 excludingProperty:(int)arg1 excludedPropertyGroupContext:(void *)arg2;
- (int)actionCountForGrouping:(int)arg0 inSection:(int)arg1 excludingProperty:(int)arg2 excludedPropertyGroupContext:(void *)arg3 outExcludedIndexPaths:(id *)arg4;
- (int)actionGroupingCountForPropertyGroup:(NSObject *)arg0 whenEditing:(char)arg1 assumeThatPropertyHasSection:(char)arg2;
- (char)isFavoriteOfType:(int)arg0 inPropertyGroup:(NSObject *)arg1 atIndex:(int)arg2;
- (ABPersonTableTinyActionCell *)tinyActionCell;
- (char)shouldShowAddToFavoritesAction;
- (void)addToFavoritesButtonClicked:(id)arg0;
- (void)sendTextMessage:(NSString *)arg0 person:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)shareContactButtonClicked:(id)arg0;
- (void)conference:(AVConference *)arg0 person:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)callContact:(id)arg0 person:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (void)reloadBottomActionDataForFavorites:(char)arg0 texting:(char)arg1 sharing:(char)arg2 conferencing:(char)arg3;
- (void)reloadBottomActionsAnimated:(char)arg0 favorites:(char)arg1 texting:(char)arg2 sharing:(char)arg3 conferencing:(char)arg4;
- (void)reloadBottomActionsAnimated:(char)arg0;
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(int)arg0 inPropertyGroup:(NSObject *)arg1 entryType:(int)arg2;
- (void)performPersonTableAction:(NSObject *)arg0 atIndexPath:(NSIndexPath *)arg1;
- (char)hasActionWithTitle:(NSString *)arg0 target:(NSObject *)arg1 selector:(SEL)arg2 property:(int)arg3 actionGrouping:(int)arg4 ordering:(int)arg5;
- (NSString *)addActionWithTitle:(NSString *)arg0 shortTitle:(NSString *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (NSString *)addActionWithTitle:(NSString *)arg0 content:(char *)arg1 target:(NSObject *)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (void)removeActionWithSelector:(SEL)arg0 target:(NSObject *)arg1 property:(int)arg2 actionGrouping:(int)arg3 ordering:(int)arg4;
- (int)actionCountForTopGroupingInSection:(int)arg0 excludingProperty:(int)arg1 excludedPropertyGroupContext:(void *)arg2 outExcludedIndexPaths:(id *)arg3;
- (int)actionGroupingCountForPropertyGroup:(NSObject *)arg0 whenEditing:(char)arg1;
- (void)reloadBottomActions;
- (void)reloadPrimaryPropertyActionsSection;
- (char)actionShouldPickHighlightedValue;
- (void)setActionShouldPickHighlightedValue:(char)arg0;
- (<ABFMFActionButtonsDelegate> *)FMFActionButtonsDelegate;
- (void)setHighlightedValuePerson:(ABUIPerson *)arg0;
- (int)highlightedValueProperty;
- (void)setHighlightedValueProperty:(int)arg0;
- (int)highlightedValueIdentifier;
- (void)setHighlightedValueIdentifier:(int)arg0;
- (void)dealloc;
- (void)setDataSource:(ABPersonTableViewDataSource *)arg0;
- (ABPersonTableViewActionsDelegate *)init;
- (ABPersonTableViewDataSource *)dataSource;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;

@end
