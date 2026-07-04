/* Runtime dump - MURandom
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MURandom : MUPoolObject
{
    id _state;
    long * _frontPtr;
    long * _rearPtr;
    long * _endPtr;
}

+ (MURandom *)randomGeneratorWithSeed:(unsigned long)arg0;
+ (struct ? *)poolInfo;
+ (char)clearVars;

- (long)randomInt;
- (float)randomFloatInRange:(float)arg0 :(float)arg1;
- (void)_seed:(unsigned long)arg0;

@end
