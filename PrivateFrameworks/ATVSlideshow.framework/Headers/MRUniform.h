/* Runtime dump - MRUniform
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRUniform : MUPoolObject
{
    id m;
    int i;
    int length;
}

+ (struct ? *)poolInfo;
+ (char)clearVars;

- (MRUniform *)initWithI:(int)arg0;
- (MRUniform *)initWithVec2:(float)arg0 :(float)arg1;
- (MRUniform *)initWithVec3:(float)arg0 :(float)arg1 :(float)arg2;
- (MRUniform *)initWithVec4:(float)arg0 :(float)arg1 :(float)arg2 :(float)arg3;
- (MRUniform *)initWithMat4ForMat3:(id)arg0;
- (MRUniform *)initWithMat4:(id)arg0;
- (MRUniform *)initWithFloat:(float)arg0;

@end
