/* Runtime dump - TSDSpecShadowSetAngle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecShadowSetAngle : TSDSpecShadow
{
    double _angle;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecShadowSetAngleArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecShadowSetAngle *)newFromArchive:(struct SpecShadowSetAngleArchive *)arg0 unarchiver:(struct SpecShadowSetAngleArchive)arg1;

- (TSDSpecShadowSetAngle *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)shadowModifiedFromShadow:(id)arg0;
- (void)saveSpecShadowSetAngleToArchive:(struct SpecShadowSetAngleArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecShadowSetAngle *)initSpecShadowSetAngleWithArchive:(struct SpecShadowSetAngleArchive *)arg0 unarchiver:(struct SpecShadowSetAngleArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
