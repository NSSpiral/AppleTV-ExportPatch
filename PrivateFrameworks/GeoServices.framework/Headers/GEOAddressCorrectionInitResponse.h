/* Runtime dump - GEOAddressCorrectionInitResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>
{
    NSString * _addressID;
    GEOLocation * _addressLocation;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct ? _has;
}

@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) char hasAddressLocation;
@property (retain, nonatomic) GEOLocation * addressLocation;
@property (readonly, nonatomic) char hasAddressID;
@property (retain, nonatomic) NSString * addressID;
@property (nonatomic) char hasNumberOfVisitsBucketSize;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAddressCorrectionInitResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)statusCode;
- (void)setAddressID:(NSString *)arg0;
- (char)hasAddressID;
- (NSString *)addressID;
- (void)setStatusCode:(int)arg0;
- (void)setHasStatusCode:(char)arg0;
- (char)hasStatusCode;
- (void)setAddressLocation:(GEOLocation *)arg0;
- (char)hasAddressLocation;
- (unsigned int)numberOfVisitsBucketSize;
- (void)setNumberOfVisitsBucketSize:(unsigned int)arg0;
- (void)setHasNumberOfVisitsBucketSize:(char)arg0;
- (char)hasNumberOfVisitsBucketSize;
- (GEOLocation *)addressLocation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
