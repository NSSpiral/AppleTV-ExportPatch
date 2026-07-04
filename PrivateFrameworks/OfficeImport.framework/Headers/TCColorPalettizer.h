/* Runtime dump - TCColorPalettizer
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCColorPalettizer : NSObject
{
    struct _tagOctree * m_pTree;
    BOOL isDefaultPaletteSize;
}

- (void)dealloc;
- (int)createOctree:(struct _tagOctree * *)arg0 maxPaletteSize:(struct _tagOctree)arg1;
- (int)deleteOctree:(struct _tagOctree *)arg0;
- (BOOL)addQuadColor:(struct _tagRgbQuad)arg0;
- (int)addPixelToOctree:(struct _tagOctree *)arg0 pixel:(unsigned short)arg1;
- (int)reduceOctree:(struct _tagOctree *)arg0;
- (unsigned short)getPaletteFromOctree:(struct _tagOctreeNode *)arg0 paletteEntry:(id)arg1 index:(struct _tagOctreeNode *)arg2;
- (int)paletteIndexFromQuadColor:(struct _tagRgbQuad)arg0;
- (int)rgbToIndexOctree:(struct _tagOctree *)arg0 source:(unsigned short)arg1 destination:(unsigned short)arg2;
- (TCColorPalettizer *)initWitMaxPaletteSize:(unsigned int)arg0;
- (TCColorPalettizer *)initWitDefaultPaletteSize;
- (BOOL)addTSUColor:(UIColor *)arg0;
- (void)createPalette;
- (unsigned int)paletteColorCount;
- (id)getPaletteDataRaw;
- (NSData *)getPngPaletteData;
- (NSData *)getPaletteData;
- (int)paletteIndexFromTSUColor:(UIColor *)arg0;
- (int)createNodeOctree:(struct _tagOctreeNode * *)arg0 parent:(struct _tagOctreeNode)arg1;
- (int)deleteNodeOctree:(struct _tagOctreeNode *)arg0;
- (int)deleteListOctree:(struct _tagLevelItem *)arg0;

@end
