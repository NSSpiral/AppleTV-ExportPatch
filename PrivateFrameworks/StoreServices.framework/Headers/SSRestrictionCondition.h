/* Runtime dump - SSRestrictionCondition
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRestrictionCondition : SSProtocolCondition
{
    NSString * _restrictionName;
}

- (void)dealloc;
- (SSRestrictionCondition *)initWithDictionary:(NSDictionary *)arg0;
- (char)evaluateWithContext:(NSObject *)arg0;

@end
