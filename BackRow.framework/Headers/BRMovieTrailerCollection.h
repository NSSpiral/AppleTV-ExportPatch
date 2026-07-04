/* Runtime dump - BRMovieTrailerCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaCollection.h>

@class BRGenre, BRMediaCollectionType, BRMediaType;
@interface BRMovieTrailerCollection : BRBaseMediaCollection
{
    NSMutableArray * _mediaAssets;
}

- (NSString *)titleForSorting;
- (NSString *)artistForSorting;
- (NSMutableArray *)mediaAssets;
- (BRMediaCollectionType *)collectionType;
- (BRGenre *)primaryGenre;
- (char)hasCoverArt;
- (NSDictionary *)coverArt;
- (BRMovieTrailerCollection *)initWithMediaProvider:(NSObject *)arg0;
- (char)isLocal;
- (void)dealloc;
- (int)count;
- (void)addObject:(struct objc_method *)arg0;
- (long)duration;
- (NSString *)title;
- (NSString *)collectionID;
- (NSString *)artist;
- (char)isCompilation;
- (BRMediaType *)mediaType;

@end
