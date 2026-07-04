/* Runtime dump - PDAnimationShapeTarget
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationShapeTarget : PDAnimationTarget
{
    OADDrawable * mDrawable;
}

- (void)dealloc;
- (PDAnimationShapeTarget *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSDDrawableInfo *)drawable;
- (void)setDrawable:(TSDDrawableInfo *)arg0;

@end
