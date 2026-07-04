/* Runtime dump - ODDLayoutObjectList
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDLayoutObjectList : ODDLayoutObject
{
    NSMutableArray * mChildren;
}

- (void)dealloc;
- (ODDLayoutObjectList *)init;
- (void)addChild:(OADDrawable *)arg0;
- (NSArray *)children;

@end
