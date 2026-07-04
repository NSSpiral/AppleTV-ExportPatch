/* Runtime dump - WLKBasicSportingEventMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKBasicContentMetadata.h>
@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata
{
    NSDate * _startGameTime;
}

@property (readonly, copy, nonatomic) NSDate * startGameTime;

- (NSDate *)startGameTime;
- (WLKBasicSportingEventMetadata *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;

@end
