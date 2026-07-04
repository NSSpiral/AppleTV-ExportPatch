/* Runtime dump - CKDPQueryRetrieveResponseQueryResult
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying>
{
    NSString * _etag;
    CKDPRecordIdentifier * _identifier;
    CKDPRecord * _record;
    int _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier * identifier;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) CKDPRecord * record;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordIdentifier *)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPQueryRetrieveResponseQueryResult *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPRecordIdentifier *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (CKDPRecord *)record;
- (void)setRecord:(CKDPRecord *)arg0;
- (char)hasIdentifier;
- (char)hasRecord;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
