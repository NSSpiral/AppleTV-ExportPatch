/* Runtime dump - TIKeyboardState
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding>
{
    id _mask;
    id _autocorrectionListUIState;
    NSString * _clientIdentifier;
    NSString * _inputMode;
    NSString * _recipientIdentifier;
    TIKeyboardLayout * _keyLayout;
    int _shiftState;
    TIKeyboardLayoutState * _layoutState;
    TIDocumentState * _documentState;
    NSString * _inputForMarkedText;
    NSString * _searchStringForMarkedText;
    TIKeyboardCandidate * _currentCandidate;
    TITextInputTraits * _textInputTraits;
    NSString * _responseContext;
}

@property (copy, nonatomic) NSString * clientIdentifier;
@property (copy, nonatomic) NSString * inputMode;
@property (copy, nonatomic) NSString * recipientIdentifier;
@property (retain, nonatomic) TIKeyboardLayout * keyLayout;
@property (nonatomic) int shiftState;
@property (copy, nonatomic) TIKeyboardLayoutState * layoutState;
@property (retain, nonatomic) TIDocumentState * documentState;
@property (copy, nonatomic) NSString * inputForMarkedText;
@property (copy, nonatomic) NSString * searchStringForMarkedText;
@property (retain, nonatomic) TIKeyboardCandidate * currentCandidate;
@property (nonatomic) char userSelectedCurrentCandidate;
@property (nonatomic) char shouldSkipCandidateSelection;
@property (nonatomic) char suppressingCandidateSelection;
@property (nonatomic) char needsCandidateMetadata;
@property (nonatomic) char keyboardEventsLagging;
@property (nonatomic) char hardwareKeyboardMode;
@property (nonatomic) char splitKeyboardMode;
@property (nonatomic) char wordLearningEnabled;
@property (nonatomic) char autocorrectionEnabled;
@property (nonatomic) char shortcutConversionEnabled;
@property (nonatomic) char candidateSelectionPredictionEnabled;
@property (nonatomic) char autocapitalizationEnabled;
@property (retain, nonatomic) TITextInputTraits * textInputTraits;
@property (copy, nonatomic) NSString * responseContext;
@property (nonatomic) unsigned int autocapitalizationType;
@property (nonatomic) unsigned int keyboardType;
@property (nonatomic) char secureTextEntry;
@property (nonatomic) char autocorrectionListUIDisplayed;
@property (nonatomic) char autocorrectionListUIAutoDisplayMode;

+ (char)supportsSecureCoding;

- (NSString *)clientIdentifier;
- (void)dealloc;
- (TIKeyboardState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (TIKeyboardState *)copyWithZone:(struct _NSZone *)arg0;
- (TIKeyboardCandidate *)currentCandidate;
- (TITextInputTraits *)textInputTraits;
- (void)setSecureTextEntry:(char)arg0;
- (unsigned int)autocapitalizationType;
- (void)setAutocapitalizationType:(unsigned int)arg0;
- (unsigned int)keyboardType;
- (void)setKeyboardType:(unsigned int)arg0;
- (void)setClientIdentifier:(NSString *)arg0;
- (void)setHardwareKeyboardMode:(char)arg0;
- (void)setInputMode:(NSString *)arg0;
- (NSString *)inputMode;
- (TIKeyboardLayoutState *)layoutState;
- (void)setLayoutState:(TIKeyboardLayoutState *)arg0;
- (void)setCurrentCandidate:(TIKeyboardCandidate *)arg0;
- (void)setNeedsCandidateMetadata:(char)arg0;
- (void)setShortcutConversionEnabled:(char)arg0;
- (void)setCandidateSelectionPredictionEnabled:(char)arg0;
- (void)setTextInputTraits:(TITextInputTraits *)arg0;
- (void)setAutocorrectionListUIDisplayed:(char)arg0;
- (TIKeyboardLayout *)keyLayout;
- (void)setKeyLayout:(TIKeyboardLayout *)arg0;
- (void)setAutocorrectionEnabled:(char)arg0;
- (char)splitKeyboardMode;
- (void)setSplitKeyboardMode:(char)arg0;
- (void)setWordLearningEnabled:(char)arg0;
- (void)setRecipientIdentifier:(NSString *)arg0;
- (NSString *)responseContext;
- (void)setResponseContext:(NSString *)arg0;
- (NSString *)inputForMarkedText;
- (void)setShouldSkipCandidateSelection:(char)arg0;
- (void)setInputForMarkedText:(NSString *)arg0;
- (void)setSearchStringForMarkedText:(NSString *)arg0;
- (TIDocumentState *)documentState;
- (void)setDocumentState:(TIDocumentState *)arg0;
- (NSString *)searchStringForMarkedText;
- (void)setAutocapitalizationEnabled:(char)arg0;
- (int)shiftState;
- (void)setShiftState:(int)arg0;
- (char)shouldSkipCandidateSelection;
- (char)suppressingCandidateSelection;
- (void)setSuppressingCandidateSelection:(char)arg0;
- (void)setUserSelectedCurrentCandidate:(char)arg0;
- (char)userSelectedCurrentCandidate;
- (char)hardwareKeyboardMode;
- (void)setKeyboardEventsLagging:(char)arg0;
- (char)secureTextEntry;
- (void)_createTextInputTraitsIfNecessary;
- (NSString *)recipientIdentifier;
- (char)needsCandidateMetadata;
- (char)keyboardEventsLagging;
- (char)wordLearningEnabled;
- (char)autocorrectionEnabled;
- (char)shortcutConversionEnabled;
- (char)autocapitalizationEnabled;
- (char)autocorrectionListUIDisplayed;
- (char)autocorrectionListUIAutoDisplayMode;
- (char)candidateSelectionPredictionEnabled;
- (void)setAutocorrectionListUIAutoDisplayMode:(char)arg0;

@end
