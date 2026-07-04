/* Runtime dump - GeniusMixClusterView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRReflectionControl;
@interface GeniusMixClusterView : BRControl
{
    <BRImageProxy> * _geniusMixCollectionProxy;
    char _artworkRequestPending;
    char _needToRestartImageRequest;
    BRImageControl * _defaultImageControl;
    BRReflectionControl * _reflectionControl;
    BRImageControl * _playImageControl;
    NSString * _geniusMixName;
    NSString * _geniusMixBasedOnArtists;
}

@property (retain, nonatomic) NSString * geniusMixName;
@property (retain, nonatomic) NSString * geniusMixBasedOnArtists;

+ (GeniusMixClusterView *)clusterControlWithGeniusMix:(char)arg0;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (struct CGRect)focusCursorFrame;
- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (UIImage *)_loadArtwork;
- (GeniusMixClusterView *)initWithGeniusMix:(char)arg0;
- (void)_setImageControlFrames;
- (void)setGeniusMixName:(NSString *)arg0;
- (void)setGeniusMixBasedOnArtists:(NSString *)arg0;
- (struct CGSize)_clusterImageSize;
- (NSString *)geniusMixName;
- (NSString *)geniusMixBasedOnArtists;
- (void)dealloc;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
