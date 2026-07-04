/* Runtime dump - TSTTableStrokePreset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStrokePreset : TSPObject <TSSPreset>
{
    unsigned int mIndex;
}

@property (readonly, nonatomic) NSString * presetKind;

- (TSTTableStrokePreset *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct TableStrokePresetArchive *)arg0 archiver:(NSObject *)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (NSString *)presetKind;
- (TSTTableStrokePreset *)init;
- (TSTTableStrokePreset *)initWithContext:(TSPObjectContext *)arg0;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;

@end
