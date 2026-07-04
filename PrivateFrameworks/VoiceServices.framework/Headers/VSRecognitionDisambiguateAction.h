/* Runtime dump - VSRecognitionDisambiguateAction
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction
{
    NSString * _repeatedSpokenFeedbackString;
    NSString * _sequenceTag;
    NSMutableDictionary * _knownValues;
    NSMutableDictionary * _knownPhoneticValues;
    NSMutableDictionary * _ambiguousValues;
    NSMutableDictionary * _ambiguousPhoneticValues;
    void * _context;
}

- (void)dealloc;
- (void)setKeywords:(id)arg0;
- (int)completionType;
- (char)_keywordIndexChanged;
- (struct __VSRecognitionDisambiguationContext *)_disambiguationContext;
- (void)setRepeatedSpokenFeedbackString:(NSString *)arg0;
- (NSString *)repeatedSpokenFeedbackString;
- (NSString *)sequenceTag;
- (void)setSequenceTag:(NSString *)arg0;
- (NSString *)knownValueForClassIdentifier:(NSString *)arg0;
- (void)setKnownValue:(id)arg0 phoneticValue:(id)arg1 forClassIdentifier:(NSString *)arg2;
- (NSString *)knownValuesForClassIdentifier:(NSString *)arg0;
- (void)setKnownValues:(NSMutableDictionary *)arg0 phoneticValues:(NSArray *)arg1 forClassIdentifier:(NSString *)arg2;
- (NSString *)ambiguousValuesForClassIdentifier:(NSString *)arg0;
- (void)setAmbiguousValues:(NSMutableDictionary *)arg0 phoneticValues:(NSArray *)arg1 forClassIdentifier:(NSString *)arg2;
- (NSString *)_keywords;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(struct ? *)arg0 info:(void *)arg1;
- (NSArray *)_actionForEmptyResults;

@end
