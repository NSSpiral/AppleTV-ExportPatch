/* Runtime dump - GEOPDUser
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDUser : PBCodable <NSCopying>
{
    GEOPDPhoto * _image;
    NSString * _name;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) GEOPDPhoto * image;

- (void)dealloc;
- (void)setImage:(GEOPDPhoto *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (GEOPDUser *)copyWithZone:(struct _NSZone *)arg0;
- (GEOPDPhoto *)image;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasImage;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
