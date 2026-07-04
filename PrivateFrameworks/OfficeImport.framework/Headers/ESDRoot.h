/* Runtime dump - ESDRoot
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDRoot : ESDObject
{
    NSMutableArray * mChildren;
}

- (void)dealloc;
- (ESDRoot *)init;
- (void)addChild:(OADDrawable *)arg0;
- (unsigned int)childCount;
- (id)childAt:(unsigned int)arg0;
- (ESDRoot *)initWithEshObject:(struct EshObject *)arg0;
- (struct EshRoot *)eshRoot;
- (void)writeToWriter:(struct OcWriter *)arg0;
- (ESDRoot *)initFromReader:(struct OcReader *)arg0;
- (NSObject *)pbReferenceWithID:(unsigned long)arg0;
- (ESDRoot *)initWithPbState:(NSObject *)arg0;

@end
