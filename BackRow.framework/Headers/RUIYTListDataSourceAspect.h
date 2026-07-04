/* Runtime dump - RUIYTListDataSourceAspect
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRControllerStack, BRListControl, BRListView, BRMenuItem, RUIYTAssetsInfo;
@interface RUIYTListDataSourceAspect : NSObject
{
    NSMutableIndexSet * _sectionsBeingLoaded;
    BRControllerStack * _controllerStack;
    NSIndexPath * _spinningRow;
    int _spinningRowAction;
    BRListView * _listView;
    id _sectionHandlerSelecting;
    NSArray * _sections;
    <RUIYTListDataSourceAspectDelegate> * _delegate;
    BRControl * _defaultPreviewControl;
    id _previewSetting;
}

@property (readonly, weak) BRListView * listView;
@property (retain, nonatomic) NSArray * sections;
@property (copy) id sectionHandlerSelecting;
@property (retain) BRControl * defaultPreviewControl;
@property (copy) id previewSetting;
@property (weak, nonatomic) <RUIYTListDataSourceAspectDelegate> * delegate;

- (BRListView *)listView;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (long)_numberOfRowsInSection:(long)arg0;
- (void)selectItemAtIndex:(NSObject *)arg0;
- (NSObject *)indexForItemID:(NSObject *)arg0;
- (void)resolvePendingActionsForIndex:(NSObject *)arg0;
- (void)moreAssetsAvailable:(RUIYTAssetsInfo *)arg0 forSection:(unsigned int)arg1;
- (void)discardPendingAction;
- (id)previewSetting;
- (NSObject *)_itemIDForItem:(NSObject *)arg0;
- (void)_itemSelected:(id)arg0 action:(int)arg1;
- (char)_loadMoreItemsForAssetsSection:(unsigned int)arg0 count:(unsigned int)arg1;
- (id)sectionHandlerSelecting;
- (void)_showError:(NSError *)arg0;
- (void)_setSpinningRow:(id)arg0 action:(int)arg1;
- (void)_loadPreviewForItem:(NSObject *)arg0;
- (id)_moreItemForAssetsSection:(id)arg0;
- (NSString *)_resourceForKey:(NSString *)arg0 forSection:(struct CGSize)arg1;
- (RUIYTListDataSourceAspect *)initWithListView:(BRListView *)arg0 controllerStack:(BRControllerStack *)arg1;
- (void)selectItemAtIndex:(NSObject *)arg0 action:(int)arg1;
- (char)loadMoreItemsForSection:(unsigned int)arg0;
- (void)moreAssetsFailed:(id)arg0 forSection:(unsigned int)arg1 timeStamp:(NSDate *)arg2;
- (void)setSectionHandlerSelecting:(id)arg0;
- (BRControl *)defaultPreviewControl;
- (void)setDefaultPreviewControl:(BRControl *)arg0;
- (void)setPreviewSetting:(id)arg0;
- (char)_shouldDisplayMoreItemForAssetsSection:(id)arg0;
- (char)_canLoadMoreItemsForAssetsSection:(id)arg0;
- (float)_heightForAsset:(NSSet *)arg0 type:(int)arg1;
- (void)setDelegate:(<RUIYTListDataSourceAspectDelegate> *)arg0;
- (<RUIYTListDataSourceAspectDelegate> *)delegate;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
