/* Runtime dump - GEOPDEntityFilter
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntityFilter : PBCodable <NSCopying>
{
    char _includeSpokenNames;
    struct ? _has;
}

@property (nonatomic) char hasIncludeSpokenNames;
@property (nonatomic) char includeSpokenNames;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDEntityFilter *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setIncludeSpokenNames:(char)arg0;
- (void)setHasIncludeSpokenNames:(char)arg0;
- (char)hasIncludeSpokenNames;
- (char)includeSpokenNames;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
