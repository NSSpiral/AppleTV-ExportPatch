/* Runtime dump - EXColorReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXColorReference : NSObject

+ (NSObject *)autoColorWithCallerClass:(Class)arg0 resources:(NSArray *)arg1;
+ (NSObject *)edColorReferenceFromXmlColorElement:(struct _xmlNode *)arg0 callerClass:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (UIColor *)getStringFromColor:(UIColor *)arg0;
+ (unsigned int)colorIndexForColor:(UIColor *)arg0 state:(NSObject *)arg1;

@end
