/* Runtime dump - GEOTrafficIncident
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficIncident : PBCodable <NSCopying>
{
    double _endTime;
    double _lastUpdated;
    double _startTime;
    long long _uID;
    NSString * _info;
    NSString * _location;
    NSString * _title;
    int _type;
    int _vertexCount;
    int _vertexOffset;
    struct ? _has;
}

@property (nonatomic) char hasUID;
@property (nonatomic) long long uID;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString * title;
@property (readonly, nonatomic) char hasInfo;
@property (retain, nonatomic) NSString * info;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) NSString * location;
@property (nonatomic) char hasVertexOffset;
@property (nonatomic) int vertexOffset;
@property (nonatomic) char hasVertexCount;
@property (nonatomic) int vertexCount;
@property (nonatomic) char hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) char hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) char hasLastUpdated;
@property (nonatomic) double lastUpdated;
@property (nonatomic) char hasType;
@property (nonatomic) int type;

- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setStartTime:(double)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)title;
- (GEOTrafficIncident *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)info;
- (NSString *)location;
- (NSDictionary *)dictionaryRepresentation;
- (double)startTime;
- (char)hasTitle;
- (void)setInfo:(NSString *)arg0;
- (void)setUID:(long long)arg0;
- (void)setHasUID:(char)arg0;
- (char)hasUID;
- (void)setVertexOffset:(int)arg0;
- (void)setVertexCount:(int)arg0;
- (char)hasInfo;
- (void)setHasVertexOffset:(char)arg0;
- (char)hasVertexOffset;
- (void)setHasVertexCount:(char)arg0;
- (char)hasVertexCount;
- (void)setHasEndTime:(char)arg0;
- (void)setLastUpdated:(double)arg0;
- (void)setHasLastUpdated:(char)arg0;
- (void)setHasStartTime:(char)arg0;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)setLocation:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)vertexCount;
- (long long)uID;
- (char)hasLocation;
- (char)hasStartTime;
- (char)hasEndTime;
- (double)endTime;
- (char)hasLastUpdated;
- (double)lastUpdated;
- (int)vertexOffset;

@end
