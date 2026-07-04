/* Runtime dump - TSCHReferenceLineGenericPropertyMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineGenericPropertyMap : TSSPropertyMap

+ (void)savePropertyMap:(NSObject *)arg0 toArchive:(struct ReferenceLineGenericPropertyMapArchive *)arg1 archiver:(NSObject *)arg2;
+ (NSDictionary *)imageFillProperties;
+ (NSDictionary *)properties;

- (void)saveToArchive:(struct ReferenceLineGenericPropertyMapArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCHReferenceLineGenericPropertyMap *)initWithArchive:(struct ReferenceLineGenericPropertyMapArchive *)arg0 unarchiver:(struct ReferenceLineGenericPropertyMapArchive)arg1;

@end
