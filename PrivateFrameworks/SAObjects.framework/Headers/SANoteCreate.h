/* Runtime dump - SANoteCreate
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteCreate : SADomainCommand

@property (copy, nonatomic) NSString * contents;

+ (SANoteCreate *)create;
+ (NSDictionary *)createWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)contents;
- (void)setContents:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
