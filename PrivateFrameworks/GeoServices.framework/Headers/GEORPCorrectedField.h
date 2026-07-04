/* Runtime dump - GEORPCorrectedField
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedField : PBCodable <NSCopying>
{
    NSString * _correctedValue;
    int _field;
    NSString * _fieldName;
    NSString * _originalValue;
    char _isMarkedIncorrect;
    struct ? _has;
}

@property (nonatomic) char hasField;
@property (nonatomic) int field;
@property (readonly, nonatomic) char hasFieldName;
@property (retain, nonatomic) NSString * fieldName;
@property (readonly, nonatomic) char hasOriginalValue;
@property (retain, nonatomic) NSString * originalValue;
@property (readonly, nonatomic) char hasCorrectedValue;
@property (retain, nonatomic) NSString * correctedValue;
@property (nonatomic) char hasIsMarkedIncorrect;
@property (nonatomic) char isMarkedIncorrect;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPCorrectedField *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setFieldName:(NSString *)arg0;
- (char)hasFieldName;
- (NSString *)fieldName;
- (void)setField:(int)arg0;
- (char)hasField;
- (int)field;
- (void)setOriginalValue:(NSString *)arg0;
- (void)setCorrectedValue:(NSString *)arg0;
- (char)hasOriginalValue;
- (char)hasCorrectedValue;
- (NSString *)originalValue;
- (NSString *)correctedValue;
- (void)setHasField:(char)arg0;
- (void)setIsMarkedIncorrect:(char)arg0;
- (void)setHasIsMarkedIncorrect:(char)arg0;
- (char)hasIsMarkedIncorrect;
- (char)isMarkedIncorrect;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
