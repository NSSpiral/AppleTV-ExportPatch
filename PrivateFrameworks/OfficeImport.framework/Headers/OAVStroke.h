/* Runtime dump - OAVStroke
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVStroke : NSObject

+ (void)initialize;
+ (int)readPresetDashStyle:(NSObject *)arg0;
+ (int)readLineEndType:(NSObject *)arg0;
+ (int)readLineEndWidth:(id)arg0;
+ (int)readLineEndLength:(id)arg0;
+ (int)readCapStyle:(NSObject *)arg0;
+ (int)readCompoundType:(NSObject *)arg0;
+ (NSObject *)targetFgColorWithManager:(NSObject *)arg0;
+ (NSObject *)readFromManager:(NSObject *)arg0;
+ (void)readFillStyleFromManager:(NSObject *)arg0 toStroke:(OABStroke *)arg1;
+ (void)readDashStyleFromManager:(NSObject *)arg0 toStroke:(OABStroke *)arg1;
+ (void)readJoinStyleFromManager:(NSObject *)arg0 toStroke:(OABStroke *)arg1;
+ (void)readLineEnd:(id)arg0 type:(NSObject *)arg1 width:(int *)arg2 length:(AWDCoreRoutineModelLength *)arg3;

@end
