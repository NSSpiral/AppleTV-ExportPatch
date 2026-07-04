/* Runtime dump - GEOETATrafficUpdateResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying>
{
    NSMutableArray * _routes;
    int _status;
    struct ? _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray * routes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOETATrafficUpdateResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setRoutes:(NSMutableArray *)arg0;
- (void)addRoute:(ATVRoute *)arg0;
- (unsigned int)routesCount;
- (void)clearRoutes;
- (NSObject *)routeAtIndex:(unsigned int)arg0;
- (NSMutableArray *)routes;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
