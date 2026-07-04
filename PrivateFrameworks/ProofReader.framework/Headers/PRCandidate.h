/* Runtime dump - PRCandidate
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidate : NSObject
{
    NSString * _string;
    double _errorScore;
    double _lmScore;
    char _blacklisted;
}

+ (double)errorScoreForType:(unsigned int)arg0;
+ (NSString *)candidateWithString:(NSString *)arg0 errorType:(unsigned int)arg1;
+ (NSObject *)candidateWithBuffer:(char *)arg0 encoding:(unsigned long)arg1 transform:(unsigned int)arg2 errorType:(unsigned int)arg3;
+ (NSString *)candidateWithString:(NSString *)arg0 errorScore:(double)arg1;
+ (NSObject *)candidateWithBuffer:(char *)arg0 encoding:(unsigned long)arg1 errorType:(unsigned int)arg2;

- (void)dealloc;
- (NSString *)description;
- (NSString *)string;
- (PRCandidate *)initWithString:(NSString *)arg0 errorScore:(double)arg1;
- (double)errorScore;
- (double)languageModelScore;
- (char)isBlacklisted;
- (void)setErrorScore:(double)arg0;
- (void)setLanguageModelScore:(double)arg0;
- (void)setBlacklisted:(char)arg0;
- (double)score;

@end
