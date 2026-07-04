/* Runtime dump - SATimerCancelCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATimerCancelCompleted : SABaseCommand <SAServerBoundCommand>

@property (retain, nonatomic) SATimerObject * timer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SATimerCancelCompleted *)cancelCompleted;
+ (NSDictionary *)cancelCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTimer:(SATimerObject *)arg0;
- (SATimerObject *)timer;
- (NSString *)encodedClassName;

@end
