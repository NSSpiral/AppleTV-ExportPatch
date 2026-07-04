/* Runtime dump - ATVRadioStationsView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVRadioScrollContentControl, BRControl, BRCursorControl, BRGridControl, BRGridView, BRHorizontalDividerControl, BRMediaShelfView, BRPosterControl, BRScrollControl, BRTextControl;
@interface ATVRadioStationsView : BRControl
{
    char _editingStations;
    <ATVRadioStationsViewDataSource> * _dataSource;
    <ATVRadioStationsViewDelegate> * _delegate;
    BRScrollControl * _scrollControl;
    ATVRadioScrollContentControl * _scrollContentsControl;
    BRCursorControl * _cursorControl;
    BRTextControl * _headerTextControl;
    BRMediaShelfView * _featuredStationsMediaShelfView;
    BRHorizontalDividerControl * _featuredStationsDivider;
    BRHorizontalDividerControl * _personalStationsDivider;
    BRGridView * _stationsGridView;
    BRPosterControl * _emptyPersonalStationsPoster;
}

@property (weak, nonatomic) <ATVRadioStationsViewDataSource> * dataSource;
@property (weak, nonatomic) <ATVRadioStationsViewDelegate> * delegate;
@property (nonatomic) char editingStations;
@property (nonatomic) char featuredStationsDividerHidden;
@property (copy, nonatomic) NSString * featuredStationsTitle;
@property (copy, nonatomic) NSString * personalStationsTitle;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) BRScrollControl * scrollControl;
@property (retain, nonatomic) ATVRadioScrollContentControl * scrollContentsControl;
@property (retain, nonatomic) BRCursorControl * cursorControl;
@property (retain, nonatomic) BRTextControl * headerTextControl;
@property (retain, nonatomic) BRMediaShelfView * featuredStationsMediaShelfView;
@property (retain, nonatomic) BRHorizontalDividerControl * featuredStationsDivider;
@property (retain, nonatomic) BRHorizontalDividerControl * personalStationsDivider;
@property (retain, nonatomic) BRGridView * stationsGridView;
@property (retain, nonatomic) BRPosterControl * emptyPersonalStationsPoster;

- (void)layoutSubcontrols;
- (void)setFeaturedStationsDividerHidden:(char)arg0;
- (void)setFeaturedStationsTitle:(NSString *)arg0;
- (void)setPersonalStationsTitle:(NSString *)arg0;
- (void)updatePersistentSavedSelection;
- (void)restorePersistentSelection;
- (BRMediaShelfView *)featuredStationsMediaShelfView;
- (BRGridView *)stationsGridView;
- (BRHorizontalDividerControl *)featuredStationsDivider;
- (NSDictionary *)_dividerTitleAttributes;
- (BRHorizontalDividerControl *)personalStationsDivider;
- (BRTextControl *)headerTextControl;
- (void)_updateForChangedDistanceFromVanishingPointAnimated:(char)arg0;
- (void)_updateForChangedDistanceFromVanishingPoint;
- (unsigned int)_gridIndexForSearchButton;
- (NSDictionary *)_posterTitleAttributes;
- (ATVRadioScrollContentControl *)scrollContentsControl;
- (unsigned int)_numberOfPersonalStations;
- (unsigned int)_stationIndexForGridIndex:(unsigned int)arg0;
- (void)_configureStationControl:(BRControl *)arg0;
- (unsigned int)_gridIndexForStationIndex:(unsigned int)arg0;
- (unsigned int)_gridIndexNextToSearchButton;
- (void)grid:(BRGridControl *)arg0 didSelectItemAtIndex:(long)arg1;
- (void)setEditingStations:(char)arg0;
- (unsigned int)_numberOfFeaturedStations;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (BRScrollControl *)scrollControl;
- (BRPosterControl *)emptyPersonalStationsPoster;
- (BRCursorControl *)cursorControl;
- (void)_scrollInitiated:(id)arg0;
- (void)_scrollCompleted:(id)arg0;
- (id)_posterForAddingStation;
- (void)_emptyPersonalStationsPosterSelected;
- (char)isFeaturedStationsDividerHidden;
- (NSString *)featuredStationsTitle;
- (NSString *)personalStationsTitle;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (NSString *)grid:(BRGridControl *)arg0 itemIDAtIndex:(long)arg1;
- (long)grid:(BRGridControl *)arg0 indexForItemID:(NSObject *)arg1;
- (char)grid:(BRGridControl *)arg0 canMoveItemAtIndex:(long)arg1;
- (char)grid:(BRGridControl *)arg0 moveItemAtIndex:(long)arg1 toIndex:(long)arg2;
- (long)grid:(BRGridControl *)arg0 targetIndexForMoveFromItemAtIndex:(long)arg1 toProposedIndex:(long)arg2;
- (void)grid:(BRGridControl *)arg0 didPlayItemAtIndex:(long)arg1;
- (void)gridViewDidBeginEditing:(id)arg0;
- (void)gridViewDidEndEditing:(id)arg0;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInMediaShelf:(BRMediaShelfView *)arg0;
- (long)mediaShelf:(BRMediaShelfView *)arg0 numberOfColumnsInSection:(long)arg1;
- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 titleForSectionAtIndex:(long)arg1;
- (NSString *)mediaShelf:(BRMediaShelfView *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)mediaShelf:(BRMediaShelfView *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)mediaShelf:(BRMediaShelfView *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (char)isEditingStations;
- (void)setScrollControl:(BRScrollControl *)arg0;
- (void)setScrollContentsControl:(ATVRadioScrollContentControl *)arg0;
- (void)setCursorControl:(BRCursorControl *)arg0;
- (void)setHeaderTextControl:(BRTextControl *)arg0;
- (void)setFeaturedStationsMediaShelfView:(BRMediaShelfView *)arg0;
- (void)setFeaturedStationsDivider:(BRHorizontalDividerControl *)arg0;
- (void)setPersonalStationsDivider:(BRHorizontalDividerControl *)arg0;
- (void)setStationsGridView:(BRGridView *)arg0;
- (void)setEmptyPersonalStationsPoster:(BRPosterControl *)arg0;
- (void)dealloc;
- (void)setDataSource:(<ATVRadioStationsViewDataSource> *)arg0;
- (void)setDelegate:(<ATVRadioStationsViewDelegate> *)arg0;
- (void)reloadData;
- (ATVRadioStationsView *)init;
- (void)setTitle:(NSString *)arg0;
- (<ATVRadioStationsViewDataSource> *)dataSource;
- (<ATVRadioStationsViewDelegate> *)delegate;
- (NSString *)title;
- (void).cxx_destruct;

@end
