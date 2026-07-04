/* Runtime dump - BRImageControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRImageControl : BRControl
{
    <BRImageProxy> * _imageProxy;
    ATVImage * _image;
    char _renderingImage;
    char _autoDownsample;
    NSString * _artworkIdentifier;
    char _sizeIgnoresPixelBounds;
    char _didSetUIKitTint;
}

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)setImageAsContents:(id)arg0;
- (void)windowMaxBoundsChanged;
- (void)setImageProxyAsContents:(id)arg0;
- (void)_imageUpdated:(id)arg0;
- (NSArray *)accessibilityTraitsList;
- (void)setSizeIgnoresPixelBounds:(char)arg0;
- (void)setAutomaticDownsample:(char)arg0;
- (void)_loadImage;
- (id)_existingFiltersWithoutTint;
- (void)_unloadImage;
- (char)automaticDownsample;
- (char)sizeIgnoresPixelBounds;
- (struct CGSize)sizeThatReallyFitsMaintainingAspectRatio:(struct CGSize)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(ATVImage *)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (ATVImage *)image;
- (void)tintColorDidChange;
- (NSString *)accessibilityLabel;
- (struct CGSize)pixelBounds;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (float)aspectRatio;
- (void)setArtworkIdentifier:(NSString *)arg0;

@end
