/* Runtime dump - WDArrayIterator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDArrayIterator : WDIterator
{
    NSArray * mArray;
    unsigned int mNextIndex;
}

- (GLKShaderBlockNode *)next;
- (WDArrayIterator *)initWithArray:(NSArray *)arg0;
- (char)hasNext;

@end
