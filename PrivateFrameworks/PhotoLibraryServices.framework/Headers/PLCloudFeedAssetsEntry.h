/* Runtime dump - PLCloudFeedAssetsEntry
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry

@property (retain, nonatomic) NSOrderedSet * entryAssets;
@property (readonly, nonatomic) NSMutableOrderedSet * mutableEntryAssets;

+ (NSString *)entityName;

- (char)shouldBeRemovedFromPhotoLibrary:(NSObject *)arg0;
- (NSMutableOrderedSet *)mutableEntryAssets;

@end
