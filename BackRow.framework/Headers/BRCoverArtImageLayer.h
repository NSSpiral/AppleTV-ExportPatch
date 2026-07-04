/* Runtime dump - BRCoverArtImageLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRCoverArtImageLayer : BRControl
{
    <BRImageProxy> * _imageProxy;
    ATVImage * _image;
    char _deletterboxImage;
    char _showsDefaultCoverArt;
    char _showsBorder;
    NSTimer * _setCoverArtTimer;
}

- (void)setShowsDefaultCoverArt:(char)arg0;
- (void)setDeletterboxImage:(char)arg0;
- (void)setShowsBorder:(char)arg0;
- (void)_coverArtChanged:(NSNotification *)arg0;
- (char)deletterboxImage;
- (char)showsDefaultCoverArt;
- (void)_updateCoverArt;
- (char)showsBorder;
- (void)_setCoverArtImage:(UIImage *)arg0;
- (void)_setCoverArtImageWithDelay:(double)arg0;
- (void)_setImageAsContents:(id)arg0;
- (void)dealloc;
- (BRCoverArtImageLayer *)init;
- (ATVImage *)image;
- (void)setImageProxy:(<BRImageProxy> *)arg0;

@end
