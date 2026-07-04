/* Runtime dump - OADFlattenedGroup
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADFlattenedGroup : OADDrawable
{
    NSMutableArray * mDrawables;
}

- (void)dealloc;
- (OADFlattenedGroup *)init;
- (NSArray *)drawables;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0;

@end
