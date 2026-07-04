/* Runtime dump - WLKServerRoute
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKServerRoute : NSObject
{
    NSDictionary * _dictionary;
}

@property (readonly, copy, nonatomic) NSString * HTTPMethod;
@property (readonly, copy, nonatomic) NSString * endpointURLString;
@property (readonly, nonatomic) char requiresMescal;

- (char)requiresMescal;
- (NSString *)endpointURLString;
- (NSString *)description;
- (WLKServerRoute *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSString *)HTTPMethod;

@end
