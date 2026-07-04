/* Runtime dump - RUIPhloatoPlane
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, RUIPhloatoArtLoader, RUIPhloatoPlaneDelegate;
@interface RUIPhloatoPlane : NSObject
{
    BRControl * _planeLayer;
    RUIPhloatoArtLoader * _provider;
    NSMutableArray * _photoLayers;
    RUIPhloatoPlaneDelegate * _animationDelegate;
    NSTimer * _pullTimer;
    struct CGSize _frameMultiplier;
    float _zPosition;
    char _pullsImages;
    struct RUIPhloatoPlaneImagePosition * _table;
    long _currentEntryIndex;
    long _entryCount;
}

- (RUIPhloatoPlane *)initWithPlaneLayer:(BRControl *)arg0 positionTable:(struct RUIPhloatoPlaneImagePosition *)arg1 count:(struct RUIPhloatoPlaneImagePosition)arg2;
- (void)setFrameMultiplier:(struct CGSize)arg0;
- (void)setPullsImages:(char)arg0;
- (void)_updateImagePuller;
- (char)pullsImages;
- (struct CGSize)frameMultiplier;
- (void)_addNextImage:(UIImage *)arg0;
- (void)_createImagePuller;
- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)setZPosition:(float)arg0;
- (void).cxx_destruct;
- (RUIPhloatoArtLoader *)provider;
- (void)setProvider:(RUIPhloatoArtLoader *)arg0;
- (float)zPosition;

@end
