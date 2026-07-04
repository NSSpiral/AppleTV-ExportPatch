/* Runtime dump - RUIYTMediaAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRXMLMediaAsset.h>

@class BRMediaType;
@interface RUIYTMediaAsset : BRXMLMediaAsset
{
    unsigned char _validThumbnailsFound;
    ATVImage * _smallThumbnailArtImage;
    char _isFavorite;
}

+ (NSObject *)mediaAssetFromMediaProvider:(NSObject *)arg0;

- (NSDate *)datePublished;
- (NSString *)authorName;
- (char)isInappropriate;
- (int)grFormat;
- (RUIYTMediaAsset *)initWithMediaProvider:(NSObject *)arg0;
- (void)numberOfLikes:(int *)arg0 numberOfDislikes:(int *)arg1;
- (void)addThumbnailAttribute:(NSObject *)arg0;
- (ATVImage *)smallThumbnailArtImage;
- (void)clearSmallCoverArtImage;
- (void)setIsFavorite:(char)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (long)duration;
- (NSString *)category;
- (void).cxx_destruct;
- (char)isFavorite;
- (NSString *)keywords;
- (BRMediaType *)mediaType;
- (NSString *)viewCount;

@end
