/* Runtime dump - ASAsset
 * Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface ASAsset : NSObject
{
    NSString * _assetType;
    NSDictionary * _attributes;
    NSDictionary * _downloadOptions;
    NSString * _clientName;
    NSString * _identifier;
    id _progressHandler;
    struct __MobileAsset * _cfAsset;
}

@property (retain, nonatomic) NSString * clientName;
@property (readonly, nonatomic) NSDictionary * fullAttributes;
@property (readonly, nonatomic) NSString * assetType;
@property (readonly, nonatomic) NSDictionary * attributes;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSURL * localURL;
@property (nonatomic) int garbageCollectionBehavior;
@property (copy, nonatomic) id progressHandler;
@property (retain, nonatomic) NSDictionary * downloadOptions;

- (int)_formatVersion;
- (int)_contentVersion;
- (void)resumeDownload:(id)arg0;
- (void)pauseDownload:(id)arg0;
- (void)setGarbageCollectionBehavior:(int)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)state;
- (NSString *)identifier;
- (NSDictionary *)attributes;
- (NSURL *)localURL;
- (void)beginDownloadWithOptions:(NSDictionary *)arg0;
- (char)purgeAndReturnError:(id *)arg0;
- (void)setProgressHandler:(id /* block */)arg0;
- (id /* block */)progressHandler;
- (NSString *)clientName;
- (void)setClientName:(NSString *)arg0;
- (void)purge:(unsigned long long)arg0;
- (NSObject *)_getLocalAttribute:(NSObject *)arg0;
- (int)assetStateForStateString:(NSString *)arg0;
- (struct __MobileAsset *)mobileAsset;
- (char)requiredDiskSpaceIsAvailableForDownloadOptions:(NSDictionary *)arg0 requiredBytes:(long long *)arg1 error:(id *)arg2;
- (void)setDownloadOptions:(NSDictionary *)arg0;
- (void)_downloadWithOptions:(NSDictionary *)arg0 shouldFireCallback:(char)arg1;
- (char)pauseDownloadAndReturnError:(id *)arg0;
- (char)resumeDownloadAndReturnError:(id *)arg0;
- (char)cancelDownloadAndReturnError:(id *)arg0;
- (int)garbageCollectionBehavior;
- (char)requiredDiskSpaceIsAvailable:(long long *)arg0 error:(id *)arg1;
- (void)adjustDownloadOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (NSDictionary *)downloadOptions;
- (ASAsset *)initWithAssetType:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (NSDictionary *)fullAttributes;
- (char)isPresentOnDisk;
- (NSString *)assetType;
- (void)cancelDownload:(struct _GEOTileKey *)arg0;

@end
