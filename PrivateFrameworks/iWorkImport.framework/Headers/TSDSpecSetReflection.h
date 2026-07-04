/* Runtime dump - TSDSpecSetReflection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecSetReflection : TSDSpecReflection
{
    TSDReflection * _reflection;
    char _unset;
}

- (TSDSpecSetReflection *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSDSpecSetReflection *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
