/* Runtime dump - VMUCallTreeNode
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreeNode : NSObject
{
    VMUCallTreeNode * _parent;
    NSString * _name;
    unsigned long long _address;
    unsigned int _count;
    unsigned long long _numBytes;
    unsigned int _numChildren;
    id _un;
}

+ (VMUCallTreeNode *)rootForSamples:(id)arg0 symbolicator:(struct _CSTypeRef)arg1 sampler:(VMUSampler *)arg2 options:(unsigned int)arg3;
+ (NSString *)nodeWithName:(NSString *)arg0 address:(unsigned long long)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
+ (VMUCallTreeNode *)rootForSamples:(id)arg0 symbolicator:(struct _CSTypeRef)arg1;
+ (NSObject *)makeFakeRootForNode:(NSObject *)arg0;

- (unsigned long long)numBytes;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (unsigned long long)address;
- (void)setChildren:(NSArray *)arg0;
- (void)addChild:(OADDrawable *)arg0;
- (NSObject *)childAtIndex:(unsigned int)arg0;
- (VMUCallTreeNode *)parent;
- (char)isPseudo;
- (NSObject *)pseudoNodeTopOfStackChild;
- (NSObject *)sortedChildrenWithPseudoNode;
- (NSString *)largestTopOfStackPath;
- (VMUCallTreeNode *)initWithName:(NSString *)arg0 address:(unsigned long long)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
- (unsigned int)numChildren;
- (void)setNumChildren:(unsigned int)arg0;
- (void)getBrowserName:(NSString *)arg0;
- (NSString *)findOrAddChildWithName:(NSString *)arg0 address:(unsigned long long)arg1 nodeSearchType:(int)arg2 isLeafNode:(char)arg3;
- (int)compareSizeAndCount:(NSObject *)arg0;
- (void)parseNameIntoSymbol:(id *)arg0 library:(id *)arg1 loadAddress:(unsigned long long *)arg2 offset:(unsigned long long *)arg3 address:(unsigned long long *)arg4 suffix:(id *)arg5;
- (NSString *)pseudoName;
- (NSObject *)sortedChildrenWithPseudoNode:(NSNumber *)arg0 withCompare:(SEL)arg1;
- (void)countFunctionOccurrencesInTree:(id)arg0;
- (id)fullOutputWithThreshold:(unsigned int)arg0 showPseudoNodes:(char)arg1;
- (char)callTreeHasBranches;
- (NSString *)stringFromCallTreeIndentIfNoBranches:(char)arg0 showPseudoNodes:(char)arg1;
- (id)filterOutSymbols:(id)arg0 required:(unsigned long)arg1;
- (NSSet *)chargeLibrariesInSet:(NSSet *)arg0 toCaller:(JSWTFMainThreadCaller *)arg1 parentLibrary:(NSObject *)arg2;
- (NSNumber *)pruneCount:(unsigned int)arg0;
- (NSObject *)pruneMallocSize:(unsigned long long)arg0;
- (NSMutableSet *)allChildren;
- (NSString *)browserName;
- (char)symbolNameIsUnknown;
- (char)isMallocBlockContentNode;
- (NSSet *)nameWithoutOffset;
- (id)nameWithStringsForSymbol:(id)arg0 library:(NSObject *)arg1 loadAddress:(unsigned long long)arg2 offset:(NSSet *)arg3 address:(unsigned long long)arg4 suffix:(NSString *)arg5;
- (NSString *)findOrAddChildWithName:(NSString *)arg0 address:(unsigned long long)arg1;
- (int)comparePuttingMainThreadFirst:(id)arg0;
- (id)fullOutputWithThreshold:(unsigned int)arg0;
- (NSString *)stringFromCallTreeIndentIfNoBranches:(char)arg0;
- (NSObject *)invertedNode;
- (id)filterOutSymbols:(id)arg0;
- (id)chargeLibrariesToCallers:(id)arg0 keepBoundaries:(char)arg1;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(char)arg0;

@end
