/* Runtime dump - WDCombinedIterator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCombinedIterator : WDIterator
{
    WDIterator * mParentIterator;
    WDIterator * mChildIterator;
}

@property (retain, nonatomic) WDIterator * childIterator;

- (GLKShaderBlockNode *)next;
- (void)dealloc;
- (void)incrementChildIterator;
- (WDIterator *)childIterator;
- (void)setChildIterator:(WDIterator *)arg0;
- (NSObject *)childIteratorFrom:(NSObject *)arg0;
- (NSObject *)newChildIteratorFrom:(NSObject *)arg0;
- (WDCombinedIterator *)initWithParentIterator:(NSObject *)arg0;
- (char)hasNext;

@end
