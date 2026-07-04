/* Runtime dump - MRParallelPlugger
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRParallelPlugger : NSObject
{
    MCPlugParallel * mPlug;
    MCAnimationPath * mAnimationPathParam1;
    MCAnimationPath * mAnimationPathParam2;
    MCAnimationPath * mAnimationPathXY;
    MRAnimationPathScalar * mAnimationPathX;
    MRAnimationPathScalar * mAnimationPathY;
    MRAnimationPathScalar * mAnimationPathZ;
    MRAnimationPathScalar * mAnimationPathScale;
    MRAnimationPathScalar * mAnimationPathRX;
    MRAnimationPathScalar * mAnimationPathRY;
    MRAnimationPathScalar * mAnimationPathRZ;
    MRAnimationPathScalar * mAnimationPathOpacity;
    MRAnimationContext * mAnimationContext;
    unsigned char mCurrentLayoutIndex;
    char mNeedsUpdate;
    char mPlugWasSetSinceLastRendering;
}

@property (copy, nonatomic) MCPlugParallel * plug;
@property (nonatomic) unsigned char currentLayoutIndex;
@property (nonatomic) char needsUpdate;

- (void)dealloc;
- (MRParallelPlugger *)init;
- (void)setPlug:(MCPlugParallel *)arg0;
- (MCPlugParallel *)plug;
- (unsigned char)currentLayoutIndex;
- (void)setCurrentLayoutIndex:(unsigned char)arg0;
- (void)setNeedsUpdate:(char)arg0;
- (char)applyAtTime:(double)arg0 toSublayer:(id)arg1 withArguments:(NSDictionary *)arg2;
- (char)needsUpdate;

@end
