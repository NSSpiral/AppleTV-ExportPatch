/* Runtime dump - GEOCarInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCarInfo : PBCodable <NSCopying>
{
    struct ? _screenResolution;
    int _interactionModel;
    NSString * _manufacturer;
    NSString * _model;
    struct ? _has;
}

@property (nonatomic) char hasInteractionModel;
@property (nonatomic) int interactionModel;
@property (readonly, nonatomic) char hasManufacturer;
@property (retain, nonatomic) NSString * manufacturer;
@property (readonly, nonatomic) char hasModel;
@property (retain, nonatomic) NSString * model;
@property (nonatomic) char hasScreenResolution;
@property (nonatomic) struct ? screenResolution;

+ (NSArray *)carInfoWithTraits:(NSArray *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOCarInfo *)copyWithZone:(struct _NSZone *)arg0;
- (int)interactionModel;
- (NSString *)model;
- (NSDictionary *)dictionaryRepresentation;
- (void)setModel:(NSString *)arg0;
- (GEOCarInfo *)initWithTraits:(NSArray *)arg0;
- (void)setManufacturer:(NSString *)arg0;
- (NSString *)manufacturer;
- (void)setInteractionModel:(int)arg0;
- (void)setScreenResolution:(struct ?)arg0;
- (void)setHasInteractionModel:(char)arg0;
- (char)hasInteractionModel;
- (char)hasManufacturer;
- (char)hasModel;
- (void)setHasScreenResolution:(char)arg0;
- (char)hasScreenResolution;
- (struct ?)screenResolution;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
