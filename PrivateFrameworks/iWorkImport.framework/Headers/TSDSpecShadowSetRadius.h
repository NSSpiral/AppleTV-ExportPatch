/* Runtime dump - TSDSpecShadowSetRadius
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecShadowSetRadius : TSDSpecShadow
{
    int _radius;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecShadowSetRadiusArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecShadowSetRadius *)newFromArchive:(struct SpecShadowSetRadiusArchive *)arg0 unarchiver:(struct SpecShadowSetRadiusArchive)arg1;

- (TSDSpecShadowSetRadius *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)shadowModifiedFromShadow:(id)arg0;
- (void)saveSpecShadowSetRadiusToArchive:(struct SpecShadowSetRadiusArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecShadowSetRadius *)initSpecShadowSetRadiusWithArchive:(struct SpecShadowSetRadiusArchive *)arg0 unarchiver:(struct SpecShadowSetRadiusArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
