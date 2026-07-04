/* Runtime dump - OADFillOverlayEffect
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADFillOverlayEffect : OADEffect
{
    int mBlendMode;
    OADFill * mFill;
}

- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (void)dealloc;
- (OADFillOverlayEffect *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDFill *)fill;
- (void)setFill:(TSDFill *)arg0;

@end
