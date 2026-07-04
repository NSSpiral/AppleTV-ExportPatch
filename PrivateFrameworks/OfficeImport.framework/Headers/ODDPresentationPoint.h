/* Runtime dump - ODDPresentationPoint
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDPresentationPoint : ODDPoint
{
    ODDPresentationPoint * mParent;
    NSMutableArray * mChildren;
}

- (void)dealloc;
- (void)setType:(int)arg0;
- (void)addChild:(OADDrawable *)arg0 order:(unsigned int)arg1;
- (GLKShaderBlockNode *)parent;
- (NSArray *)children;

@end
