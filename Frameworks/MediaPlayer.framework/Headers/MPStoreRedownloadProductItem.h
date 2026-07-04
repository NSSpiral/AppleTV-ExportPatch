/* Runtime dump - MPStoreRedownloadProductItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductItem : NSObject
{
    NSDictionary * _responseDictionary;
}

@property (readonly, copy, nonatomic) NSArray * allFlavors;
@property (readonly, nonatomic) MPStoreRedownloadProductItemAsset * asset;
@property (readonly, nonatomic) MPStoreRedownloadProductItemAsset * firstAsset;
@property (readonly, copy, nonatomic) NSString * fileExtension;

- (NSDictionary *)_initWithResponseDictionary:(NSDictionary *)arg0;
- (void)_enumerateAssetDictionariesWithBlock:(id /* block */)arg0;
- (NSArray *)allFlavors;
- (MPStoreRedownloadProductItemAsset *)firstAsset;
- (id)assetForFlavor:(id)arg0;
- (void).cxx_destruct;
- (MPStoreRedownloadProductItemAsset *)asset;
- (NSString *)fileExtension;

@end
