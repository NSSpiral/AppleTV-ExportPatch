/* Runtime dump - GEOPDCanonicalLocationSearchParameters
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCanonicalLocationSearchParameters : PBCodable <NSCopying>
{
    NSString * _queryString;
}

@property (readonly, nonatomic) char hasQueryString;
@property (retain, nonatomic) NSString * queryString;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDCanonicalLocationSearchParameters *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setQueryString:(NSString *)arg0;
- (NSString *)queryString;
- (char)hasQueryString;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
