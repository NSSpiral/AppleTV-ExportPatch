/* Runtime dump - SAUpdateRestrictions
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * restrictionsToAdd;
@property (copy, nonatomic) NSArray * restrictionsToRemove;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAUpdateRestrictions *)updateRestrictions;
+ (NSDictionary *)updateRestrictionsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)restrictionsToAdd;
- (void)setRestrictionsToAdd:(NSArray *)arg0;
- (NSArray *)restrictionsToRemove;
- (void)setRestrictionsToRemove:(NSArray *)arg0;

@end
