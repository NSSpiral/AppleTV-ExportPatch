/* Runtime dump - GEOABExperimentRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABExperimentRequest : PBRequest <NSCopying>
{
    NSString * _guid;
}

@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString * guid;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOABExperimentRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setGuid:(NSString *)arg0;
- (char)hasGuid;
- (NSString *)guid;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
