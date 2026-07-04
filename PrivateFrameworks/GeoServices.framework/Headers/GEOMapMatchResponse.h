/* Runtime dump - GEOMapMatchResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapMatchResponse : PBCodable <NSCopying>
{
    int _matchingStatus;
    int _status;
    NSData * _zilchPoints;
    struct ? _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (nonatomic) char hasMatchingStatus;
@property (nonatomic) int matchingStatus;
@property (readonly, nonatomic) char hasZilchPoints;
@property (retain, nonatomic) NSData * zilchPoints;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapMatchResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)setZilchPoints:(NSData *)arg0;
- (char)hasZilchPoints;
- (NSData *)zilchPoints;
- (void)setMatchingStatus:(int)arg0;
- (void)setHasMatchingStatus:(char)arg0;
- (char)hasMatchingStatus;
- (int)matchingStatus;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
