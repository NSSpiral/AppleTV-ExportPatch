/* Runtime dump - SANoteCreateCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteCreateCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSURL * identifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SANoteCreateCompleted *)createCompleted;
+ (NSDictionary *)createCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (NSString *)encodedClassName;

@end
