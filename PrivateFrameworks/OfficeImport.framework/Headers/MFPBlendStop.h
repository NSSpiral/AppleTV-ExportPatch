/* Runtime dump - MFPBlendStop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPBlendStop : NSObject
{
    float mFactor;
    float mPosition;
}

- (float)position;
- (float)factor;
- (MFPBlendStop *)initWithFactor:(float)arg0 position:(float)arg1;

@end
