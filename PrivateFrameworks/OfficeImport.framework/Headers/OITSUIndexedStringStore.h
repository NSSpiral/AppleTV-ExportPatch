/* Runtime dump - OITSUIndexedStringStore
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUIndexedStringStore : NSObject
{
    int _lock;
    NSMutableDictionary * _indexByString;
    NSMutableArray * _stringByIndex;
}

- (void)dealloc;
- (unsigned int)count;
- (OITSUIndexedStringStore *)init;
- (unsigned int)indexForString:(NSString *)arg0;
- (NSObject *)stringForIndex:(unsigned int)arg0;

@end
