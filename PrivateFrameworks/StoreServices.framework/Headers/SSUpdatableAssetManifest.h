/* Runtime dump - SSUpdatableAssetManifest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAssetManifest : NSObject
{
    NSDictionary * _assetsByName;
    NSCache * _imageCache;
    NSArray * _assets;
    SSUpdatableAsset * _bootstrapAsset;
    NSURL * _cacheURL;
    NSDictionary * _extraInfo;
    NSString * _name;
    int _reloadUrgencyType;
    NSURL * _serverURL;
    NSString * _version;
    double _lastModifiedTimestamp;
}

@property (copy, nonatomic) NSArray * assets;
@property (retain, nonatomic) SSUpdatableAsset * bootstrapAsset;
@property (retain, nonatomic) NSURL * cacheURL;
@property (copy, nonatomic) NSDictionary * extraInfo;
@property (nonatomic) double lastModifiedTimestamp;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) int reloadUrgencyType;
@property (retain, nonatomic) NSURL * serverURL;
@property (copy, nonatomic) NSString * version;

- (void)_setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)version;
- (void).cxx_destruct;
- (NSURL *)serverURL;
- (NSArray *)assets;
- (void)_setAssets:(NSArray *)arg0;
- (NSString *)assetWithName:(NSString *)arg0;
- (SSUpdatableAsset *)bootstrapAsset;
- (void)_setBootstrapAsset:(NSSet *)arg0;
- (NSURL *)cacheURL;
- (void)_setCacheURL:(NSURL *)arg0;
- (NSDictionary *)extraInfo;
- (void)_setExtraInfo:(NSDictionary *)arg0;
- (double)lastModifiedTimestamp;
- (void)_setLastModifiedTimestamp:(double)arg0;
- (int)reloadUrgencyType;
- (void)_setReloadUrgencyType:(int)arg0;
- (void)_setServerURL:(NSURL *)arg0;
- (void)_setVersion:(NSString *)arg0;

@end
