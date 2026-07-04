/* Runtime dump - ATVRadioMetricsEventFieldProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol SSMetricsEventFieldProvider;
@interface ATVRadioMetricsEventFieldProvider : NSObject <SSMetricsEventFieldProvider>
{
    NSDictionary * _dictionary;
}

@property (readonly, copy, nonatomic) NSDictionary * dictionary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ATVRadioMetricsEventFieldProvider *)initWithDictionary:(NSDictionary *)arg0;
- (NSDictionary *)dictionary;
- (void).cxx_destruct;
- (id)valueForMetricsField:(NSString *)arg0;

@end
