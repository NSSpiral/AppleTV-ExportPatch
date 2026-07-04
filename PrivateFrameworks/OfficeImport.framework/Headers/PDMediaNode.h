/* Runtime dump - PDMediaNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDMediaNode : PDTimeNode
{
    PDAnimationTarget * mTarget;
    char mIsMuted;
    char mIsShowWhenStopped;
    long mNumberOfSlides;
    long mVolume;
}

- (void)dealloc;
- (PDMediaNode *)init;
- (void)setTarget:(NSObject *)arg0;
- (NSObject *)target;
- (char)isMuted;
- (void)setIsMuted:(char)arg0;
- (char)isShowWhenStopped;
- (void)setIsShowWhenStopped:(char)arg0;
- (long)numberOfSlides;
- (void)setNumberOfSlides:(long)arg0;
- (long)volume;
- (void)setVolume:(long)arg0;

@end
