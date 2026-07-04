/* Runtime dump - ATVRadioStation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRadioStation : ATVDataCollection
{
    char _isPreviewStation;
    RadioStation * _radioStation;
    NSDictionary * _stationDict;
}

@property (retain, nonatomic) RadioStation * radioStation;
@property (retain, nonatomic) NSDictionary * stationDict;
@property (nonatomic) char isPreviewStation;

- (ATVRadioStation *)initWithDataClient:(ATVDataClient *)arg0 radioStation:(RadioStation *)arg1 stationDict:(NSDictionary *)arg2;
- (ATVRadioStation *)initWithDataClient:(ATVDataClient *)arg0 radioStation:(RadioStation *)arg1;
- (void)setIsPreviewStation:(char)arg0;
- (NSURL *)_streamURL;
- (NSURL *)_streamCertificateURL;
- (NSURL *)_streamKeyURL;
- (void)setStationDict:(NSDictionary *)arg0;
- (char)isPreviewStation;
- (NSDictionary *)stationDict;
- (void)setRadioStation:(RadioStation *)arg0;
- (RadioStation *)radioStation;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end
