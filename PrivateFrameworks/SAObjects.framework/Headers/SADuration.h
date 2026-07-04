/* Runtime dump - SADuration
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADuration : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * unit;
@property (copy, nonatomic) NSString * units;
@property (retain, nonatomic) NSNumber * value;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSNumber *)duration;
+ (NSDictionary *)durationWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)value;
- (void)setValue:(NSNumber *)arg0;
- (NSString *)units;
- (void)setUnits:(NSString *)arg0;
- (NSString *)unit;
- (void)setUnit:(NSString *)arg0;
- (NSString *)encodedClassName;

@end
