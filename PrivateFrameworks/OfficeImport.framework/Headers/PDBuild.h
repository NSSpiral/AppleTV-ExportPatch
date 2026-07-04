/* Runtime dump - PDBuild
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDBuild : NSObject
{
    char mIsAnimateBackground;
    OADDrawable * mDrawable;
}

- (void)dealloc;
- (PDBuild *)init;
- (char)isEqual:(NSObject *)arg0;
- (TSDDrawableInfo *)drawable;
- (void)setDrawable:(TSDDrawableInfo *)arg0;
- (char)isAnimateBackground;
- (void)setIsAnimateBackground:(char)arg0;

@end
