/* Runtime dump - CKDPAssetUploadTokenRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray * _uploadTokens;
}

@property (retain, nonatomic) NSMutableArray * uploadTokens;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPAssetUploadTokenRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSMutableArray *)uploadTokens;
- (void)addUploadTokens:(id)arg0;
- (unsigned int)uploadTokensCount;
- (void)clearUploadTokens;
- (NSObject *)uploadTokensAtIndex:(unsigned int)arg0;
- (void)setUploadTokens:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
