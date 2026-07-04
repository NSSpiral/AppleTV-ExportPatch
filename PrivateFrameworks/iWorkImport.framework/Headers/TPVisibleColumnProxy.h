/* Runtime dump - TPVisibleColumnProxy
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn>
{
    unsigned int _pageIndex;
    TPPageController * _pageController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int startCharIndex;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) unsigned int startAnchoredCharIndex;
@property (readonly, nonatomic) struct _NSRange anchoredRange;
@property (readonly, nonatomic) unsigned int nextWidowPullsDownFromCharIndex;

- (struct _NSRange)anchoredRange;
- (void)trimToCharIndex:(unsigned int)arg0 inTarget:(NSObject *)arg1 removeFootnoteLayoutCount:(unsigned int)arg2 removeAutoNumberFootnoteCount:(unsigned int)arg3;
- (unsigned int)startCharIndex;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (TPVisibleColumnProxy *)initWithPageIndex:(unsigned int)arg0 pageController:(TPPageController *)arg1;
- (struct TSWPTargetHint *)p_targetFirstHint;
- (struct TSWPTargetHint *)p_targetLastHint;
- (void)dealloc;
- (struct _NSRange)range;

@end
