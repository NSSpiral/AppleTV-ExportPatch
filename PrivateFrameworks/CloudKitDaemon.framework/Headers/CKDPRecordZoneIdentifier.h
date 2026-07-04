/* Runtime dump - CKDPRecordZoneIdentifier
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier * _ownerIdentifier;
    CKDPIdentifier * _value;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKDPIdentifier * value;
@property (readonly, nonatomic) char hasOwnerIdentifier;
@property (retain, nonatomic) CKDPIdentifier * ownerIdentifier;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPIdentifier *)value;
- (void)setValue:(CKDPIdentifier *)arg0;
- (CKDPRecordZoneIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasValue;
- (void)setOwnerIdentifier:(CKDPIdentifier *)arg0;
- (char)hasOwnerIdentifier;
- (CKDPIdentifier *)ownerIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
