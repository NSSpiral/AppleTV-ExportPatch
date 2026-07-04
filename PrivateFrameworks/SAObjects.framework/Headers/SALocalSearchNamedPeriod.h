/* Runtime dump - SALocalSearchNamedPeriod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchNamedPeriod : AceObject <SALocalSearchPeriod>

@property (copy, nonatomic) NSString * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchNamedPeriod *)namedPeriod;
+ (NSDictionary *)namedPeriodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
