/* Runtime dump - WDTestIterator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTestIterator : WDIterator
{
    WDIterator * mIterator;
    id mNext;
}

- (GLKShaderBlockNode *)next;
- (void)dealloc;
- (WDTestIterator *)initWithIterator:(void *)arg0;
- (char)test:(NSString *)arg0;
- (char)hasNext;

@end
