/* Runtime dump - CKDPRequestedFields
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRequestedFields : PBCodable <NSCopying>
{
    NSMutableArray * _fields;
}

@property (retain, nonatomic) NSMutableArray * fields;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRequestedFields *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addFields:(SADomainObject *)arg0;
- (void)clearFields;
- (unsigned int)fieldsCount;
- (NSObject *)fieldsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)fields;
- (void)setFields:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
