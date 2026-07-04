/* Runtime dump - ATVStoreGenreRadioStation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVStoreGenreRadioStation : ATVDataCollection
{
    NSDictionary * _genreNode;
}

@property (retain, nonatomic) NSDictionary * genreNode;
@property (readonly, nonatomic) NSDictionary * radioStation;

- (ATVStoreGenreRadioStation *)initWithDataClient:(ATVDataClient *)arg0 genreNode:(NSDictionary *)arg1;
- (void)setGenreNode:(NSDictionary *)arg0;
- (NSDictionary *)genreNode;
- (NSDictionary *)radioStation;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)concreteValueForProperty:(NSString *)arg0;

@end
