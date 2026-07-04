/* Runtime dump - ODDChoose
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDChoose : ODDLayoutObject
{
    NSMutableArray * mWhens;
    ODDOtherwise * mOtherwise;
}

- (void)dealloc;
- (ODDChoose *)init;
- (id)whens;
- (void)addWhen:(id)arg0;
- (ODDOtherwise *)otherwise;
- (void)setOtherwise:(ODDOtherwise *)arg0;

@end
