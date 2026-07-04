/* Runtime dump - GEODirectionsCollectionRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray * _requestElements;
}

@property (retain, nonatomic) NSMutableArray * requestElements;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEODirectionsCollectionRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRequestElements:(NSMutableArray *)arg0;
- (void)addRequestElements:(id)arg0;
- (unsigned int)requestElementsCount;
- (void)clearRequestElements;
- (NSObject *)requestElementsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)requestElements;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
