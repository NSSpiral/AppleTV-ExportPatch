/* Runtime dump - TSCH3DImageTextureTiling
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling
{
    int _mode;
    int _wrap;
    int _face;
    int _xPosition;
    int _yPosition;
    int _sContinuity;
    int _tContinuity;
    char _reveal;
}

@property (nonatomic) int mode;
@property (nonatomic) int wrap;
@property (nonatomic) int face;
@property (nonatomic) int xposition;
@property (nonatomic) int yposition;
@property (nonatomic) int scontinuity;
@property (nonatomic) int tcontinuity;
@property (nonatomic) char reveal;

+ (TSCH3DImageTextureTiling *)instanceWithArchive:(struct Chart3DImageTextureTilingArchive *)arg0 unarchiver:(struct Chart3DImageTextureTilingArchive)arg1;

- (void)saveToArchive:(struct Chart3DImageTextureTilingArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCH3DImageTextureTiling *)initWithArchive:(struct Chart3DImageTextureTilingArchive *)arg0 unarchiver:(struct Chart3DImageTextureTilingArchive)arg1;
- (void)copyFromBaseImageTextureTiling:(id)arg0;
- (void)restoreDefault;
- (int)xposition;
- (void)setXposition:(int)arg0;
- (int)yposition;
- (void)setYposition:(int)arg0;
- (int)scontinuity;
- (void)setScontinuity:(int)arg0;
- (int)tcontinuity;
- (void)setTcontinuity:(int)arg0;
- (char)reveal;
- (void)setReveal:(char)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DImageTextureTiling *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (int)face;
- (void)setFace:(int)arg0;
- (int)wrap;
- (void)setWrap:(int)arg0;

@end
