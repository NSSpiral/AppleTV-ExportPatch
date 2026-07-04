/* Runtime dump - TSDSpecShadowSetOffset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecShadowSetOffset : TSDSpecShadow
{
    double _offset;
}

+ (void)saveObject:(NSObject *)arg0 toArchive:(struct SpecShadowSetOffsetArchive *)arg1 archiver:(NSObject *)arg2;
+ (TSDSpecShadowSetOffset *)newFromArchive:(struct SpecShadowSetOffsetArchive *)arg0 unarchiver:(struct SpecShadowSetOffsetArchive)arg1;

- (TSDSpecShadowSetOffset *)initWithCurrentProperty:(NSObject *)arg0;
- (char)canApplyOnObject:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (id)shadowModifiedFromShadow:(id)arg0;
- (void)saveSpecShadowSetOffsetToArchive:(struct SpecShadowSetOffsetArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDSpecShadowSetOffset *)initSpecShadowSetOffsetWithArchive:(struct SpecShadowSetOffsetArchive *)arg0 unarchiver:(struct SpecShadowSetOffsetArchive)arg1;
- (id)apply:(id /* block */)arg0;

@end
