/* Runtime dump - ESDContainer
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDContainer : ESDObject
{
    NSMutableArray * mChildren;
}

+ (void)readChildrenOfObject:(struct EshObject *)arg0 reader:(struct OcReader *)arg1 toArray:(NSArray *)arg2;
+ (void)pbReadChildrenOfObject:(struct EshObject *)arg0 toArray:(NSArray *)arg1 state:(NSObject *)arg2;

- (void)dealloc;
- (void)removeChild:(NSObject *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (unsigned int)childCount;
- (struct EshGroup *)eshGroup;
- (id)childAt:(unsigned int)arg0;
- (NSObject *)firstChildOfType:(unsigned short)arg0;
- (ESDContainer *)initFromReader:(struct OcReader *)arg0 type:(unsigned short)arg1 version:(unsigned short)arg2;
- (struct EshContainer *)eshContainer;
- (NSObject *)addEshChild:(struct EshObject *)arg0;
- (NSObject *)addChildOfType:(unsigned short)arg0;
- (unsigned int)indexOfFirstChildOfType:(unsigned short)arg0 afterIndex:(unsigned int)arg1;
- (NSObject *)containerFromObject:(NSObject *)arg0 mustExist:(char)arg1;
- (NSObject *)childOfType:(unsigned short)arg0 instance:(short)arg1;
- (NSObject *)addContainerChildOfType:(unsigned short)arg0;
- (struct EshObject *)addAtomChildOfType:(unsigned short)arg0;
- (void)insertChild:(NSObject *)arg0 at:(unsigned int)arg1;
- (NSObject *)insertEshChild:(struct EshObject *)arg0 at:(unsigned int)arg1;
- (NSObject *)firstChildOfType:(unsigned short)arg0 afterChild:(NSObject *)arg1;
- (NSObject *)firstChildOfType:(unsigned short)arg0 afterIndex:(unsigned int)arg1;
- (NSObject *)firstContainerChildOfType:(unsigned short)arg0 mustExist:(char)arg1;
- (NSObject *)containerChildOfType:(unsigned short)arg0 instance:(short)arg1 mustExist:(char)arg2;
- (id)containerChildAt:(unsigned int)arg0;
- (NSObject *)shapeContainer;
- (ESDContainer *)initWithEshObject:(struct EshObject *)arg0;
- (void)writeToWriter:(struct OcWriter *)arg0;
- (NSObject *)ebInitWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(NSObject *)arg2;
- (NSObject *)pbInitWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(NSObject *)arg2;
- (struct EshObject *)addPptAtomChildOfType:(unsigned short)arg0;
- (NSObject *)addPptEshClientChildOfType:(unsigned short)arg0;
- (void)addCStringWithNSString:(NSString *)arg0 instance:(int)arg1;
- (void)addCStringWithChar2String:(unsigned short *)arg0 instance:(unsigned short)arg1;
- (NSObject *)addPptContainerChildOfType:(unsigned short)arg0;

@end
