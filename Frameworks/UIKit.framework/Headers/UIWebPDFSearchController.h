/* Runtime dump - UIWebPDFSearchController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate>
{
    unsigned int _resultIndexWhenLimitHit;
    char _notifiedThatSearchBegin;
    unsigned int _pageIndexWhenLimitHit;
    NSOperationQueue * _searchQueue;
    NSMutableArray * _results;
    NSString * _searchString;
    UIPDFDocument * _documentToSearch;
    NSObject<UIWebPDFSearchControllerDelegate> * searchDelegate;
    unsigned int startingPageIndex;
    float documentScale;
    unsigned int resultLimit;
}

@property (nonatomic) NSObject<UIWebPDFSearchControllerDelegate> * searchDelegate;
@property (retain, nonatomic) UIPDFDocument * documentToSearch;
@property (nonatomic) float documentScale;
@property (nonatomic) unsigned int startingPageIndex;
@property (nonatomic) unsigned int resultLimit;
@property (readonly, nonatomic) char searching;
@property (readonly, nonatomic) char paused;
@property (retain, nonatomic) NSArray * results;
@property (retain, nonatomic) NSString * searchString;

- (void)cancel;
- (void)dealloc;
- (UIWebPDFSearchController *)init;
- (NSArray *)results;
- (NSString *)searchString;
- (void)resume;
- (float)documentScale;
- (void)setDocumentToSearch:(UIPDFDocument *)arg0;
- (void)setDocumentScale:(float)arg0;
- (void)setSearchDelegate:(NSObject<UIWebPDFSearchControllerDelegate> *)arg0;
- (void)setResultLimit:(unsigned int)arg0;
- (void)setSearchString:(NSString *)arg0;
- (unsigned int)resultLimit;
- (void)searchWasCancelled:(id)arg0;
- (void)search:(NSString *)arg0 hasPartialResults:(NSArray *)arg1;
- (void)searchDidFinish:(id)arg0;
- (void)searchLimitHit:(id)arg0;
- (UIPDFDocument *)documentToSearch;
- (void)searchDidBegin:(id)arg0;
- (unsigned int)startingPageIndex;
- (void)setStartingPageIndex:(unsigned int)arg0;
- (NSObject<UIWebPDFSearchControllerDelegate> *)searchDelegate;
- (char)paused;
- (unsigned int)_actualStartingPageIndex;
- (void)_clearSearchQueue;
- (void)search:(NSString *)arg0;
- (void)searchDidTimeOut:(id)arg0;
- (char)searching;
- (void)pause;
- (void)setResults:(NSArray *)arg0;

@end
