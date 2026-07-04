/* Runtime dump - WLKLocale
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKLocale : NSObject
{
    NSString * _displayName;
    NSLocale * _locale;
}

@property (readonly, copy, nonatomic) NSString * displayName;
@property (readonly, copy, nonatomic) NSLocale * locale;

- (WLKLocale *)init;
- (WLKLocale *)initWithDictionary:(NSDictionary *)arg0;
- (NSLocale *)locale;
- (void).cxx_destruct;
- (NSString *)displayName;

@end
