/* Runtime dump - OADWavAudioFile
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADWavAudioFile : OADEmbeddedMediaFile
{
    float mDuration;
    char mHasDuration;
}

@property (nonatomic) float duration;
@property (nonatomic) char hasDuration;

- (float)duration;
- (void)setDuration:(float)arg0;
- (void)setHasDuration:(char)arg0;
- (char)hasDuration;
- (char)isAudioOnly;

@end
