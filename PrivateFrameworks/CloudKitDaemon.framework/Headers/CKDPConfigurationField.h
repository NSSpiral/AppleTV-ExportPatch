/* Runtime dump - CKDPConfigurationField
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPConfigurationField : PBCodable <NSCopying>
{
    NSString * _name;
    CKDPConfigurationFieldValue * _value;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKDPConfigurationFieldValue * value;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (CKDPConfigurationFieldValue *)value;
- (void)setValue:(CKDPConfigurationFieldValue *)arg0;
- (CKDPConfigurationField *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasValue;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
