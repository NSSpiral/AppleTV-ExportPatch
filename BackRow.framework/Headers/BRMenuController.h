/* Runtime dump - BRMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRControl, BRHeaderControl, BRListControl, BRListControlMonitor, BRTextControl;
@interface BRMenuController : BRController
{
    BRListControl * _list;
    BRHeaderControl * _header;
    id _selectedObject;
    char _clearSavedSelection;
    BRListControlMonitor * _listControlMonitor;
    float _menuWidthFactor;
    float _headerWidthFactor;
    char _useCenteredLayout;
    BRTextControl * _primaryTextControl;
    BRTextControl * _secondaryTextControl;
    BRTextControl * _labelControl;
}

- (void)setPrimaryInfoText:(NSString *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)setPrimaryInfoText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)controlWasActivated;
- (void)setLabel:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setSecondaryInfoText:(NSString *)arg0;
- (NSObject *)selectedObject;
- (long)defaultIndex;
- (void)itemSelected:(long)arg0;
- (void)setUseCenteredLayout:(char)arg0;
- (void)setListIcon:(UIImage *)arg0;
- (void)setHeaderWidthFactor:(float)arg0;
- (char)isVolatile;
- (void)setIcon:(UIImage *)arg0 horizontalOffset:(float)arg1 kerningFactor:(float)arg2;
- (void)cancelCurrentListMonitorLoads;
- (void)clearSavedSelection;
- (float)listVerticalOffset;
- (void)setMenuWidthFactor:(float)arg0;
- (BRControl *)controlForContextMenuStart;
- (BRControl *)controlForContextMenuPositioning;
- (void)setListTitle:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (char)isValidAfterDataUpdate;
- (BRControl *)controlToDim;
- (void)setSecondaryInfoText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (int)contextMenuDimOption;
- (void)refreshControllerForModelUpdate;
- (void)refreshControllerForModelUpdateToObject:(NSObject *)arg0;
- (char)_itemSelected:(id)arg0;
- (void)layoutSubcontrolsUsingCenteredLayout;
- (void)setSelectedObject:(NSObject *)arg0;
- (NSArray *)loadModelData;
- (char)isCurrentSelectionValidForModelData:(NSData *)arg0;
- (float)menuWidthFactor;
- (float)headerWidthFactor;
- (char)shouldRefreshForUpdateToObject:(NSObject *)arg0;
- (id)primaryInfoTextControl;
- (id)secondaryInfoTextControl;
- (void)setListIcon:(UIImage *)arg0 horizontalOffset:(float)arg1 kerningFactor:(float)arg2;
- (UIImage *)listIcon;
- (void)setListIconHorizontalOffset:(float)arg0;
- (float)listIconHorizontalOffset;
- (void)setListIconKerningFactor:(float)arg0;
- (float)listIconKerningFactor;
- (int)soundForSelectingItem:(long)arg0;
- (void)setListTitle:(NSString *)arg0;
- (NSString *)listTitle;
- (void)dealloc;
- (BRMenuController *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)accessibilityLabel;
- (void)setSelectedItem:(long)arg0;
- (void)setLabel:(NSString *)arg0;
- (long)selectedItem;
- (long)itemCount;
- (BRListControl *)list;
- (BRHeaderControl *)header;
- (NSString *)accessibilitySecondaryLabel;

@end
