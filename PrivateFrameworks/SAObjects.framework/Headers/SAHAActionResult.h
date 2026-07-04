/* Runtime dump - SAHAActionResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAActionResult : SADomainObject

@property (retain, nonatomic) SAHAEntity * entity;
@property (copy, nonatomic) NSString * outcome;
@property (copy, nonatomic) NSString * resultAttribute;
@property (retain, nonatomic) SAHAAttributeValue * resultValue;

+ (NSObject *)actionResult;
+ (NSDictionary *)actionResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (NSString *)outcome;
- (NSString *)resultAttribute;
- (SAHAAttributeValue *)resultValue;
- (void)setResultAttribute:(NSString *)arg0;
- (void)setEntity:(SAHAEntity *)arg0;
- (SAHAEntity *)entity;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (void)setOutcome:(NSString *)arg0;
- (void)setResultValue:(SAHAAttributeValue *)arg0;

@end
