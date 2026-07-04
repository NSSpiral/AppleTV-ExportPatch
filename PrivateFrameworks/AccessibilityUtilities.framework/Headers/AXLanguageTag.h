/* Runtime dump - AXLanguageTag
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTag : NSObject <NSCopying>
{
    char _wasPredicted;
    NSString * _content;
    NSMutableOrderedSet * _unambiguousDialects;
    NSMutableOrderedSet * _ambiguousDialects;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (nonatomic) NSString * content;
@property (retain, nonatomic) NSMutableOrderedSet * unambiguousDialects;
@property (retain, nonatomic) NSMutableOrderedSet * ambiguousDialects;
@property (readonly, nonatomic) AXDialectMap * preferredAmbiguousDialect;
@property (readonly, nonatomic) AXDialectMap * preferredUnambiguousDialect;
@property (readonly, nonatomic) NSString * contentSubstring;
@property (readonly, nonatomic) AXDialectMap * dialect;
@property (nonatomic) char wasPredicted;

+ (AXLanguageTag *)tagWithDialects:(NSArray *)arg0 range:(struct _NSRange)arg1 content:(NSString *)arg2 predictedByTagger:(char)arg3;

- (void)dealloc;
- (NSString *)description;
- (AXLanguageTag *)copyWithZone:(struct _NSZone *)arg0;
- (struct _NSRange)range;
- (NSString *)content;
- (void)setRange:(struct _NSRange)arg0;
- (AXDialectMap *)dialect;
- (char)wasPredicted;
- (char)canBeSpokenByLanguage:(NSString *)arg0;
- (NSString *)contentSubstring;
- (void)setWasPredicted:(char)arg0;
- (void)addAmbiguousDialect:(id)arg0;
- (void)addUnambiguousDialect:(id)arg0;
- (NSMutableOrderedSet *)ambiguousDialects;
- (NSMutableOrderedSet *)unambiguousDialects;
- (AXDialectMap *)preferredUnambiguousDialect;
- (AXDialectMap *)preferredAmbiguousDialect;
- (void)setUnambiguousDialects:(NSMutableOrderedSet *)arg0;
- (void)setAmbiguousDialects:(NSMutableOrderedSet *)arg0;
- (char)canBeSpokenByDialect:(id)arg0;
- (char)hasAmbigiousDialects;
- (void)addAmbiguousDialects:(id)arg0;
- (void)setContent:(NSString *)arg0;

@end
