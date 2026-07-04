/* Runtime dump - SADistance
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADistance : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * unit;
@property (copy, nonatomic) NSNumber * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SADistance *)distance;
+ (NSDictionary *)distanceWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)value;
- (void)setValue:(NSNumber *)arg0;
- (NSString *)unit;
- (void)setUnit:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
