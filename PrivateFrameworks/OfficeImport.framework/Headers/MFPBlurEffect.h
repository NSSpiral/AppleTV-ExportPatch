/* Runtime dump - MFPBlurEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPBlurEffect : MFPEffect
{
    float mRadius;
    char mExpandEdge;
}

+ (NSString *)GUID;

- (MFPBlurEffect *)initWithRadius:(float)arg0 expandEdge:(char)arg1;

@end
