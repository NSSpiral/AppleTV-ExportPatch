/* Runtime dump - VKHeightfield
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKHeightfield : NSObject
{
    float * _zBins;
    unsigned int _rowCount;
    unsigned int _columnCount;
}

- (void)dealloc;
- (VKHeightfield *)initWithRows:(unsigned int)arg0 columns:(unsigned int)arg1;
- (VKHeightfield *)initWithFootprintTile:(id)arg0 heightfieldRows:(unsigned int)arg1 heightfieldColumns:(unsigned int)arg2;

@end
