/* Runtime dump - TSKCOIdPlacementBaseOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation <TSKCOIdOperation, TSKCOTransforming>
{
    TSKCOIdAddress * mAddress;
    int mFromIndex;
    int mToIndex;
    int mPlacementType;
    char mDominating;
}

@property (readonly, nonatomic) int fromIndex;
@property (readonly, nonatomic) int toIndex;
@property (readonly, nonatomic) int placementType;
@property (readonly, nonatomic) char isDominating;
@property (readonly, nonatomic) TSKCOIdAddress * address;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOIdPlacementBaseOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (id)operationWithNewNoop:(char)arg0;
- (NSObject *)transformIdPlacementBaseOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformDynamicByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (NSObject *)transformStaticByAnyOperation:(NSObject *)arg0 byHigherPriority:(char)arg1;
- (id)ut_transformByTransformer:(id)arg0;
- (TSKCOIdPlacementBaseOperation *)initWithIdAddress:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(char)arg3 noop:(char)arg4;
- (int)fromIndex;
- (char)isDominating;
- (int)p_transformIndexByAdd:(int)arg0 isHigherPriority:(char)arg1 isFromIndex:(char)arg2;
- (NSObject *)operationWithNewFromIndex:(int)arg0 toIndex:(int)arg1 dominating:(char)arg2;
- (int)placementType;
- (struct pair<int, int>)p_transformBothIndexesByAdd:(int)arg0 opToIndex:(int)arg1 isHigherPriority:(char)arg2;
- (id)p_transformAdd:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformRemove:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformRearrange:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformPlacement:(id)arg0 isHigherPriority:(char)arg1;
- (int)p_transformToIndexByRearrange:(int)arg0 isHigherPriority:(char)arg1;
- (int)p_transformFromIndexByRearrange:(int)arg0 isHigherPriority:(char)arg1;
- (struct pair<int, int>)p_transformBothIndexesByRearrange:(int)arg0 opToIndex:(int)arg1 isHigherPriority:(char)arg2;
- (TSKCOIdPlacementBaseOperation *)initWithIdAddress:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2;
- (int)p_transformIndexByRemove:(int)arg0 isHigherPriority:(char)arg1 isFromIndex:(char)arg2;
- (struct pair<int, int>)p_transformBothIndexesByRemove:(int)arg0 opToIndex:(int)arg1 isHigherPriority:(char)arg2;
- (char)p_isFromToIndexEqual;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSKCOIdAddress *)address;
- (int)toIndex;

@end
