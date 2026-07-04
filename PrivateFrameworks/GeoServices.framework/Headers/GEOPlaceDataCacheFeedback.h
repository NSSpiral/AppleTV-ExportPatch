/* Runtime dump - GEOPlaceDataCacheFeedback
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying>
{
    NSString * _bundleIdentifier;
    GEOPDPlaceRequest * _request;
}

@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) GEOPDPlaceRequest * request;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString * bundleIdentifier;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (GEOPDPlaceRequest *)request;
- (GEOPlaceDataCacheFeedback *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setBundleIdentifier:(NSString *)arg0;
- (char)hasRequest;
- (char)hasBundleIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setRequest:(GEOPDPlaceRequest *)arg0;

@end
