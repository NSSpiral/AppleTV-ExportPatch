/* Runtime dump - MCContainer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCContainer : MCObject
{
    unsigned short mFlags;
    unsigned short mSpecialRetainCount;
    MCAudioPlaylist * mAudioPlaylist;
    NSDictionary * mInitialState;
    MCPlug * mReferencingPlug;
}

@property (readonly) MCAudioPlaylist * audioPlaylist;
@property (readonly) MCAudioPlaylist * audioPlaylistCreateIfNeeded;
@property (readonly) MCPlug * referencingPlug;
@property (retain) NSDictionary * initialState;

- (void)dealloc;
- (MCContainer *)init;
- (MCAudioPlaylist *)audioPlaylist;
- (void)demolish;
- (MCAudioPlaylist *)audioPlaylistCreateIfNeeded;
- (void)specialRelease;
- (id)specialRetain;
- (NSDictionary *)initialState;
- (void)setInitialState:(NSDictionary *)arg0;
- (MCPlug *)referencingPlug;
- (MCContainer *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)referenceByPlug:(id)arg0;
- (void)unreferenceByPlug:(id)arg0;
- (NSDictionary *)imprint;

@end
