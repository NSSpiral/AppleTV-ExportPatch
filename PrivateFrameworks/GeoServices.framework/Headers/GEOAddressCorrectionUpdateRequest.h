/* Runtime dump - GEOAddressCorrectionUpdateRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying>
{
    NSString * _addressID;
    int _correctionStatus;
    NSMutableArray * _significantLocations;
    struct ? _has;
}

@property (nonatomic) char hasCorrectionStatus;
@property (nonatomic) int correctionStatus;
@property (retain, nonatomic) NSMutableArray * significantLocations;
@property (readonly, nonatomic) char hasAddressID;
@property (retain, nonatomic) NSString * addressID;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAddressCorrectionUpdateRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setSignificantLocations:(NSMutableArray *)arg0;
- (void)setAddressID:(NSString *)arg0;
- (void)addSignificantLocation:(NSObject *)arg0;
- (unsigned int)significantLocationsCount;
- (void)clearSignificantLocations;
- (NSObject *)significantLocationAtIndex:(unsigned int)arg0;
- (void)setCorrectionStatus:(int)arg0;
- (void)setHasCorrectionStatus:(char)arg0;
- (char)hasCorrectionStatus;
- (char)hasAddressID;
- (int)correctionStatus;
- (NSMutableArray *)significantLocations;
- (NSString *)addressID;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
