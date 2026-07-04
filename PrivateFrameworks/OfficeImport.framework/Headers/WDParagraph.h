/* Runtime dump - WDParagraph
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDParagraph : WDBlock
{
    WDParagraphProperties * mProperties;
    NSMutableArray * mRuns;
}

- (void)clearProperties;
- (void)dealloc;
- (char)isEmpty;
- (WDParagraph *)initWithText:(NSString *)arg0;
- (NSDictionary *)properties;
- (char)isTextFrame;
- (unsigned int)runCount;
- (id)runAt:(unsigned int)arg0;
- (int)blockType;
- (char)isContinuationOf:(id)arg0;
- (id)runs;
- (NSObject *)addAnnotation:(int)arg0;
- (id)addBookmark:(ATVBookmark *)arg0 type:(int)arg1;
- (void)removeLastCharacter:(unsigned short)arg0;
- (id)addCharacterRun;
- (void)addRun:(id)arg0;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addFootnote;
- (id)addEndnote;
- (NSObject *)addFieldMarker;
- (NSObject *)addAnnotation:(int)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)addHyperlinkFieldMarker;
- (WDParagraph *)initWithText:(NSString *)arg0 string:(NSString *)arg1;
- (void)insertRun:(id)arg0 atIndex:(unsigned int)arg1;
- (void)clearRuns;
- (id)addBookmark;
- (id)addDateTime:(WDDateTime *)arg0;
- (float)maxReflectionDistance;
- (NSObject *)newRunIterator;
- (NSObject *)runIterator;
- (void)removeRun:(id)arg0;
- (NSObject *)addHyperlinkFieldMarker:(int)arg0;
- (NSObject *)addFieldMarker:(int)arg0;

@end
