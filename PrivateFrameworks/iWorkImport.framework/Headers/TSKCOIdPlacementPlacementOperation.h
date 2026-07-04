/* Runtime dump - TSKCOIdPlacementPlacementOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdPlacementPlacementOperation : TSKCOIdPlacementBaseOperation

- (void)saveToArchiver:(NSObject *)arg0 message:(struct Operation *)arg1;
- (TSKCOIdPlacementPlacementOperation *)initWithUnarchiver:(NSUnarchiver *)arg0 message:(struct Operation *)arg1;
- (NSObject *)transformUpdateRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformUpdateIdOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (NSObject *)transformReplaceRangeOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (TSKCOIdPlacementPlacementOperation *)initWithIdAddress:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(char)arg3 noop:(char)arg4;
- (NSObject *)p_transformRearrangeOrPlacementOperation:(NSObject *)arg0 isHigherPriority:(char)arg1;
- (id)p_transformAdd:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformRemove:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformRearrange:(id)arg0 isHigherPriority:(char)arg1;
- (id)p_transformPlacement:(id)arg0 isHigherPriority:(char)arg1;
- (TSKCOIdPlacementPlacementOperation *)initWithIdAddress:(NSString *)arg0 fromIndex:(int)arg1 toIndex:(int)arg2 dominating:(char)arg3;
- (NSString *)description;

@end
