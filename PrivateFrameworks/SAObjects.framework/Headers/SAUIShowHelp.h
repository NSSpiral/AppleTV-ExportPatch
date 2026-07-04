/* Runtime dump - SAUIShowHelp
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString * speakableText;
@property (copy, nonatomic) NSString * text;

+ (SAUIShowHelp *)showHelp;
+ (NSDictionary *)showHelpWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)speakableText;
- (void)setSpeakableText:(NSString *)arg0;

@end
