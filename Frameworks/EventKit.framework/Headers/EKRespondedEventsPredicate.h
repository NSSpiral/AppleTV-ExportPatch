/* Runtime dump - EKRespondedEventsPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRespondedEventsPredicate : NSPredicate <EKDefaultPropertiesLoading, NSSecureCoding>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (NSPredicate *)predicate;

- (id)defaultPropertiesToLoad;
- (char)shouldLoadDefaultProperties;
- (EKRespondedEventsPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (char)evaluateWithObject:(NSObject *)arg0;

@end
