/* Runtime dump - CKDPRecordRetrieveChangesResponseRecordChange
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying>
{
    NSString * _etag;
    CKDPRecord * _record;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRecordType * _recordType;
    int _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier * recordIdentifier;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasRecordType;
@property (retain, nonatomic) CKDPRecordType * recordType;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) CKDPRecord * record;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPRecordRetrieveChangesResponseRecordChange *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (CKDPRecord *)record;
- (void)setRecord:(CKDPRecord *)arg0;
- (CKDPRecordType *)recordType;
- (void)setRecordIdentifier:(CKDPRecordIdentifier *)arg0;
- (char)hasRecordIdentifier;
- (CKDPRecordIdentifier *)recordIdentifier;
- (char)hasRecord;
- (void)setRecordType:(CKDPRecordType *)arg0;
- (char)hasRecordType;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
