/* Runtime dump - WLKBasicShowMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKBasicContentMetadata.h>

@class WLKShowContentRating;
@interface WLKBasicShowMetadata : WLKBasicContentMetadata
{
    WLKShowContentRating * _contentRating;
    NSDate * _releaseDate;
    NSDate * _finaleDate;
    NSArray * _genres;
    NSString * _network;
}

@property (readonly, nonatomic) WLKShowContentRating * contentRating;
@property (readonly, nonatomic) NSDate * releaseDate;
@property (readonly, nonatomic) NSDate * finaleDate;
@property (readonly, copy, nonatomic) NSArray * genres;
@property (readonly, copy, nonatomic) NSString * network;

- (NSDate *)finaleDate;
- (NSString *)network;
- (WLKBasicShowMetadata *)init;
- (WLKBasicShowMetadata *)initWithDictionary:(NSDictionary *)arg0;
- (void).cxx_destruct;
- (WLKShowContentRating *)contentRating;
- (NSDate *)releaseDate;
- (NSArray *)genres;

@end
