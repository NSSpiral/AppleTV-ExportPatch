/* Runtime dump - TSSSpecSetDouble
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetDouble : TSSSpecDouble
{
    double _value;
    char _unset;
}

- (TSSSpecSetDouble *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSSSpecSetDouble *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
