/* Runtime dump - CKDPRecordRetrieveRequestRetrieveAssetURL
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying>
{
    long long _requestedTTL;
    CKDPRequestedFields * _assetFields;
    int _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasAssetFields;
@property (retain, nonatomic) CKDPRequestedFields * assetFields;
@property (nonatomic) char hasRequestedTTL;
@property (nonatomic) long long requestedTTL;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPRecordRetrieveRequestRetrieveAssetURL *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setRequestedTTL:(long long)arg0;
- (long long)requestedTTL;
- (CKDPRequestedFields *)assetFields;
- (void)setAssetFields:(CKDPRequestedFields *)arg0;
- (char)hasAssetFields;
- (void)setHasRequestedTTL:(char)arg0;
- (char)hasRequestedTTL;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
