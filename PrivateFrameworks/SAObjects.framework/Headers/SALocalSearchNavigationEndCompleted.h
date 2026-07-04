/* Runtime dump - SALocalSearchNavigationEndCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchNavigationEndCompleted : SABaseCommand <SAServerBoundCommand>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SALocalSearchNavigationEndCompleted *)navigationEndCompleted;
+ (NSDictionary *)navigationEndCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end
