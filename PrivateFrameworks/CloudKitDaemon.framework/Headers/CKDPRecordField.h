/* Runtime dump - CKDPRecordField
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordField : PBCodable <NSCopying>
{
    CKDPRecordFieldIdentifier * _identifier;
    CKDPRecordFieldValue * _value;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * identifier;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKDPRecordFieldValue * value;

+ (NSString *)emptyFieldWithKey:(NSString *)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordFieldIdentifier *)identifier;
- (CKDPRecordFieldValue *)value;
- (void)setValue:(CKDPRecordFieldValue *)arg0;
- (CKDPRecordField *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPRecordFieldIdentifier *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasIdentifier;
- (char)hasValue;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
