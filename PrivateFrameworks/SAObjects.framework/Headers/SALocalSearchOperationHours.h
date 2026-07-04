/* Runtime dump - SALocalSearchOperationHours
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSDictionary * operationPeriods;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SALocalSearchOperationHours *)operationHours;
+ (NSDictionary *)operationHoursWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSDictionary *)operationPeriods;
- (void)setOperationPeriods:(NSDictionary *)arg0;

@end
