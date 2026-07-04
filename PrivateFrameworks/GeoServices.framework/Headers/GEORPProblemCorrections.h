/* Runtime dump - GEORPProblemCorrections
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCorrections : PBCodable <NSCopying>
{
    NSString * _comments;
    GEORPCorrectedCoordinate * _correctedCoordinate;
    NSMutableArray * _correctedFields;
    GEORPCorrectedLabel * _correctedLabel;
    GEORPMapLocation * _correctedMapLocation;
    GEORPCorrectedSearch * _correctedSearch;
    GEORPDirectionsProblem * _directionsProblem;
    NSMutableArray * _photoWithMetadatas;
    GEORPPlaceProblem * _placeProblem;
}

@property (retain, nonatomic) NSMutableArray * correctedFields;
@property (readonly, nonatomic) char hasCorrectedLabel;
@property (retain, nonatomic) GEORPCorrectedLabel * correctedLabel;
@property (readonly, nonatomic) char hasCorrectedCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate * correctedCoordinate;
@property (readonly, nonatomic) char hasCorrectedSearch;
@property (retain, nonatomic) GEORPCorrectedSearch * correctedSearch;
@property (readonly, nonatomic) char hasCorrectedMapLocation;
@property (retain, nonatomic) GEORPMapLocation * correctedMapLocation;
@property (readonly, nonatomic) char hasComments;
@property (retain, nonatomic) NSString * comments;
@property (readonly, nonatomic) char hasPlaceProblem;
@property (retain, nonatomic) GEORPPlaceProblem * placeProblem;
@property (readonly, nonatomic) char hasDirectionsProblem;
@property (retain, nonatomic) GEORPDirectionsProblem * directionsProblem;
@property (retain, nonatomic) NSMutableArray * photoWithMetadatas;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemCorrections *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)comments;
- (void)setComments:(NSString *)arg0;
- (void)setCorrectedFields:(NSMutableArray *)arg0;
- (void)setCorrectedLabel:(GEORPCorrectedLabel *)arg0;
- (void)setCorrectedCoordinate:(GEORPCorrectedCoordinate *)arg0;
- (void)setCorrectedSearch:(GEORPCorrectedSearch *)arg0;
- (void)setCorrectedMapLocation:(GEORPMapLocation *)arg0;
- (void)setPlaceProblem:(GEORPPlaceProblem *)arg0;
- (void)setDirectionsProblem:(GEORPDirectionsProblem *)arg0;
- (void)setPhotoWithMetadatas:(NSMutableArray *)arg0;
- (void)addCorrectedField:(GEORPCorrectedField *)arg0;
- (void)addPhotoWithMetadata:(NSDictionary *)arg0;
- (unsigned int)correctedFieldsCount;
- (void)clearCorrectedFields;
- (NSObject *)correctedFieldAtIndex:(unsigned int)arg0;
- (unsigned int)photoWithMetadatasCount;
- (void)clearPhotoWithMetadatas;
- (NSObject *)photoWithMetadataAtIndex:(unsigned int)arg0;
- (char)hasCorrectedLabel;
- (char)hasCorrectedCoordinate;
- (char)hasCorrectedSearch;
- (char)hasCorrectedMapLocation;
- (char)hasComments;
- (char)hasPlaceProblem;
- (char)hasDirectionsProblem;
- (NSMutableArray *)correctedFields;
- (GEORPCorrectedLabel *)correctedLabel;
- (GEORPCorrectedCoordinate *)correctedCoordinate;
- (GEORPCorrectedSearch *)correctedSearch;
- (GEORPMapLocation *)correctedMapLocation;
- (GEORPPlaceProblem *)placeProblem;
- (GEORPDirectionsProblem *)directionsProblem;
- (NSMutableArray *)photoWithMetadatas;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
