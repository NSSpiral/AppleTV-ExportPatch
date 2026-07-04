/* Runtime dump - SATimerSet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerSet : SADomainCommand <SATimerTimerAction>

@property (retain, nonatomic) SATimerObject * timer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSSet *)set;
+ (NSDictionary *)setWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTimer:(SATimerObject *)arg0;
- (SATimerObject *)timer;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
