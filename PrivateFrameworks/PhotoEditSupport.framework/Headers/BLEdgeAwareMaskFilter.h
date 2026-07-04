/* Runtime dump - BLEdgeAwareMaskFilter
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLEdgeAwareMaskFilter : CIFilter
{
    float * _cubeData;
    struct ? _currentInputColor;
    CIFilter * _ciColorCubeFilter;
    struct ? _inputColor;
}

@property struct ? inputColor;

- (void)setInputImage:(CIImage *)arg0;
- (void)setInputColor:(struct ?)arg0;
- (struct ?)inputColor;
- (void)dealloc;
- (BLEdgeAwareMaskFilter *)init;
- (void).cxx_destruct;
- (char)isDataUpToDate;
- (void)labFromRed:(float)arg0 green:(float)arg1 blue:(float)arg2 lunminance:(float *)arg3 a:(float *)arg4 b:(float *)arg5;
- (float *)cubeData;
- (CIImage *)outputImage;
- (unsigned long)dataLength;

@end
