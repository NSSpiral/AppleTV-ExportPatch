/* Runtime dump - CKDPRecordRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying>
{
    NSString * _clientVersionETag;
    CKDPRecordRetrieveRequestRetrieveAssetURL * _getAssetURL;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRequestedFields * _requestedFields;
    NSString * _versionETag;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier * recordIdentifier;
@property (readonly, nonatomic) char hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields * requestedFields;
@property (readonly, nonatomic) char hasVersionETag;
@property (retain, nonatomic) NSString * versionETag;
@property (readonly, nonatomic) char hasClientVersionETag;
@property (retain, nonatomic) NSString * clientVersionETag;
@property (readonly, nonatomic) char hasGetAssetURL;
@property (retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL * getAssetURL;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setRecordIdentifier:(CKDPRecordIdentifier *)arg0;
- (void)setRequestedFields:(CKDPRequestedFields *)arg0;
- (void)setVersionETag:(NSString *)arg0;
- (void)setClientVersionETag:(NSString *)arg0;
- (void)setGetAssetURL:(CKDPRecordRetrieveRequestRetrieveAssetURL *)arg0;
- (char)hasRecordIdentifier;
- (char)hasRequestedFields;
- (char)hasVersionETag;
- (char)hasClientVersionETag;
- (char)hasGetAssetURL;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (CKDPRecordIdentifier *)recordIdentifier;
- (CKDPRequestedFields *)requestedFields;
- (NSString *)versionETag;
- (NSString *)clientVersionETag;
- (CKDPRecordRetrieveRequestRetrieveAssetURL *)getAssetURL;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
