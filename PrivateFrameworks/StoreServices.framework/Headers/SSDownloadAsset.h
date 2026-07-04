/* Runtime dump - SSDownloadAsset
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadAsset : SSEntity
{
    int _assetType;
    SSURLRequestProperties * _localProperties;
}

@property (readonly, retain) NSURLRequest * URLRequest;
@property (readonly) NSArray * sinfs;
@property (readonly) long long fileSize;
@property (readonly) NSString * downloadFileName;
@property (readonly) NSString * downloadPath;
@property (readonly) NSString * finalizedPath;
@property (readonly) char external;
@property (readonly) SSURLRequestProperties * URLRequestProperties;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setValuesMessage;
+ (NSURL *)assetWithURL:(NSURL *)arg0 type:(int)arg1;

- (NSArray *)sinfs;
- (NSDictionary *)copyXPCEncoding;
- (long long)bytesDownloaded;
- (SSDownloadAsset *)initWithURLRequest:(NSString *)arg0;
- (void)dealloc;
- (char)isExternal;
- (long long)fileSize;
- (int)_legacyAssetType;
- (void)_resetLocalIVars;
- (SSDownloadAsset *)initWithURLRequestProperties:(NSDictionary *)arg0;
- (NSDictionary *)_copyURLRequestProperties;
- (long long)bytesUploaded;
- (long long)bytesUploadTotal;
- (NSURLRequest *)URLRequest;
- (SSURLRequestProperties *)URLRequestProperties;
- (SSDownloadAsset *)initWithURLRequest:(NSString *)arg0 type:(int)arg1;
- (int)assetType;
- (NSString *)downloadFileName;
- (NSString *)downloadPath;
- (NSString *)finalizedPath;

@end
