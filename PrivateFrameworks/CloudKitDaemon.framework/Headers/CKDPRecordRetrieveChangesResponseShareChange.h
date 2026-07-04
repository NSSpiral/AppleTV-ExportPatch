/* Runtime dump - CKDPRecordRetrieveChangesResponseShareChange
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying>
{
    int _changeType;
    CKDPShare * _share;
    CKDPShareIdentifier * _shareIdentifier;
    struct ? _has;
}

@property (readonly, nonatomic) char hasShareIdentifier;
@property (retain, nonatomic) CKDPShareIdentifier * shareIdentifier;
@property (nonatomic) char hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) char hasShare;
@property (retain, nonatomic) CKDPShare * share;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveChangesResponseShareChange *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setShare:(CKDPShare *)arg0;
- (char)hasShare;
- (CKDPShare *)share;
- (void)setShareIdentifier:(CKDPShareIdentifier *)arg0;
- (char)hasShareIdentifier;
- (void)setHasChangeType:(char)arg0;
- (char)hasChangeType;
- (CKDPShareIdentifier *)shareIdentifier;
- (void)setChangeType:(int)arg0;
- (int)changeType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
