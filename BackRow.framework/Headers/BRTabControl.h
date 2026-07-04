/* Runtime dump - BRTabControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPanelControl.h>

@class BRControl, BREvent;
@interface BRTabControl : BRPanelControl
{
    int _selectedTabIndex;
    float _scaledTextPadding;
    float _scaledPreferredHeight;
    int _tabBeingDeselected;
    id _tabControlDelegate;
    NSArray * _greyImages;
    NSArray * _blackImages;
    NSArray * _blackImagesLeftIsSelected;
    NSArray * _blackImagesLeftIsSelectedUnfocused;
    NSArray * _blueImages;
    NSDictionary * _tabItemLabelAttributes;
}

+ (BRTabControl *)fullSizeTabControl;
+ (BRTabControl *)menuTabControl;

- (char)brEventAction:(BREvent *)arg0;
- (void)_focusChanged:(NSNotification *)arg0;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)addTabItems:(NSArray *)arg0;
- (void)selectTabItemAtIndex:(int)arg0;
- (void)setTabControlDelegate:(NSObject *)arg0;
- (int)selectedTabItemIndex;
- (NSArray *)accessibilityControls;
- (void)setScaledTextPadding:(float)arg0;
- (void)removeAllTabItems;
- (void)addTabItem:(NSObject *)arg0;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (void)selectTabItem:(NSObject *)arg0;
- (NSObject *)selectedTabItem;
- (int)tabItemCount;
- (void)_updateFocusNotifications;
- (void)_loadTabImages;
- (void)setScaledPreferredHeight:(float)arg0;
- (void)setTabItemLabelAttributes:(NSDictionary *)arg0;
- (void)selectPreviousTabItem;
- (void)selectNextTabItem;
- (NSObject *)_imagesForTabItem:(NSObject *)arg0;
- (void)_updateTabItemNames:(int)arg0;
- (void)_updateTabControlItemToTheRightOfIndex:(int)arg0;
- (void)setTabItemSelectedNonFocusedImages:(id)arg0;
- (void)setTabItemNonSelectedImages:(id)arg0;
- (void)setTabItemNonSelectedItemToLeftIsSelectedImages:(id)arg0;
- (void)setTabItemNonSelectedItemToLeftIsSelectedControlUnfocusedImages:(id)arg0;
- (void)setTabItemSelectedInFocusImages:(id)arg0;
- (id)_rightTabImagesFromImages:(id)arg0;
- (id)_leftTabImagesFromImages:(id)arg0;
- (id)_centerTabImagesFromImages:(id)arg0;
- (NSObject *)tabControlDelegate;
- (void)insertTabItem:(NSObject *)arg0 atIndex:(int)arg1;
- (void)removeTabItem:(NSObject *)arg0;
- (void)dealloc;
- (BRTabControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSArray *)tabItems;

@end
