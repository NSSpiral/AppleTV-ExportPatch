/* Runtime dump - AFDictationOptions
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _applicationName;
    NSString * _applicationVersion;
    AFSiriContext * _context;
    NSString * _fieldLabel;
    NSString * _fieldIdentifier;
    NSString * _interactionIdentifier;
    int _keyboardType;
    NSString * _prefixText;
    NSString * _postfixText;
    NSString * _selectedText;
    int _returnKeyType;
    int _transcriptionMode;
    NSString * _languageCodeOverride;
}

@property (copy, nonatomic) NSString * applicationName;
@property (copy, nonatomic) NSString * applicationVersion;
@property (retain, nonatomic) AFSiriContext * context;
@property (copy, nonatomic) NSString * fieldLabel;
@property (copy, nonatomic) NSString * fieldIdentifier;
@property (copy, nonatomic) NSString * interactionIdentifier;
@property (nonatomic) int keyboardType;
@property (copy, nonatomic) NSString * prefixText;
@property (copy, nonatomic) NSString * postfixText;
@property (copy, nonatomic) NSString * selectedText;
@property (nonatomic) int returnKeyType;
@property (nonatomic) int transcriptionMode;
@property (copy, nonatomic) NSString * languageCodeOverride;

+ (char)supportsSecureCoding;

- (AFDictationOptions *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AFDictationOptions *)copyWithZone:(struct _NSZone *)arg0;
- (AFSiriContext *)context;
- (void)setContext:(AFSiriContext *)arg0;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg0;
- (int)returnKeyType;
- (void)setReturnKeyType:(int)arg0;
- (NSString *)selectedText;
- (void).cxx_destruct;
- (void)setApplicationName:(NSString *)arg0;
- (void)setApplicationVersion:(NSString *)arg0;
- (NSString *)prefixText;
- (void)setFieldLabel:(NSString *)arg0;
- (void)setFieldIdentifier:(NSString *)arg0;
- (void)setPrefixText:(NSString *)arg0;
- (void)setPostfixText:(NSString *)arg0;
- (void)setSelectedText:(NSString *)arg0;
- (NSString *)postfixText;
- (NSString *)fieldIdentifier;
- (NSString *)interactionIdentifier;
- (void)setInteractionIdentifier:(NSString *)arg0;
- (NSString *)languageCodeOverride;
- (void)setLanguageCodeOverride:(NSString *)arg0;
- (int)transcriptionMode;
- (void)setTranscriptionMode:(int)arg0;
- (NSString *)dictationOptionsWithoutTextContext;
- (NSString *)applicationVersion;
- (NSString *)applicationName;
- (NSString *)fieldLabel;

@end
