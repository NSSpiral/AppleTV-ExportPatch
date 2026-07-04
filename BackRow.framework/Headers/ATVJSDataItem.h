/* Runtime dump - ATVJSDataItem
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVJSDataItem : ATVDataItem
{
    NSDictionary * _dictionary;
}

@property (retain, nonatomic) NSDictionary * dictionary;

- (ATVJSDataItem *)initWithDataClient:(ATVDataClient *)arg0 dictionary:(NSDictionary *)arg1;
- (NSDictionary *)dictionary;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;
- (void)setDictionary:(NSDictionary *)arg0;

@end
