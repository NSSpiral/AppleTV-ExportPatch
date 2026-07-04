/* Runtime dump - TSDSpecColorFillSetColor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecColorFillSetColor : TSDSpecFill
{
    TSUColor * _color;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecColorFillSetColorArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecColorFillSetColor *)newFromArchive:(struct SpecColorFillSetColorArchive *)arg0 unarchiver:(struct SpecColorFillSetColorArchive)arg1;

- (TSDSpecColorFillSetColor *)initWithCurrentProperty:(NSObject *)arg0;
- (id)fillModifiedFromFill:(id)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (void)saveSpecColorFillSetColorToArchive:(struct SpecColorFillSetColorArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecColorFillSetColor *)initSpecColorFillSetColorWithArchive:(struct SpecColorFillSetColorArchive *)arg0 unarchiver:(struct SpecColorFillSetColorArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
