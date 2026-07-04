/* Runtime dump - TSTStrokeSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSelection : TSKSelection
{
    unsigned int _mask;
}

@property (readonly, nonatomic) unsigned int mask;

+ (Class)archivedSelectionClass;
+ (NSObject *)strokeSelectionWithMask:(unsigned int)arg0;

- (void)saveToArchive:(struct StrokeSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTStrokeSelection *)initWithArchive:(struct StrokeSelectionArchive *)arg0 unarchiver:(struct StrokeSelectionArchive)arg1;
- (TSTStrokeSelection *)initWithStrokeVisibilityMask:(unsigned int)arg0;
- (TSTStrokeSelection *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)mask;

@end
