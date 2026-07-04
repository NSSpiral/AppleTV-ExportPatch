/* Runtime dump - RUIRetailMovieAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaAsset.h>

@class BRMediaType;
@interface RUIRetailMovieAsset : BRBaseMediaAsset
{
    NSURL * _mediaURL;
}

- (NSString *)assetID;
- (char)hasVideoContent;
- (RUIRetailMovieAsset *)initWithMediaURL:(NSURL *)arg0;
- (void).cxx_destruct;
- (BRMediaType *)mediaType;
- (NSURL *)mediaURL;

@end
