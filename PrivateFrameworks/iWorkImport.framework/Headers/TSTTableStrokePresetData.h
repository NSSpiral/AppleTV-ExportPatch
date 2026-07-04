/* Runtime dump - TSTTableStrokePresetData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStrokePresetData : NSObject
{
    TSDStroke * mHorizontalStroke;
    TSDStroke * mVerticalStroke;
    TSDStroke * mExteriorStroke;
    unsigned int mVisibleMask;
}

@property (retain, nonatomic) TSDStroke * horizontalStroke;
@property (retain, nonatomic) TSDStroke * verticalStroke;
@property (retain, nonatomic) TSDStroke * exteriorStroke;
@property (nonatomic) unsigned int mask;

- (void)saveToArchive:(struct StrokePresetDataArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTTableStrokePresetData *)initWithArchive:(struct StrokePresetDataArchive *)arg0 unarchiver:(struct StrokePresetDataArchive)arg1;
- (TSTTableStrokePresetData *)initWithMask:(unsigned int)arg0 horizontalStroke:(TSDStroke *)arg1 verticalStroke:(TSDStroke *)arg2 exteriorStroke:(TSDStroke *)arg3;
- (TSTTableStrokePresetData *)initWithDeprecatedArchive:(struct Deprecated_StrokePresetDataArchive *)arg0 unarchiver:(struct Deprecated_StrokePresetDataArchive)arg1;
- (TSDStroke *)horizontalStroke;
- (TSDStroke *)verticalStroke;
- (TSDStroke *)exteriorStroke;
- (void)setHorizontalStroke:(TSDStroke *)arg0;
- (void)setVerticalStroke:(TSDStroke *)arg0;
- (void)setExteriorStroke:(TSDStroke *)arg0;
- (void)dealloc;
- (TSTTableStrokePresetData *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)mask;
- (void)setMask:(unsigned int)arg0;

@end
