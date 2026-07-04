/* Runtime dump - SAHAAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAAction : SADomainObject

@property (copy, nonatomic) NSString * actionType;
@property (copy, nonatomic) NSString * attribute;
@property (retain, nonatomic) SAHAAttributeValue * value;

+ (NSURL *)action;
+ (NSDictionary *)actionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)attribute;
- (NSString *)groupIdentifier;
- (SAHAAttributeValue *)value;
- (void)setValue:(SAHAAttributeValue *)arg0;
- (void)setActionType:(NSString *)arg0;
- (NSString *)actionType;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (void)setAttribute:(NSString *)arg0;

@end
