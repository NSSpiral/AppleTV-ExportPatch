/* Runtime dump - GEORPWatchAuxiliaryControl
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPWatchAuxiliaryControl : PBCodable <NSCopying>
{
    NSString * _hardwareIdentifier;
    NSString * _osBuild;
    NSString * _osVersion;
}

@property (readonly, nonatomic) char hasHardwareIdentifier;
@property (retain, nonatomic) NSString * hardwareIdentifier;
@property (readonly, nonatomic) char hasOsVersion;
@property (retain, nonatomic) NSString * osVersion;
@property (readonly, nonatomic) char hasOsBuild;
@property (retain, nonatomic) NSString * osBuild;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPWatchAuxiliaryControl *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)osVersion;
- (NSString *)hardwareIdentifier;
- (NSString *)osBuild;
- (void)setOsVersion:(NSString *)arg0;
- (void)setOsBuild:(NSString *)arg0;
- (void)setHardwareIdentifier:(NSString *)arg0;
- (char)hasHardwareIdentifier;
- (char)hasOsVersion;
- (char)hasOsBuild;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
