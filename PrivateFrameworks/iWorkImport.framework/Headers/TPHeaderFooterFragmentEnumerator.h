/* Runtime dump - TPHeaderFooterFragmentEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator
{
    TPPageMaster * _pageMaster;
    int _fragmentIndex;
    int _headerFooterType;
}

@property (retain, nonatomic) TPPageMaster * pageMaster;
@property (nonatomic) int fragmentIndex;
@property (nonatomic) int headerFooterType;

- (void)p_incrementFragmentIndex;
- (void)p_incrementHeaderFooterType;
- (int)headerFooterType;
- (TPPageMaster *)pageMaster;
- (void)setFragmentIndex:(int)arg0;
- (void)setHeaderFooterType:(int)arg0;
- (TPHeaderFooterFragmentEnumerator *)initWithPageMaster:(TPPageMaster *)arg0;
- (void)setPageMaster:(TPPageMaster *)arg0;
- (void)dealloc;
- (NSObject *)nextObject;
- (int)fragmentIndex;

@end
