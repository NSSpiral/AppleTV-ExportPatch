/* Runtime dump - OADGroup
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGroup : OADDrawable <OADDrawableContainer>
{
    struct CGRect mLogicalBounds;
    NSMutableArray * mChildren;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (OADGroup *)init;
- (NSString *)description;
- (void).cxx_construct;
- (void)addChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (unsigned int)childCount;
- (struct CGRect)logicalBounds;
- (OADDrawable *)childAtIndex:(unsigned int)arg0;
- (void)setLogicalBounds:(struct CGRect)arg0;
- (NSDictionary *)groupProperties;
- (void)replaceChild:(OADDrawable *)arg0 with:(OADDrawable *)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (NSArray *)children;

@end
