/* Runtime dump - CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying>
{
    NSMutableArray * _assetFields;
    CKDPRecordIdentifier * _recordId;
    CKDPRecordType * _type;
}

@property (readonly, nonatomic) char hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier * recordId;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) CKDPRecordType * type;
@property (retain, nonatomic) NSMutableArray * assetFields;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(CKDPRecordType *)arg0;
- (CKDPRecordType *)type;
- (CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addAssetFields:(NSArray *)arg0;
- (void)setRecordId:(CKDPRecordIdentifier *)arg0;
- (unsigned int)assetFieldsCount;
- (void)clearAssetFields;
- (NSObject *)assetFieldsAtIndex:(unsigned int)arg0;
- (char)hasRecordId;
- (CKDPRecordIdentifier *)recordId;
- (NSMutableArray *)assetFields;
- (void)setAssetFields:(NSMutableArray *)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
