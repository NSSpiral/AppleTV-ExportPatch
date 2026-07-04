/* Runtime dump - BRMovieTrailer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRXMLMediaAsset.h>

@class BRMediaType;
@interface BRMovieTrailer : BRXMLMediaAsset

+ (BRMovieTrailer *)movieTrailerFromMediaProvider:(NSObject *)arg0;

- (NSString *)titleForSorting;
- (BRMediaType *)mediaType;

@end
