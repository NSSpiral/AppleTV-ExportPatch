/* Runtime dump - PLRevGeoLocationInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoLocationInfo : NSObject
{
    char _isValid;
    char _isHome;
    <GEOMapItemPrivate> * _geoMapItem;
    PLRevGeoCompoundNameInfo * _compoundNameInfo;
    PLRevGeoCompoundNameInfo * _compoundSecondaryNameInfo;
    NSString * _providerId;
    unsigned int _providerVersion;
}

@property (readonly, nonatomic) char isValid;
@property (retain, nonatomic) <GEOMapItemPrivate> * geoMapItem;
@property (retain, nonatomic) PLRevGeoCompoundNameInfo * compoundNameInfo;
@property (retain, nonatomic) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;
@property (nonatomic) char isHome;
@property (readonly, copy, nonatomic) NSString * countryCode;
@property (retain, nonatomic) NSString * providerId;
@property (nonatomic) unsigned int providerVersion;

+ (unsigned int)currentVersion;
+ (NSData *)_newRevGeoLocationInfoFromData:(NSData *)arg0;
+ (NSDictionary *)newDataFromRevGeoLocationInfo:(NSDictionary *)arg0;
+ (NSString *)_namingOrderForAssetReverseGeoDescription;
+ (char)isValidFromData:(NSData *)arg0;
+ (PLRevGeoLocationInfo *)sortedNameInfoComparatorWithHomeAtEnd:(SEL)arg0;
+ (unsigned int)qualityTypeForPointInCountryCode:(id)arg0 withDataProviderId:(NSObject *)arg1;

- (void)dealloc;
- (NSString *)description;
- (char)isValid;
- (PLRevGeoLocationInfo *)initWithData:(NSData *)arg0;
- (NSString *)localizedDescription;
- (<GEOMapItemPrivate> *)geoMapItem;
- (PLRevGeoCompoundNameInfo *)compoundNameInfo;
- (char)isHome;
- (void)setCompoundNameInfo:(PLRevGeoCompoundNameInfo *)arg0;
- (void)setCompoundSecondaryNameInfo:(PLRevGeoCompoundNameInfo *)arg0;
- (void)setIsHome:(char)arg0;
- (void)setProviderId:(NSString *)arg0;
- (void)setProviderVersion:(unsigned int)arg0;
- (NSDictionary *)dataForInfo;
- (void)_addNameInfo:(NSDictionary *)arg0 inPlaceInfoMap:(NSObject *)arg1 totalPlaceCount:(int *)arg2;
- (void)setGeoMapItem:(<GEOMapItemPrivate> *)arg0;
- (PLRevGeoCompoundNameInfo *)compoundSecondaryNameInfo;
- (NSString *)providerId;
- (unsigned int)providerVersion;
- (NSString *)countryCode;

@end
