/* Runtime dump - UIWebPDFSearchOperation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFSearchOperation : NSOperation
{
    NSMutableArray * _results;
    unsigned int _pageIndex;
    unsigned int _numberOfResultsToSkip;
    unsigned int _totalResultsCount;
    unsigned int _currentPageResultCount;
    char _complete;
    unsigned int startingPageIndex;
    UIPDFDocument * documentToSearch;
    NSObject<UIWebPDFSearchOperationDelegate> * searchDelegate;
    float documentScale;
    NSString * searchString;
    unsigned int resultLimit;
}

@property NSObject<UIWebPDFSearchOperationDelegate> * searchDelegate;
@property (readonly, nonatomic) unsigned int currentPageResultCount;
@property (retain) UIPDFDocument * documentToSearch;
@property (readonly, nonatomic) unsigned int currentPageIndex;
@property (nonatomic) unsigned int startingPageIndex;
@property (nonatomic) unsigned int numberOfResultsToSkip;
@property (nonatomic) unsigned int resultLimit;
@property (retain, nonatomic) NSString * searchString;
@property (nonatomic) float documentScale;

- (void)cancel;
- (void)dealloc;
- (UIWebPDFSearchOperation *)init;
- (NSString *)searchString;
- (void)main;
- (float)documentScale;
- (void)setDocumentToSearch:(UIPDFDocument *)arg0;
- (void)setDocumentScale:(float)arg0;
- (void)setSearchDelegate:(NSObject<UIWebPDFSearchOperationDelegate> *)arg0;
- (unsigned int)currentPageIndex;
- (void)setResultLimit:(unsigned int)arg0;
- (void)setSearchString:(NSString *)arg0;
- (unsigned int)resultLimit;
- (char)_hitSearchLimit;
- (struct __CTFont *)_fontWithPDFFont:(struct CGPDFFont *)arg0 size:(float)arg1;
- (UIPDFDocument *)documentToSearch;
- (NSString *)sanitizedAttributedStringForAttributedString:(NSString *)arg0;
- (void)_search;
- (void)_notifyDelegateOfStatus;
- (unsigned int)currentPageResultCount;
- (unsigned int)startingPageIndex;
- (void)setStartingPageIndex:(unsigned int)arg0;
- (NSObject<UIWebPDFSearchOperationDelegate> *)searchDelegate;
- (unsigned int)numberOfResultsToSkip;
- (void)setNumberOfResultsToSkip:(unsigned int)arg0;

@end
