/* Runtime dump - TSKCOIdPlacementAddOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdPlacementAddOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>
{
    int mObjectCount;
    int mObjectCounterSpace;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isNoop;
@property (readonly, nonatomic) int objectCount;
@property (readonly, nonatomic) int objectCounterSpace;

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOIdPlacementAddOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (id)operationWithNewNoop:(char)arg0;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (TSKCOIdPlacementAddOperation *)initWithIdAddress:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(char)arg3 noop:(char)arg4;
- (int)objectCount;
- (int)objectCounterSpace;
- (TSKCOIdPlacementAddOperation *)initWithIdAddress:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(char)arg3 noop:(char)arg4 objectCount:(int)arg5 objectCounterSpace:(int)arg6;
- (TSKCOIdPlacementAddOperation *)initWithIdAddress:(NSString *)arg0 toIndex:(int)arg1 objectCount:(int)arg2 objectCounterSpace:(int)arg3;
- (NSNumber *)operationWithNewObjectCount:(int)arg0;
- (NSObject *)operationWithNewFromIndex:(int)arg0 toIndex:(int)arg1 dominating:(char)arg2;
- (NSNumber *)p_transformObjectCount:(NSObject *)arg0;
- (NSObject *)p_transformRearrangeOrPlacementOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (TSKCOIdPlacementAddOperation *)initWithIdAddress:(NSString *)arg0 toIndex:(int)arg1;
- (id)p_transformAdd:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformRemove:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformRearrange:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformPlacement:(id)arg0 isHigherPriority:(char)arg1;
- (NSString *)description;

@end
