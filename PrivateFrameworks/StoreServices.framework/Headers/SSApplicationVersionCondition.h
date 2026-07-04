/* Runtime dump - SSApplicationVersionCondition
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSApplicationVersionCondition : SSProtocolCondition
{
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersion;
}

- (void)dealloc;
- (SSApplicationVersionCondition *)initWithDictionary:(NSDictionary *)arg0;
- (char)evaluateWithContext:(NSObject *)arg0;

@end
