/* Runtime dump - WLKGenre
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKGenre : NSObject
{
    NSString * _uniqueID;
    NSString * _name;
}

@property (readonly, copy, nonatomic) NSString * uniqueID;
@property (readonly, copy, nonatomic) NSString * name;

+ (WLKGenre *)genresWithDictionaries:(id)arg0;

- (WLKGenre *)init;
- (char)isEqual:(NSObject *)arg0;
- (WLKGenre *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSString *)uniqueID;

@end
