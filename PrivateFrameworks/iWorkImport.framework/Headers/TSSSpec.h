/* Runtime dump - TSSSpec
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpec : TSKSosBase

@property (readonly) NSString * operationPropertyName;

- (TSSSpec *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSSSpec *)initUnsetSpec;
- (NSObject *)getUnsetSpec;
- (char)isUnsetSpec;
- (NSObject *)specWithCurrentProperty:(NSObject *)arg0;
- (id)apply:(id /* block */)arg0;

@end
