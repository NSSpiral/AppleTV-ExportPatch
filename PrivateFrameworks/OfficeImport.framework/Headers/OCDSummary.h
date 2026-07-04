/* Runtime dump - OCDSummary
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDSummary : NSObject
{
    NSString * mTitle;
    NSString * mAuthor;
    NSString * mKeywords;
    NSString * mComments;
    NSString * mHyperlinkBase;
}

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSArray *)comments;
- (void)setComments:(id)arg0;
- (void)setAuthor:(WDCitationAuthor *)arg0;
- (void)setHyperlinkBase:(id)arg0;
- (NSString *)author;
- (id)hyperlinkBase;
- (void)setKeywords:(id)arg0;
- (NSString *)keywords;

@end
