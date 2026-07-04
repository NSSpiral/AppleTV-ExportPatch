/* Runtime dump - EBGraphic
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBGraphic : NSObject

+ (void)readGraphicsInChart:(id)arg0 state:(NSObject *)arg1;
+ (NSObject *)readMainChartWithState:(NSObject *)arg0;
+ (NSDictionary *)readGraphicWithDictionary:(NSDictionary *)arg0 state:(NSObject *)arg1;
+ (void)readNotesWithDictionary:(NSDictionary *)arg0 state:(NSObject *)arg1;
+ (void)readChart:(id)arg0 chartIndex:(short)arg1 state:(NSObject *)arg2;
+ (void)readOle:(struct _xmlNode *)arg0 xlGraphicsInfo:(struct XlGraphicsInfo *)arg1 state:(struct XlObjData * *)arg2;
+ (void)readImage:(UIImage *)arg0 xlGraphicsInfo:(struct XlGraphicsInfo *)arg1 state:(struct XlObjData * *)arg2;
+ (int)objectTypeForShape:(id)arg0;
+ (void)readGraphicsWithState:(NSObject *)arg0;

@end
