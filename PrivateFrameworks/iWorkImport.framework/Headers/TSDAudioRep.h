/* Runtime dump - TSDAudioRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAudioRep : TSDMediaRep
{
    TSKAVPlayerController * mPlayerController;
    CALayer * mPlayPauseButtonLayer;
    CALayer * mAudioImageLayer;
    CALayer * mSpinnerLayer;
    float mDynamicVolume;
    char mIsChangingDynamicVolume;
    <TSDAudioHUDController> * mAudioHUDController;
}

@property (readonly, nonatomic) TSDMovieInfo * movieInfo;

- (TSDAudioRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (char)directlyManagesLayerContent;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(char)arg1 withStroke:(char)arg2 withOpacity:(char)arg3 forAlphaOnly:(char)arg4 drawChildren:(char)arg5;
- (char)canResetMediaSize;
- (char)shouldShowMediaReplaceUI;
- (char)shouldAllowReplacementFromPaste;
- (char)shouldAllowReplacementFromDrop;
- (void)dealloc;
- (Class)layerClass;
- (void)drawInContext:(struct CGContext *)arg0;
- (TSDMovieInfo *)movieInfo;

@end
