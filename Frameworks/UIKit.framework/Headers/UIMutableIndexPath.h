/* Runtime dump - UIMutableIndexPath
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableIndexPath : NSIndexPath
{
    unsigned int * _mutableIndexes;
    char _locked;
}

+ (void)setIndex:(unsigned int)arg0 atPosition:(unsigned int)arg1 forIndexPath:(id *)arg2;

- (UIMutableIndexPath *)retain;
- (void)dealloc;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (UIMutableIndexPath *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)indexAtPosition:(unsigned int)arg0;
- (UIMutableIndexPath *)initWithIndexes:(unsigned int *)arg0 length:(unsigned int)arg1;
- (void)getIndexes:(unsigned int *)arg0;

@end
