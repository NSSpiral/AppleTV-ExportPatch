/* Runtime dump - TSDSpecShadowSetColor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecShadowSetColor : TSDSpecShadow
{
    TSUColor * _color;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecShadowSetColorArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecShadowSetColor *)newFromArchive:(struct SpecShadowSetColorArchive *)arg0 unarchiver:(struct SpecShadowSetColorArchive)arg1;

- (TSDSpecShadowSetColor *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)shadowModifiedFromShadow:(id)arg0;
- (void)saveSpecShadowSetColorToArchive:(struct SpecShadowSetColorArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecShadowSetColor *)initSpecShadowSetColorWithArchive:(struct SpecShadowSetColorArchive *)arg0 unarchiver:(struct SpecShadowSetColorArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
