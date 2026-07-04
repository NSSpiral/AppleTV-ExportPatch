/* Runtime dump - MCEncryptedProfileServicePayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEncryptedProfileServicePayload : MCPayload
{
    NSString * _urlString;
}

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (NSString *)subtitle1Label;
- (NSString *)subtitle1Description;
- (MCEncryptedProfileServicePayload *)initWithURLString:(NSString *)arg0 profile:(MCProfile *)arg1;

@end
