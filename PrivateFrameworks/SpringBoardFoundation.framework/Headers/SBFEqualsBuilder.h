/* Runtime dump - SBFEqualsBuilder
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFEqualsBuilder : NSObject

+ (char)evaluateBuilderBlock:(id /* block */)arg0 remainingBlocks:(/* block */ id)arg1;
+ (char)isObject:(NSObject *)arg0 equalToOther:(id)arg1 withBlocks:(struct _VMUBlockNode *)arg2;
+ (char)isObject:(NSObject *)arg0 kindOfClass:(Class)arg1 andEqualToObject:(NSObject *)arg2 withBlocks:(struct _VMUBlockNode *)arg3;
+ (char)isObject:(NSObject *)arg0 memberOfClass:(Class)arg1 andEqualToObject:(NSObject *)arg2 withBlocks:(struct _VMUBlockNode *)arg3;
+ (char)isObject:(NSObject *)arg0 memberOfSameClassAndEqualTo:(id)arg1 withBlocks:(struct _VMUBlockNode *)arg2;
+ (char)isObject:(NSObject *)arg0 equalToOther:(id)arg1;
+ (char)isBool:(char)arg0 equalToOther:(char)arg1;
+ (char)isSize:(struct CGSize)arg0 equalToOther:(struct CGSize)arg1;

@end
