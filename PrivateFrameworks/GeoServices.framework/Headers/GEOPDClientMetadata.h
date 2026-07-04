/* Runtime dump - GEOPDClientMetadata
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClientMetadata : PBCodable <NSCopying>
{
    NSString * _deviceCountryCode;
    NSString * _deviceDisplayLocale;
    NSMutableArray * _deviceInstalledKeyboardLocales;
    NSString * _deviceKeyboardLocale;
    GEOLatLng * _deviceLocation;
    NSString * _deviceSpokenLocale;
    int _resultListAttributionSupport;
    unsigned int _timeSinceMapEnteredForeground;
    struct ? _has;
}

@property (readonly, nonatomic) char hasDeviceCountryCode;
@property (retain, nonatomic) NSString * deviceCountryCode;
@property (readonly, nonatomic) char hasDeviceLocation;
@property (retain, nonatomic) GEOLatLng * deviceLocation;
@property (readonly, nonatomic) char hasDeviceDisplayLocale;
@property (retain, nonatomic) NSString * deviceDisplayLocale;
@property (readonly, nonatomic) char hasDeviceKeyboardLocale;
@property (retain, nonatomic) NSString * deviceKeyboardLocale;
@property (readonly, nonatomic) char hasDeviceSpokenLocale;
@property (retain, nonatomic) NSString * deviceSpokenLocale;
@property (retain, nonatomic) NSMutableArray * deviceInstalledKeyboardLocales;
@property (nonatomic) char hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic) char hasResultListAttributionSupport;
@property (nonatomic) int resultListAttributionSupport;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDClientMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOPDClientMetadata *)initWithTraits:(NSArray *)arg0;
- (void)setDeviceCountryCode:(NSString *)arg0;
- (void)setDeviceLocation:(GEOLatLng *)arg0;
- (char)hasDeviceCountryCode;
- (char)hasDeviceLocation;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg0;
- (void)setHasTimeSinceMapEnteredForeground:(char)arg0;
- (char)hasTimeSinceMapEnteredForeground;
- (NSString *)deviceCountryCode;
- (GEOLatLng *)deviceLocation;
- (unsigned int)timeSinceMapEnteredForeground;
- (void)setDeviceDisplayLocale:(NSString *)arg0;
- (void)setDeviceKeyboardLocale:(NSString *)arg0;
- (void)setDeviceSpokenLocale:(NSString *)arg0;
- (void)setDeviceInstalledKeyboardLocales:(NSMutableArray *)arg0;
- (void)addDeviceInstalledKeyboardLocale:(NSObject *)arg0;
- (unsigned int)deviceInstalledKeyboardLocalesCount;
- (void)clearDeviceInstalledKeyboardLocales;
- (NSObject *)deviceInstalledKeyboardLocaleAtIndex:(unsigned int)arg0;
- (char)hasDeviceDisplayLocale;
- (char)hasDeviceKeyboardLocale;
- (char)hasDeviceSpokenLocale;
- (void)setResultListAttributionSupport:(int)arg0;
- (void)setHasResultListAttributionSupport:(char)arg0;
- (char)hasResultListAttributionSupport;
- (NSString *)deviceDisplayLocale;
- (NSString *)deviceKeyboardLocale;
- (NSString *)deviceSpokenLocale;
- (NSMutableArray *)deviceInstalledKeyboardLocales;
- (int)resultListAttributionSupport;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
