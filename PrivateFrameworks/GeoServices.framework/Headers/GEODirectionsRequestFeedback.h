/* Runtime dump - GEODirectionsRequestFeedback
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying>
{
    NSString * _appIdentifier;
    int _purpose;
    int _source;
    struct ? _has;
}

@property (nonatomic) char hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) char hasAppIdentifier;
@property (retain, nonatomic) NSString * appIdentifier;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEODirectionsRequestFeedback *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)source;
- (void)setSource:(int)arg0;
- (void)setHasSource:(char)arg0;
- (char)hasSource;
- (GEODirectionsRequestFeedback *)initWithPurpose:(int)arg0 andSource:(int)arg1 andIdentifier:(NSString *)arg2;
- (void)setPurpose:(int)arg0;
- (void)setAppIdentifier:(NSString *)arg0;
- (GEODirectionsRequestFeedback *)initWithPurpose:(int)arg0;
- (GEODirectionsRequestFeedback *)initWithPurpose:(int)arg0 andSource:(int)arg1;
- (char)hasAppIdentifier;
- (NSString *)appIdentifier;
- (int)purpose;
- (void)setHasPurpose:(char)arg0;
- (char)hasPurpose;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
