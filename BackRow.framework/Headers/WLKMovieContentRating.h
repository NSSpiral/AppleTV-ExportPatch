/* Runtime dump - WLKMovieContentRating
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKContentRating.h>
@interface WLKMovieContentRating : WLKContentRating
{
    unsigned int _MPAAContentRating;
}

@property (readonly, nonatomic) unsigned int MPAAContentRating;

+ (unsigned int)_contentRatingForString:(NSString *)arg0;

- (unsigned int)MPAAContentRating;
- (WLKMovieContentRating *)initWithDictionary:(NSDictionary *)arg0;

@end
