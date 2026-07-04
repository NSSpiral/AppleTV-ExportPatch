/* Runtime dump - TSUIndexedStringStore
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIndexedStringStore : NSObject
{
    int _lock;
    NSMutableDictionary * _indexByString;
    NSMutableArray * _stringByIndex;
}

- (void)dealloc;
- (unsigned int)count;
- (TSUIndexedStringStore *)init;
- (unsigned int)indexForString:(NSString *)arg0;
- (NSObject *)stringForIndex:(unsigned int)arg0;

@end
