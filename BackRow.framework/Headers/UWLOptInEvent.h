/* Runtime dump - UWLOptInEvent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface UWLOptInEvent : PBCodable <NSCopying>
{
    NSString * _brandId;
}

@property (readonly, nonatomic) char hasBrandId;
@property (retain, nonatomic) NSString * brandId;

- (void)setBrandId:(NSString *)arg0;
- (char)hasBrandId;
- (NSString *)brandId;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLOptInEvent *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
