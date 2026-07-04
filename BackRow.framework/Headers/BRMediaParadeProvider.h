/* Runtime dump - BRMediaParadeProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRImageLoader.h>
@interface BRMediaParadeProvider : BRImageLoader
{
    id _artworkNeedsDeletterboxing;
}

- (void)setDeletterboxAssetArtwork:(char)arg0;
- (UIImage *)finalFormForImage:(UIImage *)arg0;
- (char)isImageFinalForm:(id)arg0;

@end
