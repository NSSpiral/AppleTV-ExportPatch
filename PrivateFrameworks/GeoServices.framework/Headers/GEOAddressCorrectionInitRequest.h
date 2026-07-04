/* Runtime dump - GEOAddressCorrectionInitRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>
{
    NSString * _personID;
    NSString * _token;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString * token;
@property (readonly, nonatomic) char hasPersonID;
@property (retain, nonatomic) NSString * personID;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAddressCorrectionInitRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)token;
- (void)setToken:(NSString *)arg0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasToken;
- (char)hasPersonID;
- (NSString *)personID;
- (void)setPersonID:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
