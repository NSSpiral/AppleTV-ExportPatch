/* Runtime dump - TSCHPropertyMutationHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationHelper : NSObject

+ (NSObject *)convertToStyleSwapTuplesForStyleOwner:(NSObject *)arg0 styleSwapType:(int)arg1 nonStyleSwapType:(int)arg2 index:(unsigned int)arg3 fromMutations:(id)arg4 forImport:(char)arg5 withOptionalStyleValueConversionBlock:(id /* block */)arg6;
+ (int)specificMutationPropertyForGeneric:(int)arg0 styleOwner:(<TSCHStyleOwning> *)arg1 allowSpecificProperties:(char)arg2;
+ (void)applyMutations:(id)arg0 forImport:(char)arg1 forStyleOwner:(NSObject *)arg2 withNonStylePropertyList:(NSArray *)arg3 toStylePropertyMap:(NSObject *)arg4 andNonStylePropertyMap:(NSObject *)arg5;
+ (TSCHPropertyMutationHelper *)styleSwapTuplesFromMutationTuples:(id)arg0 forImport:(char)arg1;
+ (void)setValue:(NSObject *)arg0 forProperty:(int)arg1 ofStyleOwner:(NSObject *)arg2;

- (TSCHPropertyMutationHelper *)init;

@end
