/* Runtime dump - OADTextBody
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextBody : NSObject
{
    OADTextBodyProperties * mProperties;
    NSMutableArray * mParagraphs;
    OADTextListStyle * mTextListStyle;
}

- (void)dealloc;
- (OADTextBody *)init;
- (char)isEmpty;
- (void)setProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (NSObject *)paragraphAtIndex:(unsigned int)arg0;
- (NSMutableString *)plainText;
- (unsigned int)paragraphCount;
- (id)addParagraph;
- (NSObject *)overrideTextListStyle;
- (NSObject *)textListStyle;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (unsigned int)nonEmptyParagraphCount;
- (void)removeAllParagraphs;
- (void)applyTextListStyle:(NSObject *)arg0;
- (void)removeTrailingNewlines;
- (void)removeLeadingNewlines;
- (void)flattenProperties;
- (void)propagateActualTextStyleToTextListStyle;
- (void)addParagraphsFromTextBody:(NSObject *)arg0;
- (NSObject *)findFirstTextRunOfClass:(Class)arg0;

@end
