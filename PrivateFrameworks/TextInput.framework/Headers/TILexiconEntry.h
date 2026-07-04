/* Runtime dump - TILexiconEntry
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _userInput;
    NSString * _documentText;
}

@property (readonly, nonatomic) NSString * documentText;
@property (readonly, nonatomic) NSString * userInput;

+ (char)supportsSecureCoding;
+ (NSString *)entryWithDocumentText:(NSString *)arg0 userInput:(NSString *)arg1;

- (void)dealloc;
- (TILexiconEntry *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (TILexiconEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)userInput;
- (NSString *)documentText;

@end
