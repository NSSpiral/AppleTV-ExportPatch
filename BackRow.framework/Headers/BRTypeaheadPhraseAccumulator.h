/* Runtime dump - BRTypeaheadPhraseAccumulator
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRTypeaheadPhraseAccumulator : NSObject
{
    double _lastAccumulatedCharacterTimestamp;
    NSString * _currentPhrase;
    NSObject<BRTypeaheadPhraseAccumulatorChangeHandler> * _phraseChangeHandler;
    NSTimer * _typeaheadTimer;
}

@property (retain, nonatomic) NSString * currentPhrase;
@property (retain, nonatomic) NSObject<BRTypeaheadPhraseAccumulatorChangeHandler> * phraseChangeHandler;
@property (retain, nonatomic) NSTimer * typeaheadTimer;

+ (BRTypeaheadPhraseAccumulator *)sharedInstance;

- (void)setPhraseChangeHandler:(NSObject<BRTypeaheadPhraseAccumulatorChangeHandler> *)arg0;
- (void)resetAndOptionallyNotifyHandler:(char)arg0;
- (char)decodeEvent:(NSObject *)arg0;
- (char)notifyChangeHandler;
- (char)processAsAccessibilityTypeahead;
- (NSString *)currentPhrase;
- (void)setCurrentPhrase:(NSString *)arg0;
- (void)_resetTypeaheadTimer;
- (void)_typeaheadTimerFired:(id)arg0;
- (NSObject<BRTypeaheadPhraseAccumulatorChangeHandler> *)phraseChangeHandler;
- (NSTimer *)typeaheadTimer;
- (void)setTypeaheadTimer:(NSTimer *)arg0;
- (BRTypeaheadPhraseAccumulator *)init;
- (NSString *)description;
- (void).cxx_destruct;

@end
