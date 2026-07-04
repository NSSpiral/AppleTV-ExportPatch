/* Runtime dump - GEORPCorrectedSearch
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedSearch : PBCodable <NSCopying>
{
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    GEOPDPlaceRequest * _placeRequest;
    GEOPDPlaceResponse * _placeResponse;
    GEOPlaceSearchRequest * _placeSearchRequest;
    GEOPlaceSearchResponse * _placeSearchResponse;
    NSString * _preferredSearchDisplayLocation;
    struct ? _has;
}

@property (readonly, nonatomic) char hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest * placeSearchRequest;
@property (readonly, nonatomic) char hasPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse * placeSearchResponse;
@property (nonatomic) char hasOriginalSearchResultIndex;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (nonatomic) char hasCorrectedSearchResultIndex;
@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (readonly, nonatomic) char hasPreferredSearchDisplayLocation;
@property (retain, nonatomic) NSString * preferredSearchDisplayLocation;
@property (readonly, nonatomic) char hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest * placeRequest;
@property (readonly, nonatomic) char hasPlaceResponse;
@property (retain, nonatomic) GEOPDPlaceResponse * placeResponse;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPCorrectedSearch *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg0;
- (char)hasPlaceSearchRequest;
- (GEOPlaceSearchRequest *)placeSearchRequest;
- (void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg0;
- (char)hasPlaceSearchResponse;
- (GEOPlaceSearchResponse *)placeSearchResponse;
- (void)setPreferredSearchDisplayLocation:(NSString *)arg0;
- (void)setPlaceRequest:(GEOPDPlaceRequest *)arg0;
- (void)setPlaceResponse:(GEOPDPlaceResponse *)arg0;
- (void)setOriginalSearchResultIndex:(unsigned int)arg0;
- (void)setHasOriginalSearchResultIndex:(char)arg0;
- (char)hasOriginalSearchResultIndex;
- (void)setCorrectedSearchResultIndex:(unsigned int)arg0;
- (void)setHasCorrectedSearchResultIndex:(char)arg0;
- (char)hasCorrectedSearchResultIndex;
- (char)hasPreferredSearchDisplayLocation;
- (char)hasPlaceRequest;
- (char)hasPlaceResponse;
- (unsigned int)originalSearchResultIndex;
- (unsigned int)correctedSearchResultIndex;
- (NSString *)preferredSearchDisplayLocation;
- (GEOPDPlaceRequest *)placeRequest;
- (GEOPDPlaceResponse *)placeResponse;
- (char)containsReportableData;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
