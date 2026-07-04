/* Runtime dump - TPPageLayoutState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutState : NSObject
{
    TPPageIndexPath * _pageIndexPath;
    unsigned int _documentPageIndex;
    TSWPStorage * _bodyStorage;
    void * _bodyLayoutState;
    unsigned int _bodyCharIndex;
    unsigned int _footnoteIndex;
    char _doingLayout;
    char _onLastSection;
    unsigned int _lastLaidOutSectionIndex;
}

@property (readonly, nonatomic) TPPageIndexPath * pageIndexPath;
@property (readonly, nonatomic) unsigned int sectionIndex;
@property (readonly, nonatomic) unsigned int pageIndex;
@property (readonly, nonatomic) unsigned int documentPageIndex;
@property (readonly, nonatomic) unsigned int lastLaidOutDocumentPageIndex;
@property (readonly, nonatomic) unsigned int lastLaidOutSectionIndex;
@property (nonatomic) void * bodyLayoutState;
@property (nonatomic) unsigned int bodyCharIndex;
@property (nonatomic) unsigned int footnoteIndex;
@property (nonatomic) char doingLayout;
@property (readonly, nonatomic) TPSection * section;
@property (readonly, nonatomic) struct _NSRange sectionCharRange;
@property (readonly, nonatomic) char onLastSection;
@property (readonly, nonatomic) char isLayoutComplete;

- (char)isLayoutComplete;
- (TPPageLayoutState *)initWithBodyStorage:(TSWPStorage *)arg0;
- (unsigned int)documentPageIndex;
- (char)isLayoutCompleteThroughDocumentPageIndex:(unsigned int)arg0;
- (char)isLayoutCompleteUpToDocumentPageIndex:(unsigned int)arg0;
- (char)doingLayout;
- (void)setBodyCharIndex:(unsigned int)arg0;
- (void)setFootnoteIndex:(unsigned int)arg0;
- (void)setDocumentPageIndex:(unsigned int)arg0;
- (unsigned int)lastLaidOutDocumentPageIndex;
- (void)restartLayoutFromPageIndexPath:(NSIndexPath *)arg0 documentPageIndex:(unsigned int)arg1;
- (void *)bodyLayoutState;
- (void)setBodyLayoutState:(void *)arg0;
- (void)backUpPageIndex;
- (unsigned int)bodyCharIndex;
- (void)setDoingLayout:(char)arg0;
- (void)advancePageIndex;
- (TPPageIndexPath *)pageIndexPath;
- (unsigned int)footnoteIndex;
- (struct _NSRange)sectionCharRange;
- (char)onLastSection;
- (void)advanceSectionIndex;
- (unsigned int)lastLaidOutSectionIndex;
- (void)restartLayoutFromFirstPage;
- (void)dealloc;
- (TPPageLayoutState *)init;
- (TPSection *)section;
- (unsigned int)pageIndex;
- (void)setPageIndex:(unsigned int)arg0;
- (unsigned int)sectionIndex;
- (void)setSectionIndex:(unsigned int)arg0;

@end
