/* Runtime dump - OADParagraph
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADParagraph : NSObject
{
    OADParagraphProperties * mProperties;
    NSMutableArray * mTextRuns;
    OADCharacterProperties * mParagraphEndCharacterProperties;
}

- (void)dealloc;
- (OADParagraph *)init;
- (char)isEmpty;
- (NSDictionary *)properties;
- (NSMutableString *)plainText;
- (unsigned int)textRunCount;
- (NSObject *)textRunAtIndex:(unsigned int)arg0;
- (NSDictionary *)paragraphEndCharacterProperties;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (id)addDateTimeField;
- (id)addGenericTextField;
- (void)removeAllTextRuns;
- (id)addFooterField;
- (void)setParagraphEndCharacterProperties:(NSDictionary *)arg0;
- (char)hasBulletCharacterProperties;
- (NSDictionary *)bulletCharacterProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(NSObject *)arg0;
- (void)applyProperties:(NSDictionary *)arg0;
- (unsigned int)characterCount;
- (NSObject *)findFirstTextRunOfClass:(Class)arg0;
- (id)addSlideNumberField;

@end
