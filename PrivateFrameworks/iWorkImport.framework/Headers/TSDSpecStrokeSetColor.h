/* Runtime dump - TSDSpecStrokeSetColor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecStrokeSetColor : TSDSpecStroke
{
    TSUColor * _color;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecStrokeSetColorArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecStrokeSetColor *)newFromArchive:(struct SpecStrokeSetColorArchive *)arg0 unarchiver:(struct SpecStrokeSetColorArchive)arg1;

- (TSDSpecStrokeSetColor *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)strokeModifiedFromStroke:(id)arg0;
- (void)saveSpecStrokeSetColorToArchive:(struct SpecStrokeSetColorArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecStrokeSetColor *)initSpecStrokeSetColorWithArchive:(struct SpecStrokeSetColorArchive *)arg0 unarchiver:(struct SpecStrokeSetColorArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
