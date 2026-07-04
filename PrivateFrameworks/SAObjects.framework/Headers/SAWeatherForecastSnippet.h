/* Runtime dump - SAWeatherForecastSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherForecastSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * aceWeathers;
@property (retain, nonatomic) SAUIAppPunchOut * appPunchOut;
@property (retain, nonatomic) SAUIImageResource * attributionImage;

+ (SAWeatherForecastSnippet *)forecastSnippet;
+ (NSDictionary *)forecastSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (SAUIImageResource *)attributionImage;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)aceWeathers;
- (void)setAceWeathers:(NSArray *)arg0;
- (SAUIAppPunchOut *)appPunchOut;
- (void)setAppPunchOut:(SAUIAppPunchOut *)arg0;
- (void)setAttributionImage:(SAUIImageResource *)arg0;

@end
