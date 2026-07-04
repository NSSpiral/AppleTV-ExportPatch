/* Runtime dump - MSUUpdateBrainAssetLoader
 * Image: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
 */

@interface MSUUpdateBrainAssetLoader : NSObject
{
    ASAsset * _updateAsset;
}

@property (retain, nonatomic) ASAsset * updateAsset;

- (void)dealloc;
- (char)cancel:(id *)arg0;
- (ASAsset *)updateAsset;
- (MSUUpdateBrainAssetLoader *)initWithUpdateAsset:(ASAsset *)arg0;
- (void)loadUpdateBrainWithOptions:(NSDictionary *)arg0 progressHandler:(id /* block */)arg1;
- (void)adjustOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (BOOL)purgeUpdateBrains:(id *)arg0;
- (long long)requiredDiskSpace:(id *)arg0;
- (void)setUpdateAsset:(ASAsset *)arg0;

@end
