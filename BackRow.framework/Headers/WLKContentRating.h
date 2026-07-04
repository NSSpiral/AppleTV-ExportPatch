/* Runtime dump - WLKContentRating
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKContentRating : NSObject
{
    unsigned int _contentRatingSystem;
    NSString * _displayName;
    unsigned int _ratingValue;
}

@property (readonly, nonatomic) unsigned int contentRatingSystem;
@property (readonly, copy, nonatomic) NSString * displayName;
@property (readonly, nonatomic) unsigned int ratingValue;

+ (unsigned int)_ratingSystemForString:(NSString *)arg0;
+ (Class)_classForContentRatingSystem:(unsigned int)arg0;

- (unsigned int)contentRatingSystem;
- (unsigned int)ratingValue;
- (WLKContentRating *)init;
- (WLKContentRating *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSString *)displayName;

@end
