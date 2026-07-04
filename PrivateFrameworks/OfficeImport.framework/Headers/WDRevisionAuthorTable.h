/* Runtime dump - WDRevisionAuthorTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRevisionAuthorTable : NSObject
{
    NSMutableArray * mAuthors;
    WDDocument * mDocument;
}

- (void)dealloc;
- (WDRevisionAuthorTable *)initWithDocument:(NSObject *)arg0;
- (NSMutableArray *)authors;
- (unsigned int)authorCount;
- (id)authorAt:(unsigned int)arg0;
- (unsigned int)authorAddLookup:(id)arg0;
- (void)addAuthor:(WDCitationAuthor *)arg0;

@end
