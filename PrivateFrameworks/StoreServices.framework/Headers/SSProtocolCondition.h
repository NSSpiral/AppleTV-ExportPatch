/* Runtime dump - SSProtocolCondition
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSProtocolCondition : NSObject
{
    int _operator;
    id _value;
}

+ (NSDictionary *)newConditionWithDictionary:(NSDictionary *)arg0;

- (void)dealloc;
- (SSProtocolCondition *)initWithDictionary:(NSDictionary *)arg0;
- (char)evaluateWithContext:(NSObject *)arg0;

@end
