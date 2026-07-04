/* Runtime dump - SCROBrailleTranslationManager
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleTranslationManager : NSObject
{
    NSLock * _contentLock;
    <SCROBrailleTranslatorProtocol> * _translator;
    NSBundle * _translatorBundle;
    char _tableSupportsContractedBraille;
    char _tableSupportsEightDotBraille;
    <SCROBrailleTranslatorProtocol> * _auxTranslator;
    NSBundle * _auxTranslatorBundle;
    char _auxTableSupportsContractedBraille;
    char _auxTableSupportsEightDotBraille;
    <SCROBrailleTranslatorProtocol> * _nemethTranslator;
    char _alwaysUsesNemethCodeForTechnicalText;
}

@property (readonly, nonatomic) char primaryTableSupportsContractedBraille;
@property (readonly, nonatomic) char primaryTableSupportsEightDotBraille;
@property (readonly, nonatomic) char auxiliaryTableSupportsContractedBraille;
@property (readonly, nonatomic) char auxiliaryTableSupportsEightDotBraille;
@property (nonatomic) char alwaysUsesNemethCodeForTechnicalText;

+ (void)initialize;
+ (SCROBrailleTranslationManager *)allocWithZone:(struct _NSZone *)arg0;
+ (SCROBrailleTranslationManager *)sharedManager;

- (SCROBrailleTranslationManager *)retain;
- (void)release;
- (void)dealloc;
- (SCROBrailleTranslationManager *)init;
- (SCROBrailleTranslationManager *)autorelease;
- (unsigned int)retainCount;
- (SCROBrailleTranslationManager *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAuxiliaryTranslationTableWithTableIdentifier:(NSString *)arg0;
- (NSString *)auxiliaryTableIdentifier;
- (NSString *)printBrailleForTechnicalText:(NSString *)arg0 primaryTable:(char)arg1 locations:(id *)arg2;
- (NSString *)printBrailleForText:(NSString *)arg0 primaryTable:(char)arg1 contracted:(char)arg2 eightDot:(char)arg3 locations:(id *)arg4;
- (NSString *)textForPrintBraille:(NSString *)arg0 contracted:(char)arg1 eightDot:(char)arg2 locations:(id *)arg3;
- (char)primaryTableSupportsEightDotBraille;
- (char)primaryTableSupportsContractedBraille;
- (NSString *)primaryTableIdentifier;
- (void)setPrimaryTranslationTableWithTableIdentifier:(NSString *)arg0;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(char)arg0;
- (char)alwaysUsesNemethCodeForTechnicalText;
- (NSString *)_loadTableIdentifier:(NSString *)arg0 bundle:(id *)arg1 existingBundle:(NSObject *)arg2 existingTranslator:(id)arg3;
- (NSString *)_printBrailleForText:(NSString *)arg0 primaryTable:(char)arg1 contracted:(char)arg2 eightDot:(char)arg3 locations:(id *)arg4 isTechnical:(char)arg5;
- (NSString *)printBrailleForText:(NSString *)arg0 contracted:(char)arg1 eightDot:(char)arg2 locations:(id *)arg3;
- (id)textForPrintBraille:(id)arg0 primaryTable:(char)arg1 contracted:(char)arg2 eightDot:(char)arg3 locations:(id *)arg4;
- (char)auxiliaryTableSupportsContractedBraille;
- (char)auxiliaryTableSupportsEightDotBraille;

@end
