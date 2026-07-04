/* Runtime dump - PLMomentAnalyzerGeoRequestInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentAnalyzerGeoRequestInfo : NSObject
{
    unsigned int _requestType;
    NSObject<NSCopying> * _momentId;
    NSString * _momentUuid;
    NSArray * _assetIds;
    <GEOMapServiceTicket> * _reverseGeocodeRequest;
    unsigned int _failureCount;
    NSArray * _extraAssetIds;
    NSArray * _extraLocations;
    PLRevGeoLocationInfo * _revGeoLocationInfo;
}

@property (nonatomic) unsigned int requestType;
@property (retain, nonatomic) NSObject<NSCopying> * momentId;
@property (copy, nonatomic) NSString * momentUuid;
@property (copy, nonatomic) NSArray * assetIds;
@property (retain, nonatomic) <GEOMapServiceTicket> * reverseGeocodeRequest;
@property (nonatomic) unsigned int failureCount;
@property (copy, nonatomic) NSArray * extraAssetIds;
@property (copy, nonatomic) NSArray * extraLocations;
@property (readonly, nonatomic) char extraData;
@property (retain, nonatomic) PLRevGeoLocationInfo * revGeoLocationInfo;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSArray *)assetIds;
- (void)setAssetIds:(NSArray *)arg0;
- (void)setRequestType:(unsigned int)arg0;
- (void)setMomentId:(NSObject<NSCopying> *)arg0;
- (void)setMomentUuid:(NSString *)arg0;
- (void)setReverseGeocodeRequest:(<GEOMapServiceTicket> *)arg0;
- (NSString *)momentUuid;
- (PLMomentAnalyzerGeoRequestInfo *)initWithRequestType:(unsigned int)arg0 momentId:(NSObject<NSCopying> *)arg1 momentUuid:(NSString *)arg2 assetIds:(NSArray *)arg3 reverseGeocodeRequest:(<GEOMapServiceTicket> *)arg4;
- (char)hasExtraData;
- (unsigned int)requestType;
- (NSObject<NSCopying> *)momentId;
- (<GEOMapServiceTicket> *)reverseGeocodeRequest;
- (unsigned int)failureCount;
- (void)setFailureCount:(unsigned int)arg0;
- (NSArray *)extraAssetIds;
- (void)setExtraAssetIds:(NSArray *)arg0;
- (NSArray *)extraLocations;
- (void)setExtraLocations:(NSArray *)arg0;
- (PLRevGeoLocationInfo *)revGeoLocationInfo;
- (void)setRevGeoLocationInfo:(PLRevGeoLocationInfo *)arg0;

@end
