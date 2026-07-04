/* Runtime dump - CoreThemeConstantEnumerator
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CoreThemeConstantEnumerator : NSObject
{
    void * _globalListPointer;
    int _listIndex;
    int _indexOfLastEntry;
    char _isPastLastEntry;
}

+ (NSString *)enumeratorForGlobalListAtAddress:(void *)arg0;

- (CoreThemeConstantEnumerator *)initWithGlobalListAtAddress:(void *)arg0;
- (NSObject *)nextConstantHelper;
- (void)_moveToIndexOfLastEntry;
- (NSObject *)currentConstantHelper;
- (int)constantCount;
- (NSObject *)previousConstantHelper;
- (NSObject *)firstConstantHelper;
- (NSObject *)lastConstantHelper;

@end
