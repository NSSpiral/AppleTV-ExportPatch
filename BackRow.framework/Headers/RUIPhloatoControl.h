/* Runtime dump - RUIPhloatoControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class RUIPhloatoPlane;
@interface RUIPhloatoControl : BRControl
{
    RUIPhloatoPlane * _frontPlane;
    RUIPhloatoPlane * _middlePlane;
    RUIPhloatoPlane * _backPlane;
    NSTimer * _spinTimer;
    float _spinFrequency;
    char _waitingForQueue;
}

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_screenSaverDataReady:(id)arg0;
- (void)_queueReady:(id)arg0;
- (void)_addProviderToPlane:(NSObject *)arg0 withMaxImageSize:(struct CGSize)arg1;
- (void)_screenSaverCacheUpdated:(id)arg0;
- (void)_cupidDataClientUpdated:(id)arg0;
- (void)_requestScreenSaverData;
- (void)_startWhenReady;
- (void)_stopUpdates;
- (void)setSpinFrequency:(float)arg0;
- (float)spinFrequency;
- (char)_allQueuesReady;
- (void)_fireSpinAnimation:(NSObject *)arg0;
- (float)_rotationForFrame:(int)arg0 totalFrameCount:(int)arg1 directionFactor:(float)arg2;
- (float)_zTranslationForFrame:(int)arg0 totalFrameCount:(int)arg1;
- (void)dealloc;
- (RUIPhloatoControl *)init;
- (void).cxx_destruct;
- (void)setProvider:(NSObject *)arg0;

@end
