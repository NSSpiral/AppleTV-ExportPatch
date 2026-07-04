/* Runtime dump - SANoteUpdate
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteUpdate : SADomainCommand

@property (copy, nonatomic) NSString * contentsToAppend;
@property (copy, nonatomic) NSURL * identifier;

+ (NSDate *)update;
+ (NSDictionary *)updateWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSURL *)identifier;
- (void)setIdentifier:(NSURL *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)contentsToAppend;
- (void)setContentsToAppend:(NSString *)arg0;

@end
