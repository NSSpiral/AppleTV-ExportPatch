/* Runtime dump - ATVCupidPhotoBrowserTemplate
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVDefaultPhotos, ATVFullScreenPhotoBrowserController;
@interface ATVCupidPhotoBrowserTemplate : BRViewController
{
    char _viewReloadPending;
    char _dataRequiresUpdate;
    ATVDataClient * _dataClient;
    ATVDataCollection * _collection;
    ATVDataItem * _initialSelection;
    NSArray * _resultData;
    ATVFullScreenPhotoBrowserController * _fullScreenController;
    NSTimer * _spinnerTimer;
    ATVDataQuery * _pendingCollectionMetaDataQuery;
    NSDictionary * _likeTextAttributes;
}

@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataCollection * collection;
@property (retain, nonatomic) ATVDataItem * initialSelection;
@property (retain, nonatomic) NSArray * resultData;
@property (retain, nonatomic) ATVFullScreenPhotoBrowserController * fullScreenController;
@property (nonatomic) char viewReloadPending;
@property (weak, nonatomic) NSTimer * spinnerTimer;
@property (nonatomic) char dataRequiresUpdate;
@property (retain, nonatomic) ATVDataQuery * pendingCollectionMetaDataQuery;
@property (retain, nonatomic) NSDictionary * likeTextAttributes;

+ (ATVCupidPhotoBrowserTemplate *)controllerForCollection:(id)arg0 dataClient:(ATVDataClient *)arg1;
+ (ATVCupidPhotoBrowserTemplate *)_commentDataWithComment:(NSString *)arg0 filterLikeAndCaption:(char)arg1;

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (void)_executeDataQuery;
- (void)_showSpinner:(id)arg0;
- (void)wasExhumed;
- (char)_handleContextMenuSelection:(id /* block */)arg0;
- (void)setInitialSelection:(ATVDataItem *)arg0;
- (ATVCupidPhotoBrowserTemplate *)initForCollection:(RadioArtworkCollection *)arg0 dataClient:(ATVDataClient *)arg1;
- (ATVDataQuery *)pendingCollectionMetaDataQuery;
- (void)setDataRequiresUpdate:(char)arg0;
- (void)setPendingCollectionMetaDataQuery:(ATVDataQuery *)arg0;
- (char)viewReloadPending;
- (ATVFullScreenPhotoBrowserController *)fullScreenController;
- (void)setFullScreenController:(ATVFullScreenPhotoBrowserController *)arg0;
- (void)_initiateSlideshowPlaybackAtIndex:(long)arg0 inPhotos:(ATVDefaultPhotos *)arg1 withOptions:(NSDictionary *)arg2;
- (NSObject *)_standardProvidersForPhotoContextMenuPhotoAtIndex:(int)arg0;
- (char)dataRequiresUpdate;
- (void)_dataQueryComplete;
- (void)setViewReloadPending:(char)arg0;
- (void)_playerLastPlayedAsset:(NSSet *)arg0;
- (void)_pushFullScreenControllerWithType:(int)arg0 resultSubset:(NSSet *)arg1 initialIndex:(unsigned int)arg2;
- (void)_updateItemInResultDataWithItem:(NSObject *)arg0;
- (void)_updateFullScreenPhotoMetadataWithProperties:(NSDictionary *)arg0;
- (void)_handleItemSelection:(id)arg0;
- (void)_handleItemPlay:(id)arg0;
- (void)_handleSlideshowSelection:(id)arg0;
- (ATVDataItem *)initialSelection;
- (NSDictionary *)likeTextAttributes;
- (void)setLikeTextAttributes:(NSDictionary *)arg0;
- (ATVDataCollection *)collection;
- (void)dealloc;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;
- (void)setCollection:(ATVDataCollection *)arg0;
- (NSArray *)resultData;
- (void)setResultData:(NSArray *)arg0;

@end
