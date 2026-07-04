/* Runtime dump - CKDPQuerySort
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQuerySort : PBCodable <NSCopying>
{
    CKDPLocationCoordinate * _coordinate;
    CKDPRecordFieldIdentifier * _fieldName;
    int _order;
    struct ? _has;
}

@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier * fieldName;
@property (nonatomic) char hasOrder;
@property (nonatomic) int order;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) CKDPLocationCoordinate * coordinate;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPQuerySort *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setOrder:(int)arg0;
- (int)order;
- (void).cxx_destruct;
- (void)setFieldName:(CKDPRecordFieldIdentifier *)arg0;
- (char)hasFieldName;
- (void)setHasOrder:(char)arg0;
- (char)hasOrder;
- (char)hasCoordinate;
- (CKDPRecordFieldIdentifier *)fieldName;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (CKDPLocationCoordinate *)coordinate;
- (void)setCoordinate:(CKDPLocationCoordinate *)arg0;

@end
