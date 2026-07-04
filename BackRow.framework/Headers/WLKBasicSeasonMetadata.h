/* Runtime dump - WLKBasicSeasonMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKBasicContentMetadata.h>

@class WLKShowContentRating;
@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata
{
    NSNumber * _seasonNumber;
    WLKShowContentRating * _contentRating;
    NSString * _canonicalShowID;
}

@property (readonly, nonatomic) NSNumber * seasonNumber;
@property (readonly, nonatomic) WLKShowContentRating * contentRating;
@property (readonly, copy, nonatomic) NSString * canonicalShowID;

+ (WLKBasicSeasonMetadata *)seasonsWithDictionaries:(id)arg0;

- (NSString *)canonicalShowID;
- (WLKBasicSeasonMetadata *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (NSNumber *)seasonNumber;
- (WLKShowContentRating *)contentRating;

@end
