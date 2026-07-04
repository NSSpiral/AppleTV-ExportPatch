/* Runtime dump - GEOPlatform
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlatform : NSObject

+ (GEOPlatform *)sharedPlatform;

- (NSString *)buildVersion;
- (GEOClientCapabilities *)clientCapabilities;
- (char)supportsNavigation;
- (NSString *)osVersion;
- (NSString *)hardwareIdentifier;
- (NSDictionary *)_systemInfoDictionary;
- (char)_deviceSupportsNavigation;
- (char)mapsFeatureFreedomEnabled;
- (char)supportsRealisticTiles;
- (char)isInternalInstall;

@end
