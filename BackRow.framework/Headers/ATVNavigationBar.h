/* Runtime dump - ATVNavigationBar
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVImageControl, BREvent, BRImageControl, BRPanelControl;
@interface ATVNavigationBar : BRControl
{
    NSTimer * _updateSelectedIndexTimer;
    BRPanelControl * _panel;
    ATVImageControl * _glow;
    char _rebuildPanel;
    int _selectedIndex;
    float _topMargin;
    float _panelHeight;
    BRImageControl * _backgroundGradient;
    id _controlCreationBlock;
    char _needsUpdateOfSelectedItem;
    char _needsUpdateOfItems;
    char _centerFocusLayout;
    NSArray * _items;
    id _selectedItem;
    int _focusedIndex;
    unsigned int _barStyle;
    double _timeSinceFocusMoved;
}

@property (readonly, nonatomic) unsigned int barStyle;
@property (copy, nonatomic) NSArray * items;
@property (nonatomic) id selectedItem;
@property (nonatomic) unsigned int selectedIndex;
@property (nonatomic) int _focusedIndex;
@property (nonatomic) int _selectedIndex;
@property (nonatomic) char _centerFocusLayout;
@property (nonatomic) double _timeSinceFocusMoved;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)windowMaxBoundsChanged;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (int)_selectedIndex;
- (void)registerControlCreationBlock:(id /* block */)arg0;
- (void)set_focusedIndex:(int)arg0;
- (void)set_centerFocusLayout:(char)arg0;
- (void)_updateRepositioning;
- (void)_setupGlowImage;
- (void)_restoreSelection;
- (id)ItemsBinding;
- (void)updateBoundItems;
- (void)_setSelectedIndex:(int)arg0;
- (NSObject *)_titleControlForObject:(NSObject *)arg0;
- (void)_setPanelFocusedControl;
- (void)_setGlowBounds:(struct CGRect)arg0;
- (void)_updateSelectedIndex;
- (id)SelectedItemBinding;
- (void)updateBoundSelectedItem;
- (int)_focusedIndex;
- (void)set_timeSinceFocusMoved:(double)arg0;
- (void)_setupSelectedIndexTimer;
- (double)_timeSinceFocusMoved;
- (void)bindItemsBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)bindSelectedItemBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)set_selectedIndex:(int)arg0;
- (char)_centerFocusLayout;
- (void)_selectedCategoryDidChange;
- (void)_clearSelectedIndexTimer;
- (void)dealloc;
- (ATVNavigationBar *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (unsigned int)barStyle;
- (ATVNavigationBar *)initWithStyle:(unsigned int)arg0;
- (void)setSelectedItem:(NSObject *)arg0;
- (unsigned int)selectedIndex;
- (void)setSelectedIndex:(unsigned int)arg0;
- (UITabBarItem *)selectedItem;

@end
