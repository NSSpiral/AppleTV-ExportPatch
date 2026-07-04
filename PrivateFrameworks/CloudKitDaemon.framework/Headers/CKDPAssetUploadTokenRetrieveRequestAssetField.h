/* Runtime dump - CKDPAssetUploadTokenRetrieveRequestAssetField
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>
{
    NSMutableArray * _assets;
    CKDPRecordFieldIdentifier * _field;
}

@property (readonly, nonatomic) char hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * field;
@property (retain, nonatomic) NSMutableArray * assets;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPAssetUploadTokenRetrieveRequestAssetField *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setField:(CKDPRecordFieldIdentifier *)arg0;
- (void)clearAssets;
- (NSObject *)assetsAtIndex:(unsigned int)arg0;
- (char)hasField;
- (CKDPRecordFieldIdentifier *)field;
- (NSMutableArray *)assets;
- (unsigned int)assetsCount;
- (void)setAssets:(NSMutableArray *)arg0;
- (void)addAssets:(NSArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
