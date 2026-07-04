/* Runtime dump - WLKBasicMovieMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKBasicContentMetadata.h>

@class WLKMovieContentRating;
@interface WLKBasicMovieMetadata : WLKBasicContentMetadata
{
    NSArray * _genres;
    NSString * _studio;
    WLKMovieContentRating * _contentRating;
    NSDate * _releaseDate;
    double _duration;
}

@property (readonly, copy, nonatomic) NSArray * genres;
@property (readonly, copy, nonatomic) NSString * studio;
@property (readonly, nonatomic) WLKMovieContentRating * contentRating;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate * releaseDate;

- (NSString *)studio;
- (WLKBasicMovieMetadata *)initWithDictionary:(NSDictionary *)arg0;
- (double)duration;
- (void).cxx_destruct;
- (WLKMovieContentRating *)contentRating;
- (NSDate *)releaseDate;
- (NSArray *)genres;

@end
