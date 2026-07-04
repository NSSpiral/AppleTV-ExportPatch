/* Runtime dump - SASetRestrictions
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetRestrictions : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * restrictions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASetRestrictions *)setRestrictions;
+ (NSDictionary *)setRestrictionsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)restrictions;
- (NSString *)encodedClassName;
- (void)setRestrictions:(NSArray *)arg0;

@end
