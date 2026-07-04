/* Runtime dump - GEOResourceManifestConfiguration
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestConfiguration : NSObject
{
    unsigned int _tileGroupIdentifier;
    NSString * _os;
    NSString * _osVersion;
    NSString * _osBuild;
    NSString * _countryCode;
    NSString * _hardwareIdentifier;
    NSString * _applicationIdentifier;
    NSString * _applicationVersion;
    NSString * _environment;
    NSString * _dataDirectory;
}

@property (nonatomic) unsigned int tileGroupIdentifier;
@property (copy, nonatomic) NSString * os;
@property (copy, nonatomic) NSString * osVersion;
@property (copy, nonatomic) NSString * osBuild;
@property (copy, nonatomic) NSString * countryCode;
@property (copy, nonatomic) NSString * hardwareIdentifier;
@property (copy, nonatomic) NSString * applicationIdentifier;
@property (copy, nonatomic) NSString * applicationVersion;
@property (copy, nonatomic) NSString * environment;
@property (copy, nonatomic) NSString * dataDirectory;
@property (readonly, nonatomic) NSString * directorySuffix;

- (void)dealloc;
- (GEOResourceManifestConfiguration *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)environment;
- (NSString *)applicationIdentifier;
- (void)setApplicationVersion:(NSString *)arg0;
- (NSString *)applicationVersion;
- (void)setEnvironment:(NSString *)arg0;
- (char)isDefaultConfiguration;
- (NSString *)dataDirectory;
- (NSString *)directorySuffix;
- (NSString *)osVersion;
- (NSString *)hardwareIdentifier;
- (GEOResourceManifestConfiguration *)initWithConciseDictionaryRepresentation:(NSDictionary *)arg0;
- (NSString *)os;
- (NSString *)osBuild;
- (void)setOs:(NSString *)arg0;
- (void)setOsVersion:(NSString *)arg0;
- (void)setOsBuild:(NSString *)arg0;
- (void)setHardwareIdentifier:(NSString *)arg0;
- (void)setApplicationIdentifier:(NSString *)arg0;
- (void)setDataDirectory:(NSString *)arg0;
- (void)setCountryCode:(NSString *)arg0;
- (NSDictionary *)conciseDictionaryRepresentation;
- (void)setTileGroupIdentifier:(unsigned int)arg0;
- (NSString *)countryCode;
- (unsigned int)tileGroupIdentifier;

@end
