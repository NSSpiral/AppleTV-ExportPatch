/* Runtime dump - TSDSpecShadowSetOpacity
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecShadowSetOpacity : TSDSpecShadow
{
    double _opacity;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecShadowSetOpacityArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecShadowSetOpacity *)newFromArchive:(struct SpecShadowSetOpacityArchive *)arg0 unarchiver:(struct SpecShadowSetOpacityArchive)arg1;

- (TSDSpecShadowSetOpacity *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)shadowModifiedFromShadow:(id)arg0;
- (void)saveSpecShadowSetOpacityToArchive:(struct SpecShadowSetOpacityArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecShadowSetOpacity *)initSpecShadowSetOpacityWithArchive:(struct SpecShadowSetOpacityArchive *)arg0 unarchiver:(struct SpecShadowSetOpacityArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
