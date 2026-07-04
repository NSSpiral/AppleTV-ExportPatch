/* Runtime dump - TSDSpecReflectionSetOpacity
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecReflectionSetOpacity : TSDSpecReflection
{
    double _opacity;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecReflectionSetOpacityArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecReflectionSetOpacity *)newFromArchive:(struct SpecReflectionSetOpacityArchive *)arg0 unarchiver:(struct SpecReflectionSetOpacityArchive)arg1;

- (TSDSpecReflectionSetOpacity *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)reflectionModifiedFromReflection:(id)arg0;
- (void)saveSpecReflectionSetOpacityToArchive:(struct SpecReflectionSetOpacityArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecReflectionSetOpacity *)initSpecReflectionSetOpacityWithArchive:(struct SpecReflectionSetOpacityArchive *)arg0 unarchiver:(struct SpecReflectionSetOpacityArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
