/* Runtime dump - BRTrailerDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseParserDelegate.h>

@class BRMovieTrailer, BRMovieTrailersProvider, BRResolution;
@interface BRTrailerDelegate : BRBaseParserDelegate
{
    BRMovieTrailersProvider * _provider;
    BRMovieTrailer * _movieTrailer;
    NSMutableArray * _elementCollection;
    BRResolution * _resolution;
    NSXMLParser * _parser;
}

- (void)endTitle;
- (BRTrailerDelegate *)initWithMediaProvider:(NSObject *)arg0 resolution:(BRResolution *)arg1;
- (void)setWeakReferenceToParser:(NSObject *)arg0;
- (void)startMovieinfoWithAttributes:(NSDictionary *)arg0;
- (void)endMovieinfo;
- (void)endRuntime;
- (void)endRating;
- (void)endStudio;
- (void)endPostdate;
- (void)endReleasedate;
- (void)endCopyright;
- (void)endDirector;
- (void)endDescription;
- (void)endName;
- (void)startCastWithAttributes:(NSDictionary *)arg0;
- (void)endCast;
- (void)startGenreWithAttributes:(NSDictionary *)arg0;
- (void)endGenre;
- (void)endXlarge;
- (void)endPoster;
- (void)endLarge;
- (void)endLocation;
- (void)dealloc;

@end
