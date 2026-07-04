/* Runtime dump - ODDNodePoint
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDNodePoint : ODDDataPoint
{
    ODDNodePoint * mParent;
    NSMutableArray * mChildren;
    ODDTransitionPoint * mParentTransition;
    ODDTransitionPoint * mSiblingTransition;
}

- (void)dealloc;
- (void)setType:(int)arg0;
- (NSObject *)siblingTransition;
- (NSObject *)parentTransition;
- (void)addChild:(OADDrawable *)arg0 order:(unsigned int)arg1;
- (void)setParentTransition:(NSObject *)arg0;
- (void)setSiblingTransition:(NSObject *)arg0;
- (GLKShaderBlockNode *)parent;
- (NSArray *)children;

@end
