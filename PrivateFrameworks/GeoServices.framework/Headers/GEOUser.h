/* Runtime dump - GEOUser
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUser : PBCodable <NSCopying>
{
    GEOPhoto * _image;
    NSString * _name;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) GEOPhoto * image;

- (void)dealloc;
- (void)setImage:(GEOPhoto *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GEOUser *)copyWithZone:(struct _NSZone *)arg0;
- (GEOPhoto *)image;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasImage;
- (GEOUser *)initWithPlaceDataUser:(id)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
