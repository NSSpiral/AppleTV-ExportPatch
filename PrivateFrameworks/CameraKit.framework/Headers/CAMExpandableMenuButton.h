/* Runtime dump - CAMExpandableMenuButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMExpandableMenuButton : UIControl
{
    char _expanded;
    int _selectedIndex;
    int _expansionOrientation;
    int _orientation;
    <CAMExpandableMenuButtonDelegate> * _expandableMenuDelegate;
    NSMutableArray * __menuItems;
    UIView * __headerView;
    NSIndexSet * __hiddenIndexesWhileCollapsed;
    NSMutableIndexSet * __highlightedIndexesWhileCollapsed;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic) int selectedIndex;
@property (readonly, nonatomic) char expanded;
@property (nonatomic) int expansionOrientation;
@property (nonatomic) int orientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets;
@property (weak, nonatomic) <CAMExpandableMenuButtonDelegate> * expandableMenuDelegate;
@property (readonly, nonatomic) NSMutableArray * _menuItems;
@property (readonly, nonatomic) UIView * _headerView;
@property (readonly, copy, nonatomic) NSIndexSet * _hiddenIndexesWhileCollapsed;
@property (readonly, copy, nonatomic) NSMutableIndexSet * _highlightedIndexesWhileCollapsed;

+ (double)expansionDuration;

- (void)reloadData;
- (CAMExpandableMenuButton *)init;
- (void)layoutSubviews;
- (void)setOrientation:(int)arg0 animated:(char)arg1;
- (int)orientation;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (char)isExpanded;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (UIView *)headerView;
- (void)setOrientation:(int)arg0;
- (void).cxx_destruct;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets)arg0;
- (void)setExpansionOrientation:(int)arg0;
- (void)setExpandableMenuDelegate:(<CAMExpandableMenuButtonDelegate> *)arg0;
- (struct CGSize)intrinsicContentSizeForExpansion:(char)arg0;
- (struct CGRect)frameForAlignmentRect:(NSObject *)arg0 expanded:(SEL)arg1;
- (void)startCollapsingWithProposedFrame:(struct CGRect)arg0;
- (void)finishCollapsingAnimated:(char)arg0;
- (struct CGRect)alignmentRectForFrame:(NSObject *)arg0 expanded:(SEL)arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect)arg0;
- (void)finishExpansionAnimated:(char)arg0;
- (void)updateToContentSize:(NSObject *)arg0;
- (struct UIEdgeInsets)tappableEdgeInsets;
- (void)setHighlighted:(char)arg0 forIndex:(int)arg1;
- (CAMExpandableMenuButton *)initWithExpansionOrientation:(int)arg0;
- (int)numberOfMenuItems;
- (NSObject *)titleForMenuItemAtIndex:(int)arg0;
- (NSIndexSet *)hiddenIndexesWhileCollapsed;
- (void)_updateFromExpansionChangeAnimated:(char)arg0;
- (void)_updateFromOrientationChangeAnimated:(char)arg0;
- (void)_handleTapGestureRecognizer:(NSObject *)arg0;
- (struct CGSize)_layoutMenuButton:(char)arg0 expanded:(char)arg1;
- (char)_wantsSelectedItemToBeVisible;
- (NSString *)_selectedLabel;
- (struct CGSize)_layoutForVerticalExpandedPortraitButtonApplyToHeaderView:(char)arg0 applyToSelectedItem:(char)arg1 applyToOtherViews:(char)arg2;
- (struct CGSize)_layoutForHorizontalCollapsedPortraitButton:(char)arg0;
- (struct CGSize)_layoutForHorizontalExpandedLandscapeButton:(char)arg0;
- (struct CGSize)_layoutForHorizontalExpandedPortraitButton:(char)arg0;
- (struct CGSize)_layoutForHorizontalCollapsedLandscapeButton:(char)arg0;
- (struct CGSize)_layoutForVerticalExpandedLandscapeButton:(char)arg0;
- (struct CGSize)_layoutForVerticalExpandedPortraitButton:(char)arg0;
- (struct CGSize)_layoutForVerticalCollapsedLandscapeButton:(char)arg0;
- (struct CGSize)_layoutForVerticalCollapsedPortraitButton:(char)arg0;
- (int)expansionOrientation;
- (struct CGSize)_layoutForHorizontalExpansionOrientation:(char)arg0 expanded:(char)arg1;
- (struct CGSize)_layoutForVerticalExpansionOrientation:(char)arg0 expanded:(char)arg1;
- (NSIndexSet *)_hiddenIndexesWhileCollapsed;
- (void)_updateFromSelectedIndexChange;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemTextAlignmentForCurrentOrientation;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect)arg0;
- (void)expandMenuAnimated:(char)arg0;
- (void)collapseMenuAnimated:(char)arg0;
- (void)completeExpansionToProposedFrame:(struct CGRect)arg0;
- (char)shouldIgnoreMenuInteraction;
- (<CAMExpandableMenuButtonDelegate> *)expandableMenuDelegate;
- (NSMutableArray *)_menuItems;
- (UIView *)_headerView;
- (NSMutableIndexSet *)_highlightedIndexesWhileCollapsed;

@end
