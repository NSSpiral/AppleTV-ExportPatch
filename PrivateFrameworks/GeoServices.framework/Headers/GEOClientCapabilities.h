/* Runtime dump - GEOClientCapabilities
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    NSString * _hardwareModel;
    int _maxManeuverTypeSupported;
    char _internalInstall;
    struct ? _has;
}

@property (readonly, nonatomic) char hasAppMajorVersion;
@property (retain, nonatomic) NSString * appMajorVersion;
@property (readonly, nonatomic) char hasAppMinorVersion;
@property (retain, nonatomic) NSString * appMinorVersion;
@property (readonly, nonatomic) char hasHardwareModel;
@property (retain, nonatomic) NSString * hardwareModel;
@property (nonatomic) char hasMaxManeuverTypeSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) char hasInternalInstall;
@property (nonatomic) char internalInstall;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOClientCapabilities *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setAppMajorVersion:(NSString *)arg0;
- (void)setAppMinorVersion:(NSString *)arg0;
- (void)setHardwareModel:(NSString *)arg0;
- (char)hasAppMajorVersion;
- (char)hasAppMinorVersion;
- (char)hasHardwareModel;
- (int)maxManeuverTypeSupported;
- (void)setMaxManeuverTypeSupported:(int)arg0;
- (void)setHasMaxManeuverTypeSupported:(char)arg0;
- (char)hasMaxManeuverTypeSupported;
- (void)setInternalInstall:(char)arg0;
- (void)setHasInternalInstall:(char)arg0;
- (char)hasInternalInstall;
- (NSString *)appMajorVersion;
- (NSString *)appMinorVersion;
- (char)internalInstall;
- (NSString *)hardwareModel;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
