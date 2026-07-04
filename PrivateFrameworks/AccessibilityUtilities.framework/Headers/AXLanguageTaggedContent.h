/* Runtime dump - AXLanguageTaggedContent
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTaggedContent : NSObject
{
    NSArray * _currentDialects;
    struct _NSRange _currentChunk;
    char _predictedByTagger;
    char _tagged;
    char _splitContentOnNewlines;
    NSMutableArray * _tags;
    NSLinguisticTagger * _linguisticTagger;
    NSMutableOrderedSet * _unpredictedAmbiguousLangMaps;
    NSString * _userPreferredLangID;
}

@property (readonly, nonatomic) NSString * content;
@property (nonatomic) char tagged;
@property (retain, nonatomic) NSMutableArray * tags;
@property (retain, nonatomic) NSMutableOrderedSet * unpredictedAmbiguousLangMaps;
@property (nonatomic) char splitContentOnNewlines;
@property (copy, nonatomic) NSString * userPreferredLangID;
@property (retain, nonatomic) NSLinguisticTagger * linguisticTagger;
@property (retain, nonatomic) NSArray * currentDialects;

- (void)dealloc;
- (NSString *)description;
- (NSMutableArray *)tags;
- (NSString *)content;
- (void)tagContent;
- (id)primaryUnambiguousDialect;
- (id)primaryAmbiguousDialect;
- (void)setUserPreferredLangID:(NSString *)arg0;
- (NSString *)userPreferredLangID;
- (id)ambiguousLangMaps;
- (id)unambiguousLangMaps;
- (void)setLinguisticTagger:(NSLinguisticTagger *)arg0;
- (void)setUnpredictedAmbiguousLangMaps:(NSMutableOrderedSet *)arg0;
- (NSLinguisticTagger *)linguisticTagger;
- (void)setTagged:(char)arg0;
- (void)setCurrentDialects:(NSArray *)arg0;
- (void)_manuallyProcessContentWithRange:(struct _NSRange)arg0;
- (void)_addTag;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (char)splitContentOnNewlines;
- (NSArray *)currentDialects;
- (void)enumerateUnpredictedTags:(id)arg0;
- (void)enumeratePredictedTags:(id)arg0;
- (char)langMapIsSignificant:(id)arg0;
- (id)significantAmbiguousLangMaps;
- (char)hasOnlyWesternLangMaps;
- (char)hasOnlyNonWesternLangMaps;
- (void)updateTagsForLocalePrefChange;
- (NSMutableOrderedSet *)unpredictedAmbiguousLangMaps;
- (void)setSplitContentOnNewlines:(char)arg0;
- (void)setTags:(NSMutableArray *)arg0;
- (AXLanguageTaggedContent *)initWithContent:(NSString *)arg0;
- (char)isTagged;

@end
