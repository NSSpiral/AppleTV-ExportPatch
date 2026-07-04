/* Runtime dump - ATVDPAPPhotoBrowserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVPhotoFullScreenViewDataSource;
@protocol ATVPhotoFullScreenViewDelegate;

@class ATVDefaultPhotos, ATVPhotoBrowserView, ATVPhotoFullScreenView, BRControl, BREvent, BRGridControl, BRPhotoControlFactory;
@interface ATVDPAPPhotoBrowserController : BRViewController <ATVPhotoFullScreenViewDataSource, ATVPhotoFullScreenViewDelegate>
{
    NSTimer * _spinnerTimer;
    char _dataRequiresUpdate;
    long _collectionItemCount;
    char _photoBrowserViewReloadPending;
    id _screenSaverSetCollectionBlock;
    id _singlePhotoSelectionBlock;
    ATVPhotoBrowserView * _photoBrowserView;
    ATVPhotoFullScreenView * _photoFullScreenView;
    BRPhotoControlFactory * _controlFactory;
    ATVDataClient * _dataClient;
    NSString * _collectionType;
    ATVDataCollection * _collection;
    NSDateFormatter * _dateFormatter;
    ATVDataQuery * _pendingDataQuery;
    ATVDataQuery * _pendingCollectionMetaDataQuery;
    NSArray * _resultData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) id screenSaverSetCollectionBlock;
@property (copy, nonatomic) id singlePhotoSelectionBlock;
@property (retain, nonatomic) ATVPhotoBrowserView * _photoBrowserView;
@property (retain, nonatomic) ATVPhotoFullScreenView * _photoFullScreenView;
@property (retain, nonatomic) ATVDataClient * _dataClient;
@property (retain, nonatomic) NSString * _collectionType;
@property (retain, nonatomic) ATVDataCollection * _collection;
@property (retain, nonatomic) NSDateFormatter * _dateFormatter;
@property (retain, nonatomic) ATVDataQuery * pendingDataQuery;
@property (retain, nonatomic) ATVDataQuery * pendingCollectionMetaDataQuery;
@property (retain, nonatomic) NSArray * _resultData;
@property (retain, nonatomic) BRPhotoControlFactory * _controlFactory;

+ (ATVDPAPPhotoBrowserController *)controllerForCollection:(id)arg0 dataClient:(ATVDataClient *)arg1;
+ (NSObject *)controllerForCollectionType:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)wasPushed;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_showSpinner;
- (void)grid:(BRGridControl *)arg0 didSelectItemAtIndex:(long)arg1;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridControl *)arg0 itemAtIndex:(long)arg1;
- (void)grid:(BRGridControl *)arg0 didPlayItemAtIndex:(long)arg1;
- (void)_executeDataQuery;
- (ATVDataClient *)_dataClient;
- (ATVDataCollection *)_collection;
- (id /* block */)screenSaverSetCollectionBlock;
- (ATVDataQuery *)pendingCollectionMetaDataQuery;
- (void)setPendingCollectionMetaDataQuery:(ATVDataQuery *)arg0;
- (void)_initiateSlideshowPlaybackAtIndex:(long)arg0 inPhotos:(ATVDefaultPhotos *)arg1 withOptions:(NSDictionary *)arg2;
- (void)_playerLastPlayedAsset:(NSSet *)arg0;
- (void)_handleSlideshowSelection:(id)arg0;
- (NSArray *)_resultData;
- (void)_screensaverPhotosDidChange:(NSDictionary *)arg0;
- (float)grid:(BRGridControl *)arg0 heightForItemAtIndex:(long)arg1;
- (void)grid:(BRGridControl *)arg0 didFocusItemAtIndex:(long)arg1;
- (void)setScreenSaverSetCollectionBlock:(id /* block */)arg0;
- (BRPhotoControlFactory *)_controlFactory;
- (ATVDataQuery *)pendingDataQuery;
- (void)setPendingDataQuery:(ATVDataQuery *)arg0;
- (void)setSinglePhotoSelectionBlock:(id /* block */)arg0;
- (NSString *)_collectionType;
- (ATVDPAPPhotoBrowserController *)initWithCollectionType:(NSString *)arg0 collection:(ATVDataCollection *)arg1 dataClient:(ATVDataClient *)arg2;
- (void)set_dataClient:(ATVDataClient *)arg0;
- (void)set_collectionType:(NSString *)arg0;
- (void)set_collection:(ATVDataCollection *)arg0;
- (void)set_resultData:(NSArray *)arg0;
- (void)set_photoBrowserView:(ATVPhotoBrowserView *)arg0;
- (void)set_controlFactory:(BRPhotoControlFactory *)arg0;
- (void)set_photoFullScreenView:(ATVPhotoFullScreenView *)arg0;
- (void)set_dateFormatter:(NSDateFormatter *)arg0;
- (char)_switchToPhotoBrowserView;
- (id /* block */)singlePhotoSelectionBlock;
- (ATVPhotoBrowserView *)_photoBrowserView;
- (ATVPhotoFullScreenView *)_photoFullScreenView;
- (long)_collectionItemCount;
- (void)_handleUseForScreensaverSelection:(id)arg0;
- (void)_setSubtitleForObjectAtIndex:(long)arg0;
- (void)_playObjectAtIndex:(long)arg0 shuffle:(char)arg1;
- (ATVDataItem *)fullScreenView:(ATVPhotoFullScreenView *)arg0 objectAtIndex:(long)arg1;
- (long)numberOfItemsInFullScreenView:(ATVPhotoFullScreenView *)arg0;
- (void)fullScreenView:(ATVPhotoFullScreenView *)arg0 didSelectItemAtIndex:(long)arg1;
- (void)fullScreenView:(ATVPhotoFullScreenView *)arg0 didDisplayItemAtIndex:(long)arg1;
- (void)_addPhotoCollectionQueryProperties:(NSDictionary *)arg0;
- (void)_dataQueryComplete:(id)arg0;
- (void)dealloc;
- (NSDateFormatter *)_dateFormatter;
- (void)_updateButtons;
- (void)_dataClientDataUpdated:(ATVDataClient *)arg0;
- (void)_reload;

@end
