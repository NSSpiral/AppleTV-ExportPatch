/* Runtime dump - CKDPConfiguration
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPConfiguration : PBCodable <NSCopying>
{
    unsigned long long _created;
    unsigned long long _expires;
    NSMutableArray * _fields;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * fields;
@property (nonatomic) char hasCreated;
@property (nonatomic) unsigned long long created;
@property (nonatomic) char hasExpires;
@property (nonatomic) unsigned long long expires;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addFields:(SADomainObject *)arg0;
- (void)clearFields;
- (unsigned int)fieldsCount;
- (NSObject *)fieldsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)fields;
- (void)setFields:(NSMutableArray *)arg0;
- (void)setCreated:(unsigned long long)arg0;
- (void)setHasCreated:(char)arg0;
- (char)hasCreated;
- (void)setExpires:(unsigned long long)arg0;
- (void)setHasExpires:(char)arg0;
- (char)hasExpires;
- (unsigned long long)created;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned long long)expires;

@end
