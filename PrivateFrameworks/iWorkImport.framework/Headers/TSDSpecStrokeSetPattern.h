/* Runtime dump - TSDSpecStrokeSetPattern
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecStrokeSetPattern : TSDSpecStroke
{
    TSDStrokePattern * _pattern;
    int _lineCap;
    int _lineJoin;
    double _miterLimit;
    double _width;
    TSUColor * _color;
    char _definedLineCap;
    char _definedLineJoin;
    char _definedMiterLimit;
    char _definedWidth;
    char _definedColor;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecStrokeSetPatternArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecStrokeSetPattern *)newFromArchive:(struct SpecStrokeSetPatternArchive *)arg0 unarchiver:(struct SpecStrokeSetPatternArchive)arg1;

- (TSDSpecStrokeSetPattern *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)strokeModifiedFromStroke:(id)arg0;
- (void)saveSpecStrokeSetPatternToArchive:(struct SpecStrokeSetPatternArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecStrokeSetPattern *)initSpecStrokeSetPatternWithArchive:(struct SpecStrokeSetPatternArchive *)arg0 unarchiver:(struct SpecStrokeSetPatternArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
