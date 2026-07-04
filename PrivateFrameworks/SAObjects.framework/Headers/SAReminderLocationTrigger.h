/* Runtime dump - SAReminderLocationTrigger
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (copy, nonatomic) NSURL * contactIdentifier;
@property (copy, nonatomic) NSString * internalGUID;
@property (retain, nonatomic) SALocation * location;
@property (copy, nonatomic) NSString * timing;

+ (SAReminderLocationTrigger *)locationTrigger;
+ (NSDictionary *)locationTriggerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SALocation *)location;
- (void)setLocation:(SALocation *)arg0;
- (NSString *)encodedClassName;
- (NSURL *)contactIdentifier;
- (void)setContactIdentifier:(NSURL *)arg0;
- (NSString *)internalGUID;
- (void)setInternalGUID:(NSString *)arg0;
- (void)setTiming:(NSString *)arg0;
- (NSString *)timing;

@end
