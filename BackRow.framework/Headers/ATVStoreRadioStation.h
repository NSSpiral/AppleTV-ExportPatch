/* Runtime dump - ATVStoreRadioStation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVStoreRadioStation : ATVDataCollection
{
    NSDictionary * _radioStation;
    NSDictionary * _highlightRanges;
}

@property (copy, nonatomic) NSDictionary * radioStation;
@property (copy, nonatomic) NSDictionary * highlightRanges;

- (NSURL *)_streamURL;
- (NSURL *)_streamCertificateURL;
- (NSURL *)_streamKeyURL;
- (ATVStoreRadioStation *)initWithDataClient:(ATVDataClient *)arg0 radioStation:(NSDictionary *)arg1 highlightRanges:(NSDictionary *)arg2;
- (void)setHighlightRanges:(NSDictionary *)arg0;
- (void)setRadioStation:(NSDictionary *)arg0;
- (NSDictionary *)radioStation;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (NSDictionary *)highlightRanges;

@end
