/* Runtime dump - SAClockAddCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) char alreadyExists;
@property (copy, nonatomic) NSURL * worldClockId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAClockAddCompleted *)addCompleted;
+ (NSDictionary *)addCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)alreadyExists;
- (void)setAlreadyExists:(char)arg0;
- (NSURL *)worldClockId;
- (void)setWorldClockId:(NSURL *)arg0;

@end
