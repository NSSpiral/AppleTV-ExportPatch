/* Runtime dump - PRCandidateList
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidateList : NSObject
{
    NSMutableArray * _candidates;
    unsigned int _maxCount;
}

- (char)isFull;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (NSMutableArray *)candidates;
- (PRCandidateList *)initWithMaxCount:(unsigned int)arg0;
- (unsigned int)maxCount;
- (void)addCandidateWithString:(NSString *)arg0 errorType:(unsigned int)arg1;
- (void)addCandidateWithBuffer:(char *)arg0 encoding:(unsigned long)arg1 errorType:(unsigned int)arg2;
- (void)addCandidateWithBuffer:(char *)arg0 encoding:(unsigned long)arg1 transform:(unsigned int)arg2 errorType:(unsigned int)arg3;
- (NSArray *)candidateStrings;
- (void)addCandidate:(NSDate *)arg0;

@end
