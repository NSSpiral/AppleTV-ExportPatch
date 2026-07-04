/* Runtime dump - CHXDateAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXDateAxis : NSObject

+ (NSObject *)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdTimeUnitFromXmlTimeUnitElement:(struct _xmlNode *)arg0;
+ (CHXDateAxis *)stringFromTimeUnit:(int)arg0;

@end
