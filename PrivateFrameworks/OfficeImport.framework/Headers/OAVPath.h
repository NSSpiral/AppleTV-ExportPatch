/* Runtime dump - OAVPath
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVPath : NSObject

+ (int)parseCommand:(char * *)arg0;
+ (struct EshComputedValue)parseParam:(char * *)arg0 first:(char *)arg1;
+ (void)writePath:(NSString *)arg0 toString:(NSString *)arg1;
+ (void)readPath:(NSString *)arg0 toGeometry:(NSObject *)arg1;

@end
