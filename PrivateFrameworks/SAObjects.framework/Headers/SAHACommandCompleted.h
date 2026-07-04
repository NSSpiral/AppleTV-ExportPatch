/* Runtime dump - SAHACommandCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * actionResults;
@property (copy, nonatomic) NSString * commandOutcome;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAHACommandCompleted *)commandCompleted;
+ (NSDictionary *)commandCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)shortDescription;
- (NSString *)groupIdentifier;
- (void)setCommandOutcome:(NSString *)arg0;
- (void)setActionResults:(NSArray *)arg0;
- (NSString *)commandOutcome;
- (NSArray *)actionResults;
- (NSString *)encodedClassName;

@end
