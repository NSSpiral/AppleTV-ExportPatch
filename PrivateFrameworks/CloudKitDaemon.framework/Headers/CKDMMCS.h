/* Runtime dump - CKDMMCS
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCS : NSObject
{
    NSString * _path;
    CKDAssetCache * _assetCache;
    CKDMMCSEngineContext * _MMCSEngineContext;
}

@property (retain, nonatomic) NSString * path;
@property (retain, nonatomic) CKDAssetCache * assetCache;
@property (readonly, nonatomic) unsigned long maxChunkCountForSection;
@property (retain, nonatomic) CKDMMCSEngineContext * MMCSEngineContext;
@property (readonly, nonatomic) struct __MMCSEngine * MMCSEngine;

+ (NSObject *)MMCSWrapperForApplicationBundleID:(NSObject *)arg0 path:(NSString *)arg1 assetDbPath:(NSString *)arg2 fileDownloadPath:(NSString *)arg3 packageDownloadPath:(NSString *)arg4 packageUploadPath:(NSString *)arg5 isUTAccount:(char)arg6 error:(id *)arg7;
+ (NSObject *)zeroSizeFileSignature;
+ (int)_commonErrorCodeWithMMCSError:(NSError *)arg0;
+ (int)_errorCodeWithMMCSGetError:(NSError *)arg0;
+ (int)_errorCodeWithMMCSPutError:(NSError *)arg0;
+ (NSError *)_userInfoFromMMCSRetryableError:(NSError *)arg0;
+ (NSError *)_errorWithMMCSError:(NSError *)arg0 path:(NSString *)arg1 description:(NSString *)arg2 isGet:(char)arg3;
+ (CKDMMCS *)sharedWrappersByBundleID;
+ (void)purgeMMCSDirectoryWithMaxLifetime:(double)arg0 path:(NSString *)arg1 assetsDbPath:(NSString *)arg2;
+ (NSError *)_errorWithMMCSError:(NSError *)arg0 description:(NSString *)arg1 isGet:(char)arg2;
+ (NSString *)protocolVersion;

- (void)dealloc;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (DAStatusReport *)statusReport;
- (CKDAssetCache *)assetCache;
- (NSObject *)getSectionItem:(NSObject *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (NSSet *)getItemGroupSet:(NSSet *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (unsigned long)getMaxChunkCountForSection;
- (NSSet *)registerItemGroupSet:(NSSet *)arg0 shouldChunk:(char)arg1 completionHandler:(id /* block */)arg2;
- (NSSet *)registerItemGroupSet:(NSSet *)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)putSectionItem:(NSObject *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (NSSet *)putItemGroupSet:(NSSet *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (CKDMMCS *)initWithMMCSEngineContext:(NSObject *)arg0 path:(NSString *)arg1;
- (void)setAssetCache:(CKDAssetCache *)arg0;
- (CKDMMCSEngineContext *)MMCSEngineContext;
- (NSString *)_referenceIdentifierFromAssetKey:(NSString *)arg0;
- (struct __MMCSEngine *)getMMCSEngine;
- (NSObject *)_contextToRegisterItemGroup:(NSObject *)arg0 options:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (void)_logMMCSOptions:(NSDictionary *)arg0;
- (NSObject *)_contextToGetItemGroup:(NSObject *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (NSObject *)_contextToPutItemGroup:(NSObject *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (NSObject *)_contextToPutSectionItem:(NSObject *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (NSObject *)_contextToGetSectionItem:(NSObject *)arg0 options:(NSDictionary *)arg1 progress:(NSProgress *)arg2 completionHandler:(/* block */ id)arg3;
- (void)unregisterItemIDs:(id)arg0;
- (void)setMMCSEngineContext:(NSObject *)arg0;

@end
