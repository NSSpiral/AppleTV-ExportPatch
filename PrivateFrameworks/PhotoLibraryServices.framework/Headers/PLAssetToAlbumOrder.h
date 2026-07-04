/* Runtime dump - PLAssetToAlbumOrder
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetToAlbumOrder : PLManagedObject <PLOrderKeyObject>

@property (nonatomic) long long orderValue;
@property (retain, nonatomic) PLManagedAsset * asset;
@property (retain, nonatomic) PLManagedAlbum * album;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)newAssetOrderForAsset:(NSSet *)arg0 album:(PLManagedAlbum *)arg1;

- (void)didSave;
- (NSString *)secondaryOrderSortKey;
- (NSObject *)childManagedObject;

@end
