/* Runtime dump - SANoteSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * notes;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)notes;
- (void)setNotes:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;

@end
