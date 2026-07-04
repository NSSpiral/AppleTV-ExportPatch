/* Runtime dump - TSWPStorageChildEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageChildEnumerator : NSEnumerator
{
    TSWPStorage * _storage;
    unsigned int _index;
    NSArray * _charOffsetArray;
}

- (TSWPStorageChildEnumerator *)initWithStorage:(TSWPStorage *)arg0;
- (void)dealloc;
- (NSObject *)nextObject;

@end
