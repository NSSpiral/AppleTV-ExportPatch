/* Runtime dump - TSWPStorageAttributeRangeProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageAttributeRangeProvider : TSWPStorageRangeProvider
{
    struct TSWPAttributeEnumerator * _enumerator;
}

- (void)nextRange;
- (TSWPStorageAttributeRangeProvider *)initWithStorage:(TSWPStorage *)arg0 kind:(int)arg1;
- (void)dealloc;

@end
