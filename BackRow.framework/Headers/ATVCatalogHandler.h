/* Runtime dump - ATVCatalogHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRSelectionHandler;

@class BRControl;
@interface ATVCatalogHandler : NSObject <BRSelectionHandler>
{
    char _shouldWatchNow;
    NSDictionary * _catalogItem;
    NSDictionary * _applicationContext;
}

@property (copy, nonatomic) NSDictionary * applicationContext;
@property (copy, nonatomic) NSDictionary * catalogItem;
@property (nonatomic) char shouldWatchNow;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)handleStoreOfferItemSelection:(id)arg0;
- (char)handleSelectionForControl:(BRControl *)arg0;
- (char)handlePlayForControl:(BRControl *)arg0;
- (char)handleStoreOfferItemPlay:(id)arg0;
- (void)_warningForActionResponse:(NSURLResponse *)arg0;
- (char)_handleFavoriteListItemSelection:(id)arg0 listItem:(NSObject *)arg1;
- (void)_playOrPauseItemID:(NSObject *)arg0;
- (char)_handleStoreOfferItemSelection:(id)arg0 forPlayEvent:(char)arg1;
- (void)_previewItemSelected:(id)arg0;
- (void)_podcastItemSelected:(id)arg0;
- (void)_warningForAction:(int)arg0 withObject:(NSObject *)arg1;
- (NSDictionary *)catalogItem;
- (void)setCatalogItem:(NSDictionary *)arg0;
- (NSDictionary *)applicationContext;
- (char)shouldWatchNow;
- (void)setShouldWatchNow:(char)arg0;
- (void)_playOrPauseAsset:(NSSet *)arg0 withOptions:(NSDictionary *)arg1;
- (void)_confirmAction:(int)arg0 withObject:(NSObject *)arg1;
- (NSObject *)_extrasNoticeForAction:(int)arg0 withObject:(NSObject *)arg1;
- (void)_transactionConfirmedForItem:(NSObject *)arg0;
- (void)_parentalControlPasscodeSuccessful:(id)arg0;
- (void)_presentAcquisitionController;
- (void)_playOrPauseAsset:(NSSet *)arg0;
- (void)dealloc;
- (void)setApplicationContext:(NSDictionary *)arg0;

@end
