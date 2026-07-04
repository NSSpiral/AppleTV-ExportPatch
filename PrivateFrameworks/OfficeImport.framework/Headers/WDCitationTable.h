/* Runtime dump - WDCitationTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCitationTable : NSObject
{
    WDDocument * mDocument;
    NSMutableDictionary * mCitations;
}

- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (<UITextInput> *)document;
- (WDCitationTable *)initWithDocument:(NSObject *)arg0;
- (id)citationFor:(WXCitation *)arg0;
- (void)addCitation:(WXCitation *)arg0 forID:(NSObject *)arg1;
- (id)citationIDs;

@end
