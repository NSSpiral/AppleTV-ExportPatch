/* Runtime dump - TIKeyboardCandidateResultSet
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding>
{
    char _excludedExtensionCandidates;
    NSArray * _candidates;
    unsigned int _initialSelectedIndex;
    TIKeyboardCandidate * _defaultCandidate;
    NSArray * _sortMethods;
    NSDictionary * _sortMethodGroups;
    NSDictionary * _indexTitles;
    NSDictionary * _showExtensionCandidates;
    NSArray * _initiallyHiddenCandidates;
    unsigned int _generatedCandidateCount;
    unsigned int _batchCandidateLocation;
    unsigned int _selectedHiddenCandidateIndex;
    TIKeyboardIntermediateText * _uncommittedText;
    TIKeyboardCandidate * _acceptedCandidate;
}

@property (retain, nonatomic) NSArray * candidates;
@property (nonatomic) unsigned int initialSelectedIndex;
@property (copy, nonatomic) TIKeyboardCandidate * defaultCandidate;
@property (retain, nonatomic) NSArray * sortMethods;
@property (retain, nonatomic) NSDictionary * sortMethodGroups;
@property (retain, nonatomic) NSDictionary * indexTitles;
@property (retain, nonatomic) NSDictionary * showExtensionCandidates;
@property (retain, nonatomic) NSArray * initiallyHiddenCandidates;
@property (nonatomic) unsigned int selectedHiddenCandidateIndex;
@property (readonly, nonatomic) char hasCandidates;
@property (readonly, nonatomic) TIKeyboardCandidate * firstCandidate;
@property (readonly, nonatomic) char hasMetadata;
@property (nonatomic) char excludedExtensionCandidates;
@property (nonatomic) unsigned int generatedCandidateCount;
@property (nonatomic) unsigned int batchCandidateLocation;
@property (readonly, nonatomic) char isDummySet;
@property (retain, nonatomic) TIKeyboardIntermediateText * uncommittedText;
@property (retain, nonatomic) TIKeyboardCandidate * acceptedCandidate;

+ (char)supportsSecureCoding;
+ (TIKeyboardCandidateResultSet *)setWithCandidates:(NSArray *)arg0 initialSelectedIndex:(unsigned int)arg1 defaultCandidate:(TIKeyboardCandidate *)arg2 sortMethods:(NSArray *)arg3 sortMethodGroups:(NSDictionary *)arg4 indexTitles:(NSDictionary *)arg5 showExtensionCandidates:(NSDictionary *)arg6 initiallyHiddenCandidates:(NSArray *)arg7 selectedHiddenCandidateIndex:(unsigned int)arg8 excludedExtensionCandidates:(char)arg9;
+ (TIKeyboardCandidateResultSet *)setWithCandidates:(NSArray *)arg0;
+ (NSSet *)dummySet;

- (char)candidatesForSortIndexShowAlternativeText:(int)arg0;
- (NSObject *)candidateGroupsForSortIndex:(int)arg0;
- (void)dealloc;
- (TIKeyboardCandidateResultSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (TIKeyboardCandidateResultSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)candidates;
- (char)hasCandidates;
- (unsigned int)selectedHiddenCandidateIndex;
- (NSArray *)initiallyHiddenCandidates;
- (unsigned int)initialSelectedIndex;
- (NSDictionary *)indexTitles;
- (NSArray *)sortMethods;
- (void)setIndexTitles:(NSDictionary *)arg0;
- (NSDictionary *)sortMethodGroups;
- (char)isDummySet;
- (TIKeyboardCandidate *)acceptedCandidate;
- (unsigned int)generatedCandidateCount;
- (void)setAcceptedCandidate:(TIKeyboardCandidate *)arg0;
- (TIKeyboardCandidate *)defaultCandidate;
- (void)setCandidates:(NSArray *)arg0;
- (char)hasMetadata;
- (TIKeyboardIntermediateText *)uncommittedText;
- (unsigned int)batchCandidateLocation;
- (NSSet *)setByAppendingSet:(NSSet *)arg0;
- (unsigned int)positionInCandidateList:(NSArray *)arg0;
- (char)excludedExtensionCandidates;
- (NSDictionary *)showExtensionCandidates;
- (void)setUncommittedText:(TIKeyboardIntermediateText *)arg0;
- (void)setInitialSelectedIndex:(unsigned int)arg0;
- (void)setSortMethods:(NSArray *)arg0;
- (void)setShowExtensionCandidates:(NSDictionary *)arg0;
- (void)setInitiallyHiddenCandidates:(NSArray *)arg0;
- (void)setSelectedHiddenCandidateIndex:(unsigned int)arg0;
- (void)setSortMethodGroups:(NSDictionary *)arg0;
- (TIKeyboardCandidateResultSet *)initWithCandidates:(NSArray *)arg0 initialSelectedIndex:(unsigned int)arg1 defaultCandidate:(TIKeyboardCandidate *)arg2 sortMethods:(NSArray *)arg3 sortMethodGroups:(NSDictionary *)arg4 indexTitles:(NSDictionary *)arg5 showExtensionCandidates:(NSDictionary *)arg6 initiallyHiddenCandidates:(NSArray *)arg7 selectedHiddenCandidateIndex:(unsigned int)arg8 excludedExtensionCandidates:(char)arg9;
- (void)setGeneratedCandidateCount:(unsigned int)arg0;
- (void)setBatchCandidateLocation:(unsigned int)arg0;
- (TIKeyboardCandidate *)firstCandidate;
- (char)isSubsetOf:(id)arg0;
- (void)setDefaultCandidate:(TIKeyboardCandidate *)arg0;
- (void)setExcludedExtensionCandidates:(char)arg0;

@end
