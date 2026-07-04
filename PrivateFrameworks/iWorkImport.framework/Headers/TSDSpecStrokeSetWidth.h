/* Runtime dump - TSDSpecStrokeSetWidth
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecStrokeSetWidth : TSDSpecStroke
{
    double _width;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecStrokeSetWidthArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecStrokeSetWidth *)newFromArchive:(struct SpecStrokeSetWidthArchive *)arg0 unarchiver:(struct SpecStrokeSetWidthArchive)arg1;

- (TSDSpecStrokeSetWidth *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)strokeModifiedFromStroke:(id)arg0;
- (void)saveSpecStrokeSetWidthToArchive:(struct SpecStrokeSetWidthArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecStrokeSetWidth *)initSpecStrokeSetWidthWithArchive:(struct SpecStrokeSetWidthArchive *)arg0 unarchiver:(struct SpecStrokeSetWidthArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
