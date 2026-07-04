/* Runtime dump - TSWPEndNoteConnection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPEndNoteConnection : NSObject
{
    NSArray * _defaultFormats;
    unsigned int _failedPluginLoadingAttempts;
    char _checkedEndNoteAvailability;
    struct ? _availability;
    NSString * _format;
}

@property (retain) NSString * format;

+ (void)applyEndNoteXml:(id)arg0 toCitationRecord:(NSObject *)arg1;
+ (TSWPEndNoteConnection *)sharedEndNoteConnection;
+ (TSWPEndNoteConnection *)currentPluginDownloadURL;

- (id)favoriteStyles;
- (NSObject *)p_getProxyObject;
- (char)isEndNoteAvailableInContext:(NSObject *)arg0;
- (id)outputStyles;
- (char)anyOpenLibraries;
- (char)anyOpenNonEmptyLibraries;
- (id)p_infoForCitation:(id)arg0 isAdjacent:(char)arg1 isFootnote:(char)arg2;
- (id)infoForCitation:(id)arg0;
- (char)getBibliographyString:(id *)arg0 andCitationStrings:(id *)arg1 forCitationInfos:(id)arg2 usingPosition:(unsigned int)arg3;
- (int)tagForFormat:(NSString *)arg0;
- (NSString *)formatForTag:(int)arg0;
- (char)launchEndNote:(char)arg0;
- (NSString *)recordsForSearchString:(NSString *)arg0 forContext:(NSObject *)arg1;
- (id)infoForCitation:(id)arg0 isFootnote:(char)arg1;
- (id)infosForAdjacentCitations:(id)arg0 isFootnote:(char)arg1;
- (char)getFormattedTextForCitation:(id)arg0 usingPosition:(unsigned int)arg1 outCitation:(id *)arg2 outBiblioEntry:(id *)arg3;
- (char)getBibliographyString:(id *)arg0 andCitationStrings:(id *)arg1 forCitationRecords:(NSArray *)arg2 usingPosition:(unsigned int)arg3;
- (struct ?)availability;
- (void)dealloc;
- (TSWPEndNoteConnection *)init;
- (void).cxx_construct;
- (VKGenericShieldDrawStyle *)defaultStyle;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;
- (NSArray *)availableFormats;

@end
