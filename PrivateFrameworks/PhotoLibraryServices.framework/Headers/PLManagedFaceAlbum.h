/* Runtime dump - PLManagedFaceAlbum
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedFaceAlbum : PLManagedAlbum

@property (nonatomic) short keyAssetFaceIdentifier;
@property (nonatomic) int keyAssetFaceThumbnailIndex;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)insertInManagedObjectContext:(NSObject *)arg0;

- (short)keyAssetFaceIdentifier;
- (void)setKeyAssetFaceIdentifier:(short)arg0;
- (int)keyAssetFaceThumbnailIndex;
- (void)setKeyAssetFaceThumbnailIndex:(int)arg0;

@end
