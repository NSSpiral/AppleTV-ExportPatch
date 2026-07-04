/* Runtime dump - BRCoverArtPreviewControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMediaType;
@interface BRCoverArtPreviewControl : BRControl
{
    NSArray * _imageProxies;
    NSMutableArray * _availableImages;
    BRMediaType * _mediaType;
    NSTimer * _crossfadeTimer;
    long _imageIndex;
    float _rotation;
    char _artworkNeedsDeletterboxing;
    char _actionAdded;
    char _onlyDefaultsAvailable;
    char _controlWasDeactivated;
}

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_imageUnavailable:(id)arg0;
- (NSArray *)imageProxies;
- (void)setImageProxies:(NSArray *)arg0;
- (void)setMissingAssetType:(NSObject *)arg0;
- (void)setImageProxies:(NSArray *)arg0 immedateLoad:(char)arg1;
- (void)setDeletterboxAssetArtwork:(char)arg0;
- (void)_loadImage:(UIImage *)arg0;
- (void)_updateCoverArt:(id)arg0;
- (void)_scheduleTimerOnMainThread;
- (void)_crossFadeToNextImage:(UIImage *)arg0;
- (void)dealloc;
- (BRCoverArtPreviewControl *)init;
- (void)setRotation:(float)arg0;
- (void).cxx_destruct;
- (void)setImageProxy:(NSObject *)arg0;
- (void)_cleanupTimer;

@end
