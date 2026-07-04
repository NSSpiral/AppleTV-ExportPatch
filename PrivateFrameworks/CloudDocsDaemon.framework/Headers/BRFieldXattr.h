/* Runtime dump - BRFieldXattr
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldXattr : PBCodable <NSCopying>
{
    NSString * _name;
    NSData * _value;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSData * value;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSData *)value;
- (void)setValue:(NSData *)arg0;
- (BRFieldXattr *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
