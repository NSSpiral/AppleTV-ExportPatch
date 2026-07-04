/* Runtime dump - SAABMultiPersonSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABMultiPersonSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * personSearchCompleteds;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAABMultiPersonSearchCompleted *)multiPersonSearchCompleted;
+ (NSDictionary *)multiPersonSearchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)personSearchCompleteds;
- (void)setPersonSearchCompleteds:(NSArray *)arg0;

@end
