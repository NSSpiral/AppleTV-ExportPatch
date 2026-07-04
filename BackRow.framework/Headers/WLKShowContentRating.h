/* Runtime dump - WLKShowContentRating
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKContentRating.h>
@interface WLKShowContentRating : WLKContentRating
{
    unsigned int _contentAudience;
}

@property (readonly, nonatomic) unsigned int contentAudience;

+ (unsigned int)_audienceForString:(NSString *)arg0;

- (unsigned int)contentAudience;
- (WLKShowContentRating *)initWithDictionary:(NSDictionary *)arg0;

@end
