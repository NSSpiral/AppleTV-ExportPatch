/* Runtime dump - TSTTableStrokePresetList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStrokePresetList : NSObject
{
    unsigned int mCount;
    id mPresets;
}

+ (TSTTableStrokePresetList *)instanceWithArchive:(struct StrokePresetListArchive *)arg0 unarchiver:(struct StrokePresetListArchive)arg1;
+ (NSObject *)strokePresetListForDefaultPropertyMapForTablePresetID:(unsigned int)arg0 colors:(struct ? *)arg1;
+ (TSTTableStrokePresetList *)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(TSDStroke *)arg0 verticalStroke:(TSDStroke *)arg1 exteriorStroke:(TSDStroke *)arg2;
+ (TSTTableStrokePresetList *)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg0 andThinStroke:(id)arg1;
+ (TSTTableStrokePresetList *)init;

- (void)saveToArchive:(struct StrokePresetListArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTTableStrokePresetList *)initWithArchive:(struct StrokePresetListArchive *)arg0 unarchiver:(struct StrokePresetListArchive)arg1;
- (NSSet *)horizontalStrokeForStrokePreset:(unsigned int)arg0;
- (NSSet *)verticalStrokeForStrokePreset:(unsigned int)arg0;
- (NSSet *)exteriorStrokeForStrokePreset:(unsigned int)arg0;
- (unsigned int)maskForStrokePreset:(unsigned int)arg0;
- (unsigned int)maskForStrokePresets:(id)arg0;
- (void)setStrokePreset:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (NSObject *)presetAtIndex:(unsigned int)arg0;
- (void)setStroke:(TSDStroke *)arg0 forPresetIndex:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;

@end
