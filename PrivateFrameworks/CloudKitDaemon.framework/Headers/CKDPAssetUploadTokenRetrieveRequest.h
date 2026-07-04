/* Runtime dump - CKDPAssetUploadTokenRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray * _assets;
    CKDPRecordFieldIdentifier * _field;
    CKDPRecordType * _type;
    NSMutableArray * _uploads;
}

@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) CKDPRecordType * type;
@property (readonly, nonatomic) char hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * field;
@property (retain, nonatomic) NSMutableArray * assets;
@property (retain, nonatomic) NSMutableArray * uploads;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(CKDPRecordType *)arg0;
- (CKDPRecordType *)type;
- (CKDPAssetUploadTokenRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setField:(CKDPRecordFieldIdentifier *)arg0;
- (void)clearAssets;
- (NSObject *)assetsAtIndex:(unsigned int)arg0;
- (char)hasField;
- (CKDPRecordFieldIdentifier *)field;
- (void)setUploads:(NSMutableArray *)arg0;
- (void)addUploads:(id)arg0;
- (unsigned int)uploadsCount;
- (void)clearUploads;
- (NSObject *)uploadsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)uploads;
- (char)hasType;
- (NSMutableArray *)assets;
- (unsigned int)assetsCount;
- (void)setAssets:(NSMutableArray *)arg0;
- (void)addAssets:(NSArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
