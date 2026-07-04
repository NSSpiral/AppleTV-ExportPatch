/* Runtime dump - PLKeywordManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLKeywordManager : NSObject
{
    PLPhotoLibrary * _photoLibrary;
    PLManagedObjectContext * _libraryContext;
    PLGatekeeperClient * _assetsdClient;
}

+ (NSObject<OS_dispatch_queue> *)writeQueue;

- (void)dealloc;
- (PLKeywordManager *)initWithPhotoLibrary:(PLPhotoLibrary *)arg0;
- (NSArray *)keywordsForAssets:(NSArray *)arg0;
- (NSSet *)keywordsForAsset:(NSSet *)arg0;
- (char)setKeywords:(id)arg0 forAssetUUID:(id)arg1;
- (NSSet *)_keywordsForAsset:(NSSet *)arg0;
- (id)keywordObjectsForKeywords:(id)arg0;
- (id)allKeywords;
- (id)keywordsForAssetWithUUID:(id)arg0;

@end
