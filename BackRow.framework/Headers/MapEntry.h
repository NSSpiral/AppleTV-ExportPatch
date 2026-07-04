/* Runtime dump - MapEntry
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface MapEntry : PBCodable <NSCopying>
{
    NSString * _key;
    NSString * _value;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString * key;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString * value;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)key;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (MapEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setKey:(NSString *)arg0;
- (char)hasKey;
- (void).cxx_destruct;
- (char)hasValue;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
