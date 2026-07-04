/* Runtime dump - ATVFlickrMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVInternetPhotosMonitor.h>

@protocol ATVSettingsSaver;

@class ATVFlickrURLFactory;
@interface ATVFlickrMonitor : ATVInternetPhotosMonitor <ATVSettingsSaver>
{
    ATVBackgroundTask * _backgroundTask;
    ATVFlickrURLFactory * _urlFactory;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVFlickrMonitor *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (void)initialize;

- (void)addPathsToSaveTo:(NSMutableSet *)arg0;
- (id)savedSearchTerms;
- (void)removeAccountWithName:(NSString *)arg0;
- (void)loadMediaForAccount:(NSObject *)arg0;
- (void)loadAssetsForCollection:(id)arg0;
- (void)cancelLoadMediaForAccount:(NSObject *)arg0;
- (void)cancelLoadAssetsForCollection:(id)arg0;
- (void)loadThumbnailImageForAsset:(NSSet *)arg0;
- (void)loadCoverArtImageForAsset:(NSSet *)arg0;
- (void)loadFullSizeImageForAsset:(NSSet *)arg0;
- (void)cancelLoadThumbnailImageForAsset:(NSSet *)arg0;
- (void)cancelLoadCoverArtImageForAsset:(NSSet *)arg0;
- (void)cancelLoadFullSizeImageForAsset:(NSSet *)arg0;
- (void)loadAccountWithName:(NSString *)arg0;
- (void)saveSearchTerm:(id)arg0;
- (void)removeSavedSearchTerm:(id)arg0;
- (NSString *)_savedSearchesFilePath;
- (void)_performAccountLoad:(id)arg0;
- (void)_performAccountMediaLoad:(id)arg0;
- (void)_performAccountSubAccountsLoad:(id)arg0;
- (void)_performAccountIconImageLoad:(id)arg0;
- (void)_performCollectionAssetsLoad:(id)arg0;
- (void)_performAssetThumbnailImageLoad:(id)arg0;
- (void)_performAssetCoverArtImageLoad:(id)arg0;
- (void)_performAssetFullSizeImageLoad:(id)arg0;
- (void)_performSearch:(id)arg0;
- (void)loadSubAccountsForAccount:(NSObject *)arg0;
- (void)loadAccountIconForAccount:(NSObject *)arg0;
- (void)searchWithSearchTerm:(NSString *)arg0;
- (void)cancelLoadSubAccountsForAccount:(NSObject *)arg0;
- (void)cancelLoadAccountIconForAccount:(NSObject *)arg0;
- (ATVBackgroundTask *)backgroundTask;
- (NSString *)taskContext;
- (NSURL *)_loadFlickrURL:(NSURL *)arg0;
- (void)_performAssetImageLoad:(id)arg0 sizeKey:(NSString *)arg1;
- (void)dealloc;
- (ATVFlickrMonitor *)init;
- (void)addAccount:(NSObject *)arg0;

@end
