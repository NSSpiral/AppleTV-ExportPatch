/* Runtime dump - SANoteDelete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL * identifier;

+ (SANoteDelete *)delete;
+ (NSDictionary *)deleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
