/* Runtime dump - TSDSpecGradientFillSetAngle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecGradientFillSetAngle : TSDSpecFill
{
    double _angle;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecGradientFillSetAngleArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecGradientFillSetAngle *)newFromArchive:(struct SpecGradientFillSetAngleArchive *)arg0 unarchiver:(struct SpecGradientFillSetAngleArchive)arg1;

- (TSDSpecGradientFillSetAngle *)initWithCurrentProperty:(NSObject *)arg0;
- (id)fillModifiedFromFill:(id)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (void)saveSpecGradientFillSetAngleToArchive:(struct SpecGradientFillSetAngleArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecGradientFillSetAngle *)initSpecGradientFillSetAngleWithArchive:(struct SpecGradientFillSetAngleArchive *)arg0 unarchiver:(struct SpecGradientFillSetAngleArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
