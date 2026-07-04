/* Runtime dump - CKDPQueryFilter
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryFilter : PBCodable <NSCopying>
{
    CKDPLocationBound * _bounds;
    CKDPRecordFieldIdentifier * _fieldName;
    CKDPRecordFieldValue * _fieldValue;
    int _type;
    struct ? _has;
}

@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * fieldName;
@property (readonly, nonatomic) char hasFieldValue;
@property (retain, nonatomic) CKDPRecordFieldValue * fieldValue;
@property (readonly, nonatomic) char hasBounds;
@property (retain, nonatomic) CKDPLocationBound * bounds;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (CKDPLocationBound *)bounds;
- (void)setBounds:(CKDPLocationBound *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (CKDPQueryFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setFieldName:(CKDPRecordFieldIdentifier *)arg0;
- (char)hasFieldName;
- (CKDPRecordFieldIdentifier *)fieldName;
- (char)hasBounds;
- (void)setFieldValue:(CKDPRecordFieldValue *)arg0;
- (char)hasFieldValue;
- (CKDPRecordFieldValue *)fieldValue;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
