/* Runtime dump - BREventChapter
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRChapter.h>
@interface BREventChapter : BRChapter
{
    NSString * _artworkURL;
}

@property (retain) NSString * artworkURL;

- (void)setArtworkURL:(NSString *)arg0;
- (NSString *)artworkURL;
- (id /* <BRImageProxy> */)imageProxy;

@end
