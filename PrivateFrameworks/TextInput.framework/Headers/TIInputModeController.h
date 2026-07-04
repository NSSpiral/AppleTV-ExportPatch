/* Runtime dump - TIInputModeController
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIInputModeController : NSObject
{
    NSArray * _supportedInputModeIdentifiers;
    NSArray * _supportedInputModeLanguageAndRegions;
    NSString * currentLocale;
    NSString * currentLanguage;
    NSArray * enabledInputModes;
    NSArray * defaultInputModes;
}

@property (readonly) NSArray * supportedInputModeIdentifiers;
@property (readonly) NSArray * supportedInputModeLanguageAndRegions;
@property (readonly) NSArray * enabledInputModeIdentifiers;
@property (copy, nonatomic) NSString * currentLocale;
@property (copy, nonatomic) NSString * currentLanguage;
@property (copy, nonatomic) NSArray * enabledInputModes;
@property (copy, nonatomic) NSArray * defaultInputModes;

+ (TIInputModeController *)sharedInputModeController;
+ (NSLocale *)_inputModesForLocale:(NSObject *)arg0 language:(NSString *)arg1 modeFetcher:(id)arg2;

- (void)dealloc;
- (NSString *)currentLocale;
- (void)setEnabledInputModes:(NSArray *)arg0;
- (void)setDefaultInputModes:(NSArray *)arg0;
- (NSArray *)enabledInputModeIdentifiers;
- (NSArray *)enabledInputModes;
- (NSLocale *)defaultEnabledInputModesForCurrentLocale;
- (NSArray *)defaultInputModes;
- (NSArray *)supportedInputModeIdentifiers;
- (NSArray *)supportedInputModeLanguageAndRegions;
- (void)setCurrentLocale:(NSString *)arg0;
- (void)setCurrentLanguage:(NSString *)arg0;
- (NSString *)currentLanguage;

@end
