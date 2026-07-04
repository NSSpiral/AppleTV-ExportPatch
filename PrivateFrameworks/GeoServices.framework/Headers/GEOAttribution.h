/* Runtime dump - GEOAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttribution : PBCodable <NSCopying>
{
    NSString * _badge;
    NSString * _badgeChecksum;
    NSString * _logo;
    NSString * _logoChecksum;
    NSString * _name;
    NSString * _url;
}

@property (readonly, nonatomic) char hasBadge;
@property (retain, nonatomic) NSString * badge;
@property (readonly, nonatomic) char hasLogo;
@property (retain, nonatomic) NSString * logo;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString * url;
@property (readonly, nonatomic) char hasBadgeChecksum;
@property (retain, nonatomic) NSString * badgeChecksum;
@property (readonly, nonatomic) char hasLogoChecksum;
@property (retain, nonatomic) NSString * logoChecksum;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)url;
- (GEOAttribution *)copyWithZone:(struct _NSZone *)arg0;
- (void)setUrl:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setBadge:(NSString *)arg0;
- (char)hasUrl;
- (char)hasBadge;
- (NSString *)badge;
- (char)hasLogo;
- (NSString *)logo;
- (NSString *)badgeChecksum;
- (NSString *)logoChecksum;
- (void)setLogo:(NSString *)arg0;
- (void)setBadgeChecksum:(NSString *)arg0;
- (void)setLogoChecksum:(NSString *)arg0;
- (char)hasBadgeChecksum;
- (char)hasLogoChecksum;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
