/* Runtime dump - SAABPersonSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * results;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAABPersonSearchCompleted *)personSearchCompleted;
+ (NSDictionary *)personSearchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSArray *)personSearchCompletedWithResults:(NSArray *)arg0;

- (NSString *)groupIdentifier;
- (NSArray *)results;
- (void)setResults:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (SAABPersonSearchCompleted *)initWithResults:(NSArray *)arg0;

@end
