/* Runtime dump - EKEventCreatedFromSuggestionPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading>
{
    NSString * _opaqueKey;
}

@property (readonly, nonatomic) NSString * opaqueKey;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (NSString *)predicateFormat;
- (id)defaultPropertiesToLoad;
- (EKEventCreatedFromSuggestionPredicate *)initWithOpaqueKey:(NSString *)arg0;
- (char)shouldLoadDefaultProperties;
- (NSString *)opaqueKey;
- (void)dealloc;
- (EKEventCreatedFromSuggestionPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;

@end
