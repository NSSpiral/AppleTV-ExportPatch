/* Runtime dump - GEOPDAttribution
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAttribution : PBCodable <NSCopying>
{
    NSMutableArray * _attributionUrls;
    NSString * _externalComponentId;
    NSString * _externalItemId;
    NSString * _vendorId;
}

@property (readonly, nonatomic) char hasVendorId;
@property (retain, nonatomic) NSString * vendorId;
@property (readonly, nonatomic) char hasExternalItemId;
@property (retain, nonatomic) NSString * externalItemId;
@property (readonly, nonatomic) char hasExternalComponentId;
@property (retain, nonatomic) NSString * externalComponentId;
@property (retain, nonatomic) NSMutableArray * attributionUrls;

+ (GEOPDAttribution *)attributionForPlaceDataReview:(id)arg0;
+ (NSArray *)attributionForPlaceDataPhotos:(id)arg0;
+ (NSObject *)attributionForPlaceDataEntity:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAttribution *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)_isYelp;
- (char)hasExternalItemId;
- (char)hasVendorId;
- (NSString *)vendorId;
- (NSString *)externalItemId;
- (NSString *)_attributionKey;
- (unsigned int)attributionUrlsCount;
- (NSMutableArray *)attributionUrls;
- (void)setVendorId:(NSString *)arg0;
- (void)setExternalItemId:(NSString *)arg0;
- (void)setExternalComponentId:(NSString *)arg0;
- (void)setAttributionUrls:(NSMutableArray *)arg0;
- (void)addAttributionUrl:(NSURL *)arg0;
- (void)clearAttributionUrls;
- (NSObject *)attributionUrlAtIndex:(unsigned int)arg0;
- (char)hasExternalComponentId;
- (NSString *)externalComponentId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
