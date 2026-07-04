/* Runtime dump - CKDPRecordSaveRequestShareIdUpdate
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveRequestShareIdUpdate : PBCodable <NSCopying>
{
    CKDPShareIdentifier * _shareId;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordSaveRequestShareIdUpdate *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (char)hasShareId;
- (CKDPShareIdentifier *)shareId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
