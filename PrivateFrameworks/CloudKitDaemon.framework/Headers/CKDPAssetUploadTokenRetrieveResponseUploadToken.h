/* Runtime dump - CKDPAssetUploadTokenRetrieveResponseUploadToken
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying>
{
    CKDPAsset * _asset;
    NSString * _token;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString * token;
@property (readonly, nonatomic) char hasAsset;
@property (retain, nonatomic) CKDPAsset * asset;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPAssetUploadTokenRetrieveResponseUploadToken *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKDPAsset *)asset;
- (void)setAsset:(CKDPAsset *)arg0;
- (NSString *)token;
- (void)setToken:(NSString *)arg0;
- (char)hasToken;
- (char)hasAsset;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
