/* Runtime dump - BRPhotoCollectionDataSource
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRCyclerDataSource;
@protocol BRCyclerDelegate;

@class BRControl, BRCyclerControl, BRPhotoControlFactory, BRStreamingPhotoCollection;
@interface BRPhotoCollectionDataSource : NSObject <BRCyclerDelegate, BRCyclerDataSource>
{
    BRStreamingPhotoCollection * _collection;
    BRPhotoControlFactory * _controlFactory;
    ATVDataQuery * _keyItemQuery;
    ATVDataQuery * _itemsQuery;
    NSMutableArray * _items;
    long _currentControlIndex;
    BRControl * _prefetchControl;
    long _prefetchControlIndex;
    char _cyclerFocused;
    char _itemsQueried;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)numberOfItemsInCycler:(BRCyclerControl *)arg0;
- (BRControl *)cycler:(BRCyclerControl *)arg0 itemAtIndex:(int)arg1;
- (void)setSelectionHandler:(<BRSelectionHandler> *)arg0;
- (<BRSelectionHandler> *)selectionHandler;
- (long)cycler:(BRCyclerControl *)arg0 willCycleToItemAtIndex:(long)arg1;
- (void)cyclerWasFocused:(BRCyclerControl *)arg0;
- (void)cyclerWasUnfocused:(BRCyclerControl *)arg0;
- (id)_itemsQueryForCollection:(id)arg0 requestKeyAssetOnly:(char)arg1;
- (NSObject *)_controlForIndex:(long)arg0 currentControl:(BRControl *)arg1 requestedBy:(NSObject *)arg2;
- (char)_isOriginalImageAvailableForPrefetchControl;
- (void)_loadOriginalImageForPrefetchControl;
- (void)_itemsQueryComplete:(id)arg0;
- (BRPhotoCollectionDataSource *)initWithCollection:(BRStreamingPhotoCollection *)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
